
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct TYPE_2__ {int nic_core_reset_owner; } ;
struct qla_hw_data {unsigned long fcoe_dev_init_timeout; unsigned long fcoe_reset_timeout; TYPE_1__ flags; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,struct scsi_qla_host*,int,char*,int,char*) ;
 int VAR_7 ;
 int FUNC_3 (int ,struct scsi_qla_host*,int,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct scsi_qla_host*) ;
 int FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (struct qla_hw_data*) ;
 int FUNC_7 (struct qla_hw_data*) ;
 int FUNC_8 (struct scsi_qla_host*) ;
 int FUNC_9 (struct scsi_qla_host*) ;
 int FUNC_10 (struct scsi_qla_host*,int ) ;
 int FUNC_11 (struct scsi_qla_host*) ;
 int FUNC_12 (struct scsi_qla_host*,int ,int) ;
 int FUNC_13 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_14 (unsigned long,unsigned long) ;

int
FUNC_15(struct scsi_qla_host *VAR_10)
{
 uint32_t VAR_11;
 int VAR_12 = VAR_5;
 unsigned long VAR_13;
 struct qla_hw_data *VAR_14 = VAR_10->hw;

 VAR_12 = FUNC_11(VAR_10);
 if (VAR_12 == VAR_4)
  goto exit_error;

 VAR_11 = FUNC_10(VAR_10, VAR_3);
 FUNC_2(VAR_7, VAR_10, 0xb0ce,
     "Device state is 0x%x = %s\n",
     VAR_11, VAR_11 < VAR_1 ?
     FUNC_1(VAR_11) : "Unknown");


 VAR_13 = VAR_6 + (VAR_14->fcoe_dev_init_timeout * VAR_0);

 FUNC_6(VAR_14);

 while (1) {
  if (FUNC_14(VAR_6, VAR_13)) {
   if (FUNC_4(VAR_10) == VAR_5) {
    FUNC_3(VAR_9, VAR_10, 0xb0cf,
        "%s: Device Init Failed 0x%x = %s\n",
        VAR_2, VAR_11,
        VAR_11 < VAR_1 ?
        FUNC_1(VAR_11) : "Unknown");
    FUNC_12(VAR_10,
        VAR_3,
        133);
   }
  }

  VAR_11 = FUNC_10(VAR_10, VAR_3);
  FUNC_3(VAR_8, VAR_10, 0xb0d0,
      "Device state is 0x%x = %s\n",
      VAR_11, VAR_11 < VAR_1 ?
      FUNC_1(VAR_11) : "Unknown");


  switch (VAR_11) {
  case 128:
   VAR_14->flags.nic_core_reset_owner = 0;
   goto exit;
  case 134:
   VAR_12 = FUNC_5(VAR_10);
   break;
  case 132:
   FUNC_7(VAR_14);
   FUNC_0(1000);
   FUNC_6(VAR_14);
   break;
  case 130:



   FUNC_9(VAR_10);
   break;
  case 131:

   FUNC_8(VAR_10);


   VAR_13 = VAR_6 +
       (VAR_14->fcoe_reset_timeout * VAR_0);
   break;
  case 129:
   FUNC_3(VAR_8, VAR_10, 0xb0d1,
       "HW State: QUIESCENT\n");

   FUNC_7(VAR_14);
   FUNC_0(1000);
   FUNC_6(VAR_14);


   VAR_13 = VAR_6 +
       (VAR_14->fcoe_reset_timeout * VAR_0);
   break;
  case 133:
   VAR_14->flags.nic_core_reset_owner = 0;
   FUNC_7(VAR_14);
   FUNC_13(VAR_10);
   VAR_12 = VAR_4;
   FUNC_6(VAR_14);
   goto exit;
  default:
   FUNC_7(VAR_14);
   FUNC_13(VAR_10);
   VAR_12 = VAR_4;
   FUNC_6(VAR_14);
   goto exit;
  }
 }
exit:
 FUNC_7(VAR_14);

exit_error:
 return VAR_12;
}
