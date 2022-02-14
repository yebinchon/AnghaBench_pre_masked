
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
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
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_2 (struct rtsx_chip*) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int ,int*) ;
 int FUNC_6 (struct rtsx_chip*,int ,int) ;
 int FUNC_7 (struct rtsx_chip*,int ,int ) ;
 int FUNC_8 (struct rtsx_chip*,int,int*,int) ;

__attribute__((used)) static int FUNC_9(struct rtsx_chip *VAR_27, u32 VAR_28, u8 *VAR_29,
         int VAR_30)
{
 int VAR_31;
 u8 VAR_32;

 if (!VAR_29 || (VAR_30 < 10))
  return VAR_4;

 FUNC_4(VAR_27);

 FUNC_7(VAR_27, VAR_28, VAR_23);

 FUNC_1(VAR_27, VAR_6, VAR_0,
       0x01, VAR_3);
 FUNC_1(VAR_27, VAR_6, VAR_20, 0xFF, 1);
 FUNC_1(VAR_27, VAR_6, VAR_9,
       VAR_7, VAR_7);

 FUNC_1(VAR_27, VAR_6, VAR_24, 0xFF,
       VAR_26 | VAR_22);
 FUNC_1(VAR_27, VAR_1, VAR_24, VAR_25,
       VAR_25);

 VAR_31 = FUNC_6(VAR_27, VAR_8, 250);
 if (VAR_31 == -VAR_2) {
  FUNC_2(VAR_27);
  return VAR_4;
 }

 VAR_31 = FUNC_5(VAR_27, VAR_21, &VAR_32);
 if (VAR_31)
  return VAR_31;
 if (VAR_32 != VAR_19) {
  FUNC_2(VAR_27);
  return VAR_4;
 }

 VAR_31 = FUNC_5(VAR_27, VAR_10, &VAR_32);
 if (VAR_31)
  return VAR_31;
 if (!(VAR_32 & VAR_11) || !(VAR_32 & VAR_12)) {
  VAR_31 = FUNC_8(VAR_27, 0, VAR_29, VAR_30);
  if (VAR_31 != VAR_5)
   return VAR_4;
  if (VAR_32 & VAR_11) {
   u8 VAR_33, VAR_34;

   VAR_31 = FUNC_5(VAR_27, VAR_15,
          &VAR_33);
   if (VAR_31)
    return VAR_31;
   VAR_31 = FUNC_5(VAR_27, VAR_17,
          &VAR_34);
   if (VAR_31)
    return VAR_31;

   FUNC_0(FUNC_3(VAR_27), "ECC_BIT1 = 0x%x, ECC_BYTE1 = 0x%x\n",
    VAR_33, VAR_34);
   if (VAR_34 < VAR_30) {
    FUNC_0(FUNC_3(VAR_27), "Before correct: 0x%x\n",
     VAR_29[VAR_34]);
    VAR_29[VAR_34] ^= (1 << VAR_33);
    FUNC_0(FUNC_3(VAR_27), "After correct: 0x%x\n",
     VAR_29[VAR_34]);
   }
  }
 } else if (!(VAR_32 & VAR_13) || !(VAR_32 & VAR_14)) {
  FUNC_2(VAR_27);

  VAR_31 = FUNC_8(VAR_27, 256, VAR_29, VAR_30);
  if (VAR_31 != VAR_5)
   return VAR_4;
  if (VAR_32 & VAR_13) {
   u8 VAR_35, VAR_36;

   VAR_31 = FUNC_5(VAR_27, VAR_16,
          &VAR_35);
   if (VAR_31)
    return VAR_31;
   VAR_31 = FUNC_5(VAR_27, VAR_18,
          &VAR_36);
   if (VAR_31)
    return VAR_31;

   FUNC_0(FUNC_3(VAR_27), "ECC_BIT2 = 0x%x, ECC_BYTE2 = 0x%x\n",
    VAR_35, VAR_36);
   if (VAR_36 < VAR_30) {
    FUNC_0(FUNC_3(VAR_27), "Before correct: 0x%x\n",
     VAR_29[VAR_36]);
    VAR_29[VAR_36] ^= (1 << VAR_35);
    FUNC_0(FUNC_3(VAR_27), "After correct: 0x%x\n",
     VAR_29[VAR_36]);
   }
  }
 } else {
  FUNC_2(VAR_27);
  return VAR_4;
 }

 return VAR_5;
}
