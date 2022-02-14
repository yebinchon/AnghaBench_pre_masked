
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int rf_type; } ;
struct rtl_priv {TYPE_1__ phy; } ;
struct rtl_pci {int reg_bcn_ctrl_val; } ;
struct rtl_hal {scalar_t__ macphymode; int minspace_cfg; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;




 struct rtl_hal* FUNC_0 (struct rtl_priv*) ;
 struct rtl_pci* FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_3 (struct ieee80211_hw*) ;
 int FUNC_4 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_5 (struct rtl_priv*,scalar_t__,int) ;
 int FUNC_6 (struct rtl_priv*,int ,int) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_33)
{
 struct rtl_pci *VAR_34 = FUNC_1(FUNC_2(VAR_33));
 struct rtl_priv *VAR_35 = FUNC_3(VAR_33);
 struct rtl_hal *VAR_36 = FUNC_0(FUNC_3(VAR_33));
 u8 VAR_37 = VAR_0;
 u32 VAR_38;

 VAR_38 = VAR_5 | VAR_6;
 FUNC_4(VAR_35, VAR_20, 0x8);
 FUNC_4(VAR_35, VAR_15, VAR_37);
 FUNC_5(VAR_35, VAR_27, VAR_38);
 FUNC_4(VAR_35, VAR_30, 0x09);
 FUNC_4(VAR_35, VAR_10, 0x0);
 FUNC_6(VAR_35, VAR_18, 0x1F80);
 FUNC_6(VAR_35, VAR_26, 0x0707);
 FUNC_5(VAR_35, VAR_12, 0x02012802);
 FUNC_4(VAR_35, VAR_19, 0xFF);
 FUNC_5(VAR_35, VAR_16, 0x01000000);
 FUNC_5(VAR_35, VAR_16 + 4, 0x07060504);
 FUNC_5(VAR_35, VAR_25, 0x01000000);
 FUNC_5(VAR_35, VAR_25 + 4, 0x07060504);

 if (VAR_36->macphymode == VAR_1)
  FUNC_5(VAR_35, VAR_8, 0xb9726641);
 else if (VAR_36->macphymode == VAR_2)
  FUNC_5(VAR_35, VAR_8, 0x66626641);
 else
  FUNC_5(VAR_35, VAR_8, 0xb972a841);
 FUNC_4(VAR_35, VAR_11, 0x2);
 FUNC_4(VAR_35, VAR_14, 0x0a);
 VAR_34->reg_bcn_ctrl_val = 0x1f;
 FUNC_4(VAR_35, VAR_13, VAR_34->reg_bcn_ctrl_val);
 FUNC_4(VAR_35, VAR_32 + 1, 0xff);
 FUNC_4(VAR_35, VAR_24, 0x1C);
 FUNC_4(VAR_35, VAR_9, 0x16);
 FUNC_6(VAR_35, VAR_23, 0x0020);

 FUNC_6(VAR_35, VAR_17, 0x6666);

 FUNC_4(VAR_35, VAR_7, 0x40);

 FUNC_6(VAR_35, VAR_31, 0x1010);
 FUNC_6(VAR_35, VAR_21, 0x1010);

 FUNC_6(VAR_35, VAR_28, 0x1010);

 FUNC_6(VAR_35, VAR_29, 0x1010);

 FUNC_5(VAR_35, VAR_22, 0xffffffff);
 FUNC_5(VAR_35, VAR_22 + 4, 0xffffffff);
 switch (VAR_35->phy.rf_type) {
 case 130:
 case 131:
  VAR_36->minspace_cfg = (VAR_3 << 3);
  break;
 case 129:
 case 128:
  VAR_36->minspace_cfg = (VAR_4 << 3);
  break;
 }
}
