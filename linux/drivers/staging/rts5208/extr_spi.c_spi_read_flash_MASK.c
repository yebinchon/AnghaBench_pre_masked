
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*) ;
 int FUNC_6 (int*,int,struct scsi_cmnd*,unsigned int*,unsigned int*,int ) ;
 int FUNC_7 (struct rtsx_chip*,int ,int*,int,int ,int ,int) ;
 int FUNC_8 (struct scsi_cmnd*,int ) ;
 int FUNC_9 (struct rtsx_chip*,int ) ;
 int FUNC_10 (struct rtsx_chip*) ;
 int FUNC_11 (int ,struct rtsx_chip*,int,int ) ;

int FUNC_12(struct scsi_cmnd *VAR_27, struct rtsx_chip *VAR_28)
{
 int VAR_29;
 unsigned int VAR_30 = 0, VAR_31 = 0;
 u8 VAR_32, VAR_33;
 u32 VAR_34;
 u16 VAR_35;
 u8 *VAR_36;

 FUNC_9(VAR_28, VAR_18);

 VAR_32 = VAR_27->cmnd[3];
 VAR_34 = ((u32)(VAR_27->cmnd[4]) << 16) | ((u32)(VAR_27->cmnd[5])
     << 8) | VAR_27->cmnd[6];
 VAR_35 = ((u16)(VAR_27->cmnd[7]) << 8) | VAR_27->cmnd[8];
 VAR_33 = VAR_27->cmnd[9];

 VAR_29 = FUNC_10(VAR_28);
 if (VAR_29 != VAR_24) {
  FUNC_9(VAR_28, VAR_15);
  return VAR_23;
 }

 VAR_36 = FUNC_1(VAR_4, VAR_3);
 if (!VAR_36)
  return VAR_22;

 while (VAR_35) {
  u16 VAR_37 = VAR_4 - (u8)VAR_34;

  if (VAR_37 > VAR_35)
   VAR_37 = VAR_35;

  FUNC_4(VAR_28);

  FUNC_11(VAR_2, VAR_28, 256, VAR_1);

  FUNC_2(VAR_28, VAR_26, VAR_13, 0xFF, VAR_32);

  if (VAR_33) {
   FUNC_2(VAR_28, VAR_26, VAR_5, 0xFF,
         (u8)VAR_34);
   FUNC_2(VAR_28, VAR_26, VAR_6, 0xFF,
         (u8)(VAR_34 >> 8));
   FUNC_2(VAR_28, VAR_26, VAR_7, 0xFF,
         (u8)(VAR_34 >> 16));
   FUNC_2(VAR_28, VAR_26, VAR_12, 0xFF,
         VAR_14 | VAR_9);
  } else {
   FUNC_2(VAR_28, VAR_26, VAR_6, 0xFF,
         (u8)VAR_34);
   FUNC_2(VAR_28, VAR_26, VAR_7, 0xFF,
         (u8)(VAR_34 >> 8));
   FUNC_2(VAR_28, VAR_26, VAR_8, 0xFF,
         (u8)(VAR_34 >> 16));
   FUNC_2(VAR_28, VAR_26, VAR_12, 0xFF,
         VAR_14 | VAR_10);
  }

  FUNC_2(VAR_28, VAR_26, VAR_17, 0xFF,
        (u8)(VAR_37 >> 8));
  FUNC_2(VAR_28, VAR_26, VAR_16, 0xFF,
        (u8)VAR_37);

  FUNC_2(VAR_28, VAR_26, VAR_19, 0xFF,
        VAR_21 | VAR_11);
  FUNC_2(VAR_28, VAR_0, VAR_19,
        VAR_20, VAR_20);

  FUNC_5(VAR_28);

  VAR_29 = FUNC_7(VAR_28, 0, VAR_36, VAR_37, 0,
         VAR_2, 10000);
  if (VAR_29 < 0) {
   FUNC_0(VAR_36);
   FUNC_3(VAR_28);
   FUNC_9(VAR_28, VAR_15);
   return VAR_23;
  }

  FUNC_6(VAR_36, VAR_37, VAR_27, &VAR_30, &VAR_31,
       VAR_25);

  VAR_34 += VAR_37;
  VAR_35 -= VAR_37;
 }

 FUNC_8(VAR_27, 0);
 FUNC_0(VAR_36);

 return VAR_24;
}
