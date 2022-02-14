
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct scsi_cmnd {int* cmnd; } ;
struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int *,int) ;
 int FUNC_6 (struct rtsx_chip*,int ,int) ;
 int FUNC_7 (int *,int ,struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 int FUNC_9 (struct scsi_cmnd*,int ) ;
 int FUNC_10 (struct rtsx_chip*,int ) ;
 int FUNC_11 (struct rtsx_chip*) ;

int FUNC_12(struct scsi_cmnd *VAR_28, struct rtsx_chip *VAR_29)
{
 int VAR_30;
 u16 VAR_31;
 u8 *VAR_32;

 FUNC_10(VAR_29, VAR_19);

 VAR_31 = ((u16)(VAR_28->cmnd[7]) << 8) | VAR_28->cmnd[8];
 if (VAR_31 > 512) {
  FUNC_10(VAR_29, VAR_16);
  return VAR_25;
 }

 VAR_30 = FUNC_11(VAR_29);
 if (VAR_30 != VAR_26) {
  FUNC_10(VAR_29, VAR_15);
  return VAR_25;
 }

 FUNC_4(VAR_29);

 FUNC_2(VAR_29, VAR_27, VAR_0, 0x01,
       VAR_3);

 FUNC_2(VAR_29, VAR_27, VAR_12, 0xFF, VAR_28->cmnd[3]);
 FUNC_2(VAR_29, VAR_27, VAR_6, 0xFF, VAR_28->cmnd[4]);
 FUNC_2(VAR_29, VAR_27, VAR_5, 0xFF, VAR_28->cmnd[5]);
 FUNC_2(VAR_29, VAR_27, VAR_4, 0xFF, VAR_28->cmnd[6]);
 FUNC_2(VAR_29, VAR_27, VAR_10, 0xFF,
       VAR_13 | VAR_7);
 FUNC_2(VAR_29, VAR_27, VAR_18, 0xFF, VAR_28->cmnd[7]);
 FUNC_2(VAR_29, VAR_27, VAR_17, 0xFF, VAR_28->cmnd[8]);

 if (VAR_31 == 0) {
  if (VAR_28->cmnd[9]) {
   FUNC_2(VAR_29, VAR_27, VAR_21,
         0xFF, VAR_23 | VAR_9);
  } else {
   FUNC_2(VAR_29, VAR_27, VAR_21,
         0xFF, VAR_23 | VAR_14);
  }
 } else {
  if (VAR_28->cmnd[9]) {
   FUNC_2(VAR_29, VAR_27, VAR_21, 0xFF,
         VAR_23 | VAR_8);
  } else {
   FUNC_2(VAR_29, VAR_27, VAR_21, 0xFF,
         VAR_23 | VAR_11);
  }
 }

 FUNC_2(VAR_29, VAR_1, VAR_21, VAR_22,
       VAR_22);

 VAR_30 = FUNC_6(VAR_29, 0, 100);
 if (VAR_30 < 0) {
  FUNC_3(VAR_29);
  FUNC_10(VAR_29, VAR_15);
  return VAR_25;
 }

 if (VAR_31) {
  VAR_32 = FUNC_1(VAR_31, VAR_2);
  if (!VAR_32)
   return VAR_24;

  VAR_30 = FUNC_5(VAR_29, VAR_32, VAR_31);
  if (VAR_30 != VAR_26) {
   FUNC_10(VAR_29, VAR_20);
   FUNC_0(VAR_32);
   return VAR_25;
  }

  FUNC_7(VAR_32, FUNC_8(VAR_28), VAR_28);
  FUNC_9(VAR_28, 0);

  FUNC_0(VAR_32);
 }

 return VAR_26;
}
