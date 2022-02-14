
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
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
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int ,int) ;
 int FUNC_6 (struct rtsx_chip*) ;
 int FUNC_7 (int*,int,struct scsi_cmnd*,unsigned int*,unsigned int*,int ) ;
 int FUNC_8 (struct rtsx_chip*,int ,int*,int,int ,int ,int) ;
 int FUNC_9 (struct rtsx_chip*,int ) ;
 int FUNC_10 (struct rtsx_chip*,int ) ;
 int FUNC_11 (struct rtsx_chip*,int) ;
 int FUNC_12 (struct rtsx_chip*,int,int,int,int) ;
 int FUNC_13 (struct rtsx_chip*,int ) ;
 int FUNC_14 (struct rtsx_chip*) ;
 int FUNC_15 (int ,struct rtsx_chip*,int,int ) ;

int FUNC_16(struct scsi_cmnd *VAR_21, struct rtsx_chip *VAR_22)
{
 int VAR_23;
 u8 VAR_24, VAR_25;
 u32 VAR_26;
 u16 VAR_27;
 u8 *VAR_28;
 unsigned int VAR_29 = 0, VAR_30 = 0;

 FUNC_13(VAR_22, VAR_13);

 VAR_24 = VAR_21->cmnd[3];
 VAR_26 = ((u32)(VAR_21->cmnd[4]) << 16) | ((u32)(VAR_21->cmnd[5])
     << 8) | VAR_21->cmnd[6];
 VAR_27 = ((u16)(VAR_21->cmnd[7]) << 8) | VAR_21->cmnd[8];
 VAR_25 = VAR_21->cmnd[9];

 VAR_23 = FUNC_14(VAR_22);
 if (VAR_23 != VAR_19) {
  FUNC_13(VAR_22, VAR_11);
  return VAR_17;
 }

 if (VAR_25 == VAR_1) {
  VAR_28 = FUNC_1(4, VAR_6);
  if (!VAR_28)
   return VAR_16;

  while (VAR_27) {
   VAR_23 = FUNC_10(VAR_22, VAR_15);
   if (VAR_23 != VAR_19) {
    FUNC_0(VAR_28);
    return VAR_17;
   }

   FUNC_7(VAR_28, 1, VAR_21, &VAR_29, &VAR_30,
        VAR_5);

   FUNC_4(VAR_22);

   FUNC_2(VAR_22, VAR_20, VAR_2,
         0x01, VAR_8);
   FUNC_2(VAR_22, VAR_20, VAR_9, 0xFF,
         VAR_28[0]);
   FUNC_12(VAR_22, VAR_24, 1, VAR_26, 1);

   VAR_23 = FUNC_5(VAR_22, 0, 100);
   if (VAR_23 < 0) {
    FUNC_0(VAR_28);
    FUNC_3(VAR_22);
    FUNC_13(VAR_22, VAR_11);
    return VAR_17;
   }

   VAR_23 = FUNC_11(VAR_22, 100);
   if (VAR_23 != VAR_19) {
    FUNC_0(VAR_28);
    return VAR_17;
   }

   VAR_26++;
   VAR_27--;
  }

  FUNC_0(VAR_28);

 } else if (VAR_25 == VAR_0) {
  int VAR_31 = 1;

  VAR_23 = FUNC_10(VAR_22, VAR_15);
  if (VAR_23 != VAR_19)
   return VAR_17;

  VAR_28 = FUNC_1(4, VAR_6);
  if (!VAR_28)
   return VAR_16;

  while (VAR_27) {
   FUNC_7(VAR_28, 1, VAR_21, &VAR_29, &VAR_30,
        VAR_5);

   FUNC_4(VAR_22);

   FUNC_2(VAR_22, VAR_20, VAR_2,
         0x01, VAR_8);
   FUNC_2(VAR_22, VAR_20, VAR_9, 0xFF,
         VAR_28[0]);
   if (VAR_31) {
    FUNC_12(VAR_22, VAR_24, 1, VAR_26, 1);
    VAR_31 = 0;
   } else {
    FUNC_12(VAR_22, VAR_24, 0, 0, 1);
   }

   VAR_23 = FUNC_5(VAR_22, 0, 100);
   if (VAR_23 < 0) {
    FUNC_0(VAR_28);
    FUNC_3(VAR_22);
    FUNC_13(VAR_22, VAR_11);
    return VAR_17;
   }

   VAR_23 = FUNC_11(VAR_22, 100);
   if (VAR_23 != VAR_19) {
    FUNC_0(VAR_28);
    return VAR_17;
   }

   VAR_27--;
  }

  FUNC_0(VAR_28);

  VAR_23 = FUNC_9(VAR_22, VAR_14);
  if (VAR_23 != VAR_19)
   return VAR_17;

  VAR_23 = FUNC_11(VAR_22, 100);
  if (VAR_23 != VAR_19)
   return VAR_17;
 } else if (VAR_25 == VAR_7) {
  VAR_28 = FUNC_1(VAR_10, VAR_6);
  if (!VAR_28)
   return VAR_18;

  while (VAR_27) {
   u16 VAR_32 = VAR_10 - (u8)VAR_26;

   if (VAR_32 > VAR_27)
    VAR_32 = VAR_27;

   VAR_23 = FUNC_10(VAR_22, VAR_15);
   if (VAR_23 != VAR_19) {
    FUNC_0(VAR_28);
    return VAR_17;
   }

   FUNC_4(VAR_22);

   FUNC_15(VAR_4, VAR_22, 256, VAR_3);
   FUNC_12(VAR_22, VAR_24, 1, VAR_26, VAR_32);

   FUNC_6(VAR_22);

   FUNC_7(VAR_28, VAR_32, VAR_21, &VAR_29,
        &VAR_30, VAR_5);

   VAR_23 = FUNC_8(VAR_22, 0, VAR_28, VAR_32, 0,
          VAR_4, 100);
   if (VAR_23 < 0) {
    FUNC_0(VAR_28);
    FUNC_3(VAR_22);
    FUNC_13(VAR_22, VAR_11);
    return VAR_17;
   }

   VAR_23 = FUNC_11(VAR_22, 100);
   if (VAR_23 != VAR_19) {
    FUNC_0(VAR_28);
    return VAR_17;
   }

   VAR_26 += VAR_32;
   VAR_27 -= VAR_32;
  }

  FUNC_0(VAR_28);
 } else {
  FUNC_13(VAR_22, VAR_12);
  return VAR_17;
 }

 return VAR_19;
}
