
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; scalar_t__ retries; TYPE_2__* request; int (* scsi_done ) (struct scsi_cmnd*) ;TYPE_1__* device; } ;
struct hpsa_scsi_dev_t {scalar_t__ in_reset; scalar_t__ removed; } ;
struct ctlr_info {scalar_t__ acciopath_status; } ;
struct Scsi_Host {int dummy; } ;
struct CommandList {int dummy; } ;
struct TYPE_4__ {scalar_t__ tag; } ;
struct TYPE_3__ {struct hpsa_scsi_dev_t* hostdata; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 struct CommandList* FUNC_2 (struct ctlr_info*,struct scsi_cmnd*) ;
 int FUNC_3 (struct ctlr_info*,struct CommandList*,struct scsi_cmnd*,struct hpsa_scsi_dev_t*) ;
 int FUNC_4 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_5 (struct ctlr_info*,struct CommandList*,struct scsi_cmnd*) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct ctlr_info*) ;
 struct ctlr_info* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct scsi_cmnd*) ;
 int FUNC_10 (struct scsi_cmnd*) ;
 int FUNC_11 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct Scsi_Host *VAR_3, struct scsi_cmnd *VAR_4)
{
 struct ctlr_info *VAR_5;
 struct hpsa_scsi_dev_t *VAR_6;
 struct CommandList *VAR_7;
 int VAR_8 = 0;


 VAR_5 = FUNC_8(VAR_4->device);

 FUNC_0(VAR_4->request->tag < 0);

 VAR_6 = VAR_4->device->hostdata;
 if (!VAR_6) {
  VAR_4->result = VAR_0 << 16;
  VAR_4->scsi_done(VAR_4);
  return 0;
 }

 if (VAR_6->removed) {
  VAR_4->result = VAR_0 << 16;
  VAR_4->scsi_done(VAR_4);
  return 0;
 }

 if (FUNC_12(FUNC_7(VAR_5))) {
  VAR_4->result = VAR_0 << 16;
  VAR_4->scsi_done(VAR_4);
  return 0;
 }

 if (VAR_6->in_reset)
  return VAR_1;

 VAR_7 = FUNC_2(VAR_5, VAR_4);
 if (VAR_7 == ((void*)0))
  return VAR_1;





 VAR_4->result = 0;





 if (FUNC_6(VAR_4->retries == 0 &&
   !FUNC_1(VAR_4->request) &&
   VAR_5->acciopath_status)) {
  VAR_8 = FUNC_5(VAR_5, VAR_7, VAR_4);
  if (VAR_8 == 0)
   return 0;
  if (VAR_8 == VAR_2) {
   FUNC_4(VAR_5, VAR_7);
   return VAR_2;
  }
 }
 return FUNC_3(VAR_5, VAR_7, VAR_4, VAR_6);
}
