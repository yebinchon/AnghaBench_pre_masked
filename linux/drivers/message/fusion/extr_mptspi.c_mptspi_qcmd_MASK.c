
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_cmnd {int result; TYPE_2__* device; int (* scsi_done ) (struct scsi_cmnd*) ;} ;
struct _MPT_SCSI_HOST {int * ioc; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_3__ {int vtarget; } ;
typedef TYPE_1__ VirtDevice ;
struct TYPE_4__ {int channel; int id; TYPE_1__* hostdata; } ;
typedef int MPT_ADAPTER ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (TYPE_2__*) ;
 struct _MPT_SCSI_HOST* FUNC_5 (struct Scsi_Host*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static int
FUNC_9(struct Scsi_Host *VAR_1, struct scsi_cmnd *VAR_2)
{
 struct _MPT_SCSI_HOST *VAR_3 = FUNC_5(VAR_1);
 VirtDevice *VAR_4 = VAR_2->device->hostdata;
 MPT_ADAPTER *VAR_5 = VAR_3->ioc;

 if (!VAR_4 || !VAR_4->vtarget) {
  VAR_2->result = VAR_0 << 16;
  VAR_2->scsi_done(VAR_2);
  return 0;
 }

 if (VAR_2->device->channel == 1 &&
  FUNC_1(VAR_5, 0, VAR_2->device->id) == 0) {
  VAR_2->result = VAR_0 << 16;
  VAR_2->scsi_done(VAR_2);
  return 0;
 }

 if (FUNC_6(FUNC_4(VAR_2->device)))
  FUNC_0(VAR_5, FUNC_3(VAR_2));

 return FUNC_2(VAR_2);
}
