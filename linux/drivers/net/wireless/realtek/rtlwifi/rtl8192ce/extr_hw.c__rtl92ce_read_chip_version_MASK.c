
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum version_8192c { ____Placeholder_version_8192c } version_8192c ;


 int FUNC_0 (int) ;



 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct rtl_priv*,int ,int ,char*,char*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char const*) ;
 struct rtl_priv* FUNC_7 (struct ieee80211_hw*) ;
 int FUNC_8 (struct rtl_priv*,int ) ;

__attribute__((used)) static enum version_8192c FUNC_9(struct ieee80211_hw *VAR_19)
{
 struct rtl_priv *VAR_20 = FUNC_7(VAR_19);
 struct rtl_phy *VAR_21 = &(VAR_20->phy);
 enum version_8192c VAR_22 = VAR_18;
 u32 VAR_23;
 const char *VAR_24;

 VAR_23 = FUNC_8(VAR_20, VAR_10);
 if (VAR_23 & VAR_15) {
  VAR_22 = (VAR_23 & VAR_16) ? 136 :
      137;
 } else {
  VAR_22 = (enum version_8192c) (VAR_5 |
    ((VAR_23 & VAR_16) ? VAR_0 : 0) |
    ((VAR_23 & VAR_17) ? VAR_3 : 0));
  if ((!FUNC_3(VAR_22)) && (VAR_23 &
       VAR_6)) {
   VAR_22 = (enum version_8192c)(VAR_22 |
       ((((VAR_23 & VAR_6) == FUNC_0(12))
       ? VAR_4 : VAR_2) |
       VAR_3));
  }
  if (FUNC_2(VAR_22)) {
   VAR_23 = FUNC_8(VAR_20, VAR_9);
   VAR_22 = (enum version_8192c)(VAR_22 |
       ((FUNC_1(VAR_23)
       == VAR_1) ?
       VAR_14 : 0));
  }
 }

 switch (VAR_22) {
 case 134:
  VAR_24 = "B_CHIP_92C";
  break;
 case 135:
  VAR_24 = "B_CHIP_88C";
  break;
 case 136:
  VAR_24 = "A_CHIP_92C";
  break;
 case 137:
  VAR_24 = "A_CHIP_88C";
  break;
 case 131:
  VAR_24 = "A_CUT_92C_1T2R";
  break;
 case 129:
  VAR_24 = "A_CUT_92C";
  break;
 case 133:
  VAR_24 = "A_CUT_88C";
  break;
 case 130:
  VAR_24 = "B_CUT_92C_1T2R";
  break;
 case 128:
  VAR_24 = "B_CUT_92C";
  break;
 case 132:
  VAR_24 = "B_CUT_88C";
  break;
 default:
  VAR_24 = "Unknown. Bug?";
  break;
 }

 FUNC_6("Chip Version ID: %s\n", VAR_24);

 switch (VAR_22 & 0x3) {
 case 140:
  VAR_21->rf_type = VAR_11;
  break;
 case 139:
  VAR_21->rf_type = VAR_13;
  break;
 case 138:
  VAR_21->rf_type = VAR_12;
  break;
 default:
  VAR_21->rf_type = VAR_11;
  FUNC_5("ERROR RF_Type is set!!\n");
  break;
 }

 FUNC_4(VAR_20, VAR_7, VAR_8, "Chip RF Type: %s\n",
   VAR_21->rf_type == VAR_13 ? "RF_2T2R" : "RF_1T1R");

 return VAR_22;
}
