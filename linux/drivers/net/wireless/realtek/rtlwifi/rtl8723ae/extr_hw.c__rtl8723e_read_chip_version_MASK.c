
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_phy {scalar_t__ rf_type; int polarity_ctl; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8723e { ____Placeholder_version_8723e } version_8723e ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*,...) ;
 int VAR_16 ;
 int VAR_17 ;



 int VAR_18 ;
 int FUNC_3 (char*) ;
 struct rtl_priv* FUNC_4 (struct ieee80211_hw*) ;
 int FUNC_5 (struct rtl_priv*,int ) ;

__attribute__((used)) static enum version_8723e FUNC_6(struct ieee80211_hw *VAR_19)
{
 struct rtl_priv *VAR_20 = FUNC_4(VAR_19);
 struct rtl_phy *VAR_21 = &(VAR_20->phy);
 enum version_8723e VAR_22 = 0x0000;
 u32 VAR_23;

 VAR_23 = FUNC_5(VAR_20, VAR_10);
 if (VAR_23 & VAR_16) {
  VAR_22 = (enum version_8723e)(VAR_22 |
   ((VAR_23 & VAR_17) ? VAR_2 : 0));

  VAR_22 = (enum version_8723e)(VAR_22 |
   ((VAR_23 & VAR_0) ? VAR_1 : 0));

 } else {

  VAR_22 = (enum version_8723e) VAR_7;
  VAR_22 = (enum version_8723e)(VAR_22 |
   ((VAR_23 & VAR_17) ? VAR_2 : 0));

  VAR_22 = (enum version_8723e)(VAR_22 |
   ((VAR_23 & VAR_0) ? VAR_1 : 0));
  if (FUNC_1(VAR_22))
   VAR_22 = (enum version_8723e)(VAR_22 |
   ((VAR_23 & VAR_3)));
  if (FUNC_0(VAR_22)) {
   VAR_23 = FUNC_5(VAR_20, VAR_8);

   VAR_22 = (enum version_8723e)(VAR_22 |
    ((VAR_23 & VAR_13)>>20));
  }
 }

 if (FUNC_0(VAR_22)) {
  VAR_23 = FUNC_5(VAR_20, VAR_9);
  VAR_21->polarity_ctl = ((VAR_23 & VAR_18) ?
     VAR_14 :
     VAR_15);
 }
 switch (VAR_22) {
 case 128:
  FUNC_2(VAR_20, VAR_4, VAR_6,
    "Chip Version ID: VERSION_TEST_UMC_CHIP_8723.\n");
   break;
 case 130:
  FUNC_2(VAR_20, VAR_4, VAR_6,
    "Chip Version ID: VERSION_NORMAL_UMC_CHIP_8723_1T1R_A_CUT.\n");
  break;
 case 129:
  FUNC_2(VAR_20, VAR_4, VAR_6,
    "Chip Version ID: VERSION_NORMAL_UMC_CHIP_8723_1T1R_B_CUT.\n");
  break;
 default:
  FUNC_3("Chip Version ID: Unknown. Bug?\n");
  break;
 }

 if (FUNC_0(VAR_22))
  VAR_21->rf_type = VAR_11;

 FUNC_2(VAR_20, VAR_4, VAR_5, "Chip RF Type: %s\n",
  (VAR_21->rf_type == VAR_12) ? "RF_2T2R" : "RF_1T1R");

 return VAR_22;
}
