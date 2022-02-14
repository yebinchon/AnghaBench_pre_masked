
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct scsi_qla_host {TYPE_1__* isp_ops; int flags; } ;
struct TYPE_2__ {int (* need_reset ) (struct scsi_qla_host*) ;int (* restart_firmware ) (struct scsi_qla_host*) ;int (* idc_lock ) (struct scsi_qla_host*) ;int (* idc_unlock ) (struct scsi_qla_host*) ;int (* rom_lock_recovery ) (struct scsi_qla_host*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct scsi_qla_host*,char*) ;
 int FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_5 (struct scsi_qla_host*,int ) ;
 int FUNC_6 (struct scsi_qla_host*,int ,int ) ;
 int FUNC_7 (struct scsi_qla_host*) ;
 int FUNC_8 (struct scsi_qla_host*) ;
 int FUNC_9 (struct scsi_qla_host*) ;
 int FUNC_10 (struct scsi_qla_host*) ;
 int FUNC_11 (struct scsi_qla_host*) ;
 int FUNC_12 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_13 (int ,int *) ;

int FUNC_14(struct scsi_qla_host *VAR_9)
{
 int VAR_10 = VAR_7;
 int VAR_11;
 uint32_t VAR_12, VAR_13;
 int VAR_14 = 0;

 VAR_14 = VAR_9->isp_ops->need_reset(VAR_9);

 if (VAR_14) {

  if (FUNC_13(VAR_0, &VAR_9->flags))
   VAR_9->isp_ops->rom_lock_recovery(VAR_9);
 } else {
  VAR_12 = FUNC_5(VAR_9, VAR_6);
  for (VAR_11 = 0; VAR_11 < 10; VAR_11++) {
   FUNC_1(200);
   VAR_13 = FUNC_5(VAR_9,
          VAR_6);
   if (VAR_13 != VAR_12) {
    VAR_10 = VAR_8;
    goto dev_ready;
   }
  }
  VAR_9->isp_ops->rom_lock_recovery(VAR_9);
 }


 FUNC_2(VAR_1, VAR_9, "HW State: INITIALIZING\n");
 FUNC_6(VAR_9, VAR_2,
       VAR_4);

 VAR_9->isp_ops->idc_unlock(VAR_9);

 if (FUNC_0(VAR_9))
  FUNC_4(VAR_9);

 VAR_10 = VAR_9->isp_ops->restart_firmware(VAR_9);
 VAR_9->isp_ops->idc_lock(VAR_9);

 if (VAR_10 != VAR_8) {
  FUNC_2(VAR_1, VAR_9, "HW State: FAILED\n");
  FUNC_3(VAR_9);
  FUNC_6(VAR_9, VAR_2,
        VAR_3);
  return VAR_10;
 }

dev_ready:
 FUNC_2(VAR_1, VAR_9, "HW State: READY\n");
 FUNC_6(VAR_9, VAR_2, VAR_5);

 return VAR_10;
}
