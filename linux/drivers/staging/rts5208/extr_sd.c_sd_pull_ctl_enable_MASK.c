
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtsx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int ) ;
 scalar_t__ FUNC_1 (struct rtsx_chip*,int) ;
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_2 (struct rtsx_chip*,int ,int ,int,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int ,int) ;

int FUNC_5(struct rtsx_chip *VAR_33)
{
 int VAR_34;

 FUNC_3(VAR_33);

 if (FUNC_1(VAR_33, 0x5208)) {
  FUNC_2(VAR_33, VAR_25, VAR_0, 0xFF,
        VAR_30 | VAR_21 | VAR_12 | VAR_19);
  FUNC_2(VAR_33, VAR_25, VAR_1, 0xFF,
        VAR_20 | VAR_14 | VAR_15 | VAR_31);
  FUNC_2(VAR_33, VAR_25, VAR_2, 0xFF,
        VAR_18 | VAR_28 | VAR_29 | VAR_27);
  FUNC_2(VAR_33, VAR_25, VAR_3, 0xFF,
        VAR_32 | VAR_17 | VAR_16 | VAR_26);
  FUNC_2(VAR_33, VAR_25, VAR_4, 0xFF,
        VAR_8 | VAR_22 | VAR_11 | VAR_13);
  FUNC_2(VAR_33, VAR_25, VAR_5, 0xFF,
        VAR_7 | VAR_6);
 } else if (FUNC_1(VAR_33, 0x5288)) {
  if (FUNC_0(VAR_33, VAR_9)) {
   FUNC_2(VAR_33, VAR_25, VAR_0, 0xFF,
         0xA8);
   FUNC_2(VAR_33, VAR_25, VAR_1, 0xFF,
         0x5A);
   FUNC_2(VAR_33, VAR_25, VAR_2, 0xFF,
         0x95);
   FUNC_2(VAR_33, VAR_25, VAR_3, 0xFF,
         0xAA);
  }
 }

 VAR_34 = FUNC_4(VAR_33, VAR_10, 100);
 if (VAR_34 < 0)
  return VAR_23;

 return VAR_24;
}
