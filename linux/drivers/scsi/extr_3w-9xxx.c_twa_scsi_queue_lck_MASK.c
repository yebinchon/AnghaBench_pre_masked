
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct scsi_cmnd {int result; void (* scsi_done ) (struct scsi_cmnd*) ;TYPE_2__* device; } ;
struct TYPE_10__ {scalar_t__ working_srl; } ;
struct TYPE_11__ {int * state; struct scsi_cmnd** srb; TYPE_3__ tw_compat_info; int flags; } ;
struct TYPE_9__ {scalar_t__ lun; TYPE_1__* host; } ;
struct TYPE_8__ {scalar_t__ hostdata; } ;
typedef TYPE_4__ TW_Device_Extension ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (struct scsi_cmnd*) ;
 int FUNC_3 (TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int*) ;
 int FUNC_5 (TYPE_4__*,int,int *,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct scsi_cmnd *VAR_5, void (*VAR_6)(struct scsi_cmnd *))
{
 int VAR_7, VAR_8;
 TW_Device_Extension *VAR_9 = (TW_Device_Extension *)VAR_5->device->host->hostdata;


 if (FUNC_1(VAR_3, &VAR_9->flags)) {
  VAR_8 = 128;
  goto out;
 }


 if ((VAR_5->device->lun != 0) && (VAR_9->tw_compat_info.working_srl < VAR_2)) {
  VAR_5->result = (VAR_0 << 16);
  VAR_6(VAR_5);
  VAR_8 = 0;
  goto out;
 }


 VAR_5->scsi_done = VAR_6;


 FUNC_4(VAR_9, &VAR_7);


 VAR_9->srb[VAR_7] = VAR_5;

 VAR_8 = FUNC_5(VAR_9, VAR_7, ((void*)0), 0, ((void*)0));
 switch (VAR_8) {
 case 128:
  if (FUNC_2(VAR_5))
   FUNC_0(VAR_5);
  FUNC_3(VAR_9, VAR_7);
  break;
 case 1:
  VAR_5->result = (VAR_1 << 16);
  if (FUNC_2(VAR_5))
   FUNC_0(VAR_5);
  VAR_6(VAR_5);
  VAR_9->state[VAR_7] = VAR_4;
  FUNC_3(VAR_9, VAR_7);
  VAR_8 = 0;
 }
out:
 return VAR_8;
}
