
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct rtw_efuse {size_t rfe_option; } ;
struct TYPE_2__ {int current_channel; } ;
struct rtw_dev {scalar_t__ mp_mode; TYPE_1__ hal; struct rtw_efuse efuse; } ;
struct rtw8822b_rfe_info {int (* rtw_set_channel_rfe ) (struct rtw_dev*,int) ;} ;


 size_t FUNC_0 (struct rtw8822b_rfe_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
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
 scalar_t__ FUNC_2 (int,char*,...) ;
 struct rtw8822b_rfe_info* VAR_22 ;
 int FUNC_3 (struct rtw_dev*,int,int ,struct rtw8822b_rfe_info const*) ;
 int FUNC_4 (struct rtw_dev*) ;
 int FUNC_5 (struct rtw_dev*,int ,int,int ) ;
 int FUNC_6 (struct rtw_dev*,int ,int,int) ;
 int FUNC_7 (struct rtw_dev*,int ,int ,int ,int) ;
 int FUNC_8 (struct rtw_dev*,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct rtw_dev *VAR_23, u8 VAR_24,
         u8 VAR_25, bool VAR_26)
{
 struct rtw_efuse *VAR_27 = &VAR_23->efuse;
 const struct rtw8822b_rfe_info *VAR_28;
 u8 VAR_29 = VAR_23->hal.current_channel;
 u8 VAR_30, VAR_31;
 int VAR_32;

 if (FUNC_2(VAR_27->rfe_option >= FUNC_0(VAR_22),
   "rfe_option %d is out of boundary\n", VAR_27->rfe_option))
  return;

 VAR_28 = &VAR_22[VAR_27->rfe_option];

 if ((VAR_24 | VAR_25) & VAR_0)
  FUNC_6(VAR_23, VAR_5, VAR_3, 0x3231);
 else
  FUNC_6(VAR_23, VAR_5, VAR_3, 0x1111);

 if ((VAR_24 | VAR_25) & VAR_1)
  FUNC_6(VAR_23, VAR_6, VAR_3, 0x3231);
 else
  FUNC_6(VAR_23, VAR_6, VAR_3, 0x1111);

 FUNC_6(VAR_23, VAR_8, (FUNC_1(19) | FUNC_1(18)), 0x3);
 FUNC_6(VAR_23, VAR_13, (FUNC_1(29) | FUNC_1(28)), 0x1);
 FUNC_6(VAR_23, VAR_13, FUNC_1(30), 0x1);

 if (VAR_24 & VAR_0) {
  FUNC_6(VAR_23, VAR_8, 0xfff00000, 0x001);
  FUNC_6(VAR_23, VAR_4, 0xf0000000, 0x8);
 } else if (VAR_24 & VAR_1) {
  FUNC_6(VAR_23, VAR_8, 0xfff00000, 0x002);
  FUNC_6(VAR_23, VAR_4, 0xf0000000, 0x4);
 }

 if (VAR_24 == VAR_0 || VAR_24 == VAR_1)
  FUNC_6(VAR_23, VAR_14, 0xfff0, 0x01);
 else
  FUNC_6(VAR_23, VAR_14, 0xfff0, 0x43);

 VAR_30 = (VAR_24 << 4) | VAR_24;
 FUNC_6(VAR_23, VAR_13, VAR_2, VAR_30);

 if (VAR_24 != VAR_0 && VAR_24 != VAR_1) {
  if (VAR_26 || VAR_23->mp_mode) {
   FUNC_6(VAR_23, VAR_8, 0xfff00000, 0x043);
   FUNC_6(VAR_23, VAR_4, 0xf0000000, 0xc);
  }
 }

 FUNC_6(VAR_23, VAR_11, FUNC_1(22), 0x0);
 FUNC_6(VAR_23, VAR_11, FUNC_1(18), 0x0);

 if (VAR_25 & VAR_0)
  FUNC_6(VAR_23, VAR_4, 0x0f000000, 0x0);
 else if (VAR_25 & VAR_1)
  FUNC_6(VAR_23, VAR_4, 0x0f000000, 0x5);

 VAR_31 = (VAR_25 << 4) | VAR_25;
 FUNC_6(VAR_23, VAR_12, VAR_2, VAR_31);

 if (VAR_25 == VAR_0 || VAR_25 == VAR_1) {
  FUNC_6(VAR_23, VAR_7, FUNC_1(16), 0x0);
  FUNC_6(VAR_23, VAR_9, FUNC_1(28), 0x0);
  FUNC_6(VAR_23, VAR_10, FUNC_1(23), 0x0);
 } else {
  FUNC_6(VAR_23, VAR_7, FUNC_1(16), 0x1);
  FUNC_6(VAR_23, VAR_9, FUNC_1(28), 0x1);
  FUNC_6(VAR_23, VAR_10, FUNC_1(23), 0x1);
 }

 for (VAR_32 = 100; VAR_32 > 0; VAR_32--) {
  u32 VAR_33;

  FUNC_7(VAR_23, VAR_20, VAR_19, VAR_15, 0x80000);
  FUNC_7(VAR_23, VAR_20, VAR_16, VAR_15, 0x00001);

  FUNC_9(2);
  VAR_33 = FUNC_5(VAR_23, VAR_20, 0x33, VAR_15);

  if (VAR_33 == 0x00001)
   break;
 }

 if (FUNC_2(VAR_32 <= 0, "write RF mode table fail\n"))
  return;

 FUNC_7(VAR_23, VAR_20, VAR_19, VAR_15, 0x80000);
 FUNC_7(VAR_23, VAR_20, VAR_16, VAR_15, 0x00001);
 FUNC_7(VAR_23, VAR_20, VAR_18, VAR_15, 0x00034);
 FUNC_7(VAR_23, VAR_20, VAR_17, VAR_15, 0x4080c);
 FUNC_7(VAR_23, VAR_20, VAR_19, VAR_15, 0x00000);
 FUNC_7(VAR_23, VAR_20, VAR_19, VAR_15, 0x00000);

 FUNC_4(VAR_23);
 FUNC_3(VAR_23, 1, VAR_21, VAR_28);
 (*VAR_28->rtw_set_channel_rfe)(VAR_23, VAR_29);
}
