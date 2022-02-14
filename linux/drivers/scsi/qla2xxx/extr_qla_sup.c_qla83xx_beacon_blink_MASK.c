
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int beacon_blink_led; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (struct qla_hw_data*) ;
 int VAR_0 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct scsi_qla_host*,int,int) ;
 int FUNC_8 (struct scsi_qla_host*,int*) ;
 int FUNC_9 (struct scsi_qla_host*,int*) ;
 int FUNC_10 (struct scsi_qla_host*,int,int*) ;
 int FUNC_11 (struct qla_hw_data*) ;
 int FUNC_12 (struct scsi_qla_host*,int,int) ;

void
FUNC_13(struct scsi_qla_host *VAR_1)
{
 uint32_t VAR_2;
 struct qla_hw_data *VAR_3 = VAR_1->hw;
 uint16_t VAR_4[6];
 uint16_t VAR_5[6];
 uint32_t VAR_6, VAR_7;

 if (!FUNC_5(VAR_3) && !FUNC_4(VAR_3) && !FUNC_1(VAR_3) &&
     !FUNC_2(VAR_3))
  return;

 if (!VAR_3->beacon_blink_led)
  return;

 if (FUNC_1(VAR_3) || FUNC_2(VAR_3)) {
  FUNC_7(VAR_1, 0x1003, 0x40000230);
  FUNC_7(VAR_1, 0x1004, 0x40000230);
 } else if (FUNC_0(VAR_3)) {
  VAR_2 = FUNC_11(VAR_3);

  FUNC_12(VAR_1, VAR_2, 0x40000230);
  FUNC_12(VAR_1, VAR_2 + 4, 0x40000230);
 } else if (FUNC_3(VAR_3)) {
  VAR_2 = FUNC_11(VAR_3);

  FUNC_10(VAR_1, VAR_2, &VAR_6);
  FUNC_10(VAR_1, VAR_2 + 0x10, &VAR_7);
  FUNC_12(VAR_1, VAR_2, 0x01f44000);
  FUNC_6(500);
  FUNC_12(VAR_1, VAR_2, 0x400001f4);
  FUNC_6(1000);
  FUNC_12(VAR_1, VAR_2, VAR_6);
  FUNC_12(VAR_1, VAR_2 + 0x10, VAR_7);
 } else if (FUNC_4(VAR_3)) {
  int VAR_8;


  VAR_8 = FUNC_8(VAR_1, VAR_5);

  if (VAR_8 == VAR_0) {
   if (FUNC_4(VAR_3)) {
    VAR_4[0] = 0x4000;
    VAR_4[1] = 0x2000;
    VAR_4[2] = 0;
    VAR_4[3] = 0;
    VAR_4[4] = 0;
    VAR_4[5] = 0;
   } else {
    VAR_4[0] = 0x4000;
    VAR_4[1] = 0x4000;
    VAR_4[2] = 0x4000;
    VAR_4[3] = 0x2000;
    VAR_4[4] = 0;
    VAR_4[5] = 0x2000;
   }
   VAR_8 = FUNC_9(VAR_1, VAR_4);
   FUNC_6(1000);
   if (FUNC_4(VAR_3)) {
    VAR_4[0] = 0x4000;
    VAR_4[1] = 0x2000;
    VAR_4[2] = 0;
   } else {
    VAR_4[0] = 0x4000;
    VAR_4[1] = 0x2000;
    VAR_4[2] = 0x4000;
    VAR_4[3] = 0x4000;
    VAR_4[4] = 0;
    VAR_4[5] = 0x2000;
   }
   VAR_8 = FUNC_9(VAR_1, VAR_4);
  }

  FUNC_9(VAR_1, VAR_5);
 }
}
