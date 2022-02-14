
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtsx_ucr {scalar_t__ is_rts5179; } ;


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
 scalar_t__ FUNC_0 (struct rtsx_ucr*,int ) ;
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
 int FUNC_1 (struct rtsx_ucr*,int ,int ,int,int) ;
 int FUNC_2 (struct rtsx_ucr*) ;
 int FUNC_3 (struct rtsx_ucr*,int ,int*) ;
 int FUNC_4 (struct rtsx_ucr*,int ,int) ;
 int FUNC_5 (struct rtsx_ucr*,int,int) ;

__attribute__((used)) static int FUNC_6(struct rtsx_ucr *VAR_32)
{
 int VAR_33;
 u8 VAR_34;

 FUNC_2(VAR_32);

 if (FUNC_0(VAR_32, VAR_18)) {
  FUNC_1(VAR_32, VAR_28, VAR_6,
    VAR_15, VAR_17);
  FUNC_1(VAR_32, VAR_28, VAR_6,
    VAR_14, VAR_14);
  FUNC_1(VAR_32, VAR_28, VAR_3,
    0x30, 0x10);
  FUNC_1(VAR_32, VAR_28, VAR_4,
    0x03, 0x01);
  FUNC_1(VAR_32, VAR_28, VAR_5,
    0x0C, 0x04);
 }

 FUNC_1(VAR_32, VAR_28, VAR_27, VAR_22, VAR_21);
 FUNC_1(VAR_32, VAR_28, VAR_8, 0xFF, 0x08);
 FUNC_1(VAR_32, VAR_28,
   VAR_7, VAR_29, 0x0);
 FUNC_1(VAR_32, VAR_28, VAR_25,
   VAR_24, VAR_12);
 FUNC_1(VAR_32, VAR_28,
   VAR_1, VAR_23, 0x0);
 FUNC_1(VAR_32, VAR_28, VAR_16, 0xE0, 0x0);

 if (VAR_32->is_rts5179)
  FUNC_1(VAR_32, VAR_28,
    VAR_4, 0x03, 0x01);

 FUNC_1(VAR_32, VAR_28, VAR_0,
         VAR_13, VAR_13);
 FUNC_1(VAR_32, VAR_28, VAR_2,
   VAR_30 | VAR_20 | VAR_26,
   VAR_30 | VAR_20 | VAR_26);

 VAR_33 = FUNC_4(VAR_32, VAR_19, 100);
 if (VAR_33)
  return VAR_33;


 FUNC_3(VAR_32, VAR_9, &VAR_34);
 if ((VAR_34 & VAR_31) || ((VAR_34 & VAR_10) == VAR_11)) {
  VAR_33 = FUNC_5(VAR_32, 0xC2, 0x7C);
  if (VAR_33)
   return VAR_33;
 }

 return 0;
}
