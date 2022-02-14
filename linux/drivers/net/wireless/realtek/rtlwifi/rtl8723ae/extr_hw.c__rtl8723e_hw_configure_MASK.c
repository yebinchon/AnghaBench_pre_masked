
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ bt_coexist_type; scalar_t__ bt_coexistence; } ;
struct rtl_priv {TYPE_1__ btcoexist; } ;
struct rtl_pci {int reg_bcn_ctrl_val; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 struct rtl_pci* FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_4 (struct rtl_priv*,int,int) ;
 int FUNC_5 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_31)
{
 struct rtl_pci *VAR_32 = FUNC_0(FUNC_1(VAR_31));
 struct rtl_priv *VAR_33 = FUNC_2(VAR_31);
 u8 VAR_34;
 u32 VAR_35;

 VAR_34 = VAR_1;
 VAR_35 = VAR_2 | VAR_3;

 FUNC_3(VAR_33, VAR_17, 0x8);

 FUNC_3(VAR_33, VAR_12, VAR_34);

 FUNC_4(VAR_33, VAR_25, VAR_35);

 FUNC_3(VAR_33, VAR_28, 0x09);

 FUNC_3(VAR_33, VAR_7, 0x0);

 FUNC_5(VAR_33, VAR_15, 0x1F80);

 FUNC_5(VAR_33, VAR_24, 0x0707);

 FUNC_4(VAR_33, VAR_9, 0x02012802);

 FUNC_3(VAR_33, VAR_16, 0xFF);

 FUNC_4(VAR_33, VAR_13, 0x01000000);
 FUNC_4(VAR_33, VAR_13 + 4, 0x07060504);
 FUNC_4(VAR_33, VAR_23, 0x01000000);
 FUNC_4(VAR_33, VAR_23 + 4, 0x07060504);

 if ((VAR_33->btcoexist.bt_coexistence) &&
     (VAR_33->btcoexist.bt_coexist_type == VAR_0))
  FUNC_4(VAR_33, VAR_5, 0x97427431);
 else
  FUNC_4(VAR_33, VAR_5, 0xb972a841);

 FUNC_3(VAR_33, VAR_8, 0x2);

 FUNC_3(VAR_33, VAR_11, 0xff);

 VAR_32->reg_bcn_ctrl_val = 0x1f;
 FUNC_3(VAR_33, VAR_10, VAR_32->reg_bcn_ctrl_val);

 FUNC_3(VAR_33, VAR_30 + 1, 0xff);

 FUNC_3(VAR_33, VAR_30 + 1, 0xff);

 FUNC_3(VAR_33, VAR_21, 0x1C);
 FUNC_3(VAR_33, VAR_6, 0x16);

 if ((VAR_33->btcoexist.bt_coexistence) &&
     (VAR_33->btcoexist.bt_coexist_type == VAR_0)) {
  FUNC_5(VAR_33, VAR_20, 0x0020);
  FUNC_5(VAR_33, VAR_22, 0x0402);
 } else {
  FUNC_5(VAR_33, VAR_20, 0x0020);
  FUNC_5(VAR_33, VAR_20, 0x0020);
 }

 if ((VAR_33->btcoexist.bt_coexistence) &&
     (VAR_33->btcoexist.bt_coexist_type == VAR_0))
  FUNC_4(VAR_33, VAR_14, 0x03086666);
 else
  FUNC_4(VAR_33, VAR_14, 0x086666);

 FUNC_3(VAR_33, VAR_4, 0x40);

 FUNC_5(VAR_33, VAR_29, 0x1010);
 FUNC_5(VAR_33, VAR_18, 0x1010);

 FUNC_5(VAR_33, VAR_26, 0x1010);

 FUNC_5(VAR_33, VAR_27, 0x1010);

 FUNC_4(VAR_33, VAR_19, 0xffffffff);
 FUNC_4(VAR_33, VAR_19 + 4, 0xffffffff);

 FUNC_4(VAR_33, 0x394, 0x1);
}
