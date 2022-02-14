
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_phy {int rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct rtl_hal {scalar_t__ hw_type; int hw_rof_enable; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8821ae { ____Placeholder_version_8821ae } version_8821ae ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct rtl_hal* FUNC_1 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 int FUNC_3 (struct rtl_priv*,int ) ;

__attribute__((used)) static enum version_8821ae FUNC_4(struct ieee80211_hw *VAR_16)
{
 struct rtl_priv *VAR_17 = FUNC_2(VAR_16);
 struct rtl_phy *VAR_18 = &VAR_17->phy;
 struct rtl_hal *VAR_19 = FUNC_1(FUNC_2(VAR_16));
 enum version_8821ae VAR_20 = VAR_14;
 u32 VAR_21;

 VAR_21 = FUNC_3(VAR_17, VAR_9);
 FUNC_0(VAR_17, VAR_3, VAR_4,
   "ReadChipVersion8812A 0xF0 = 0x%x\n", VAR_21);

 if (VAR_19->hw_type == VAR_5)
  VAR_18->rf_type = VAR_11;
 else if (VAR_19->hw_type == VAR_6)
  VAR_18->rf_type = VAR_10;

 FUNC_0(VAR_17, VAR_3, VAR_4,
   "RF_Type is %x!!\n", VAR_18->rf_type);

 if (VAR_21 & VAR_13) {
  if (VAR_19->hw_type == VAR_5) {
   if (VAR_18->rf_type == VAR_11)
    VAR_20 = 129;
   else
    VAR_20 = 130;
  } else
   VAR_20 = 128;
 } else {
  if (VAR_19->hw_type == VAR_5) {
   u32 VAR_22 = ((VAR_21 & VAR_2) >> 12) + 1;

   if (VAR_18->rf_type == VAR_11)
    VAR_20 =
     (enum version_8821ae)(VAR_0
     | VAR_7 |
     VAR_12);
   else
    VAR_20 = (enum version_8821ae)(VAR_0
     | VAR_7);

   VAR_20 = (enum version_8821ae)(VAR_20 | (VAR_22 << 12));
  } else if (VAR_19->hw_type == VAR_6) {
   u32 VAR_23 = VAR_21 & VAR_2;

   VAR_20 = (enum version_8821ae)(VAR_1
    | VAR_7 | VAR_23);
  }
 }

 if (VAR_19->hw_type == VAR_6) {

  VAR_21 = FUNC_3(VAR_17, VAR_8);
  VAR_19->hw_rof_enable = ((VAR_21 & VAR_15) ? 1 : 0);
 }

 switch (VAR_20) {
 case 130:
  FUNC_0(VAR_17, VAR_3, VAR_4,
    "Chip Version ID: VERSION_TEST_CHIP_1T1R_8812\n");
  break;
 case 129:
  FUNC_0(VAR_17, VAR_3, VAR_4,
    "Chip Version ID: VERSION_TEST_CHIP_2T2R_8812\n");
  break;
 case 136:
  FUNC_0(VAR_17, VAR_3, VAR_4,
    "Chip Version ID:VERSION_NORMAL_TSMC_CHIP_1T1R_8812\n");
  break;
 case 134:
  FUNC_0(VAR_17, VAR_3, VAR_4,
    "Chip Version ID: VERSION_NORMAL_TSMC_CHIP_2T2R_8812\n");
  break;
 case 135:
  FUNC_0(VAR_17, VAR_3, VAR_4,
    "Chip Version ID: VERSION_NORMAL_TSMC_CHIP_1T1R_8812 C CUT\n");
  break;
 case 133:
  FUNC_0(VAR_17, VAR_3, VAR_4,
    "Chip Version ID: VERSION_NORMAL_TSMC_CHIP_2T2R_8812 C CUT\n");
  break;
 case 128:
  FUNC_0(VAR_17, VAR_3, VAR_4,
    "Chip Version ID: VERSION_TEST_CHIP_8821\n");
  break;
 case 132:
  FUNC_0(VAR_17, VAR_3, VAR_4,
    "Chip Version ID: VERSION_NORMAL_TSMC_CHIP_8821 A CUT\n");
  break;
 case 131:
  FUNC_0(VAR_17, VAR_3, VAR_4,
    "Chip Version ID: VERSION_NORMAL_TSMC_CHIP_8821 B CUT\n");
  break;
 default:
  FUNC_0(VAR_17, VAR_3, VAR_4,
    "Chip Version ID: Unknown (0x%X)\n", VAR_20);
  break;
 }

 return VAR_20;
}
