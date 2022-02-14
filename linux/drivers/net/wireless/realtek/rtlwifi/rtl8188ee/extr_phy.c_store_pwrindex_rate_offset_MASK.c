
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl_phy {int pwrgroup_cnt; scalar_t__** mcs_txpwrlevel_origoffset; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
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
 scalar_t__ VAR_17 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (struct rtl_phy*) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_18,
           u32 VAR_19, u32 VAR_20,
           u32 VAR_21)
{
 struct rtl_priv *VAR_22 = FUNC_2(VAR_18);
 struct rtl_phy *VAR_23 = &VAR_22->phy;
 int VAR_24 = VAR_23->pwrgroup_cnt;

 if (VAR_19 == VAR_8) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][0] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][0] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][0]);
 }
 if (VAR_19 == VAR_9) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][1] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][1] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][1]);
 }
 if (VAR_19 == VAR_3) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][6] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][6] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][6]);
 }
 if (VAR_19 == VAR_10 && VAR_20 == 0xffffff00) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][7] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][7] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][7]);
 }
 if (VAR_19 == VAR_4) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][2] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][2] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][2]);
 }
 if (VAR_19 == VAR_5) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][3] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][3] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][3]);
 }
 if (VAR_19 == VAR_6) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][4] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][4] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][4]);
 }
 if (VAR_19 == VAR_7) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][5] = VAR_21;
  if (FUNC_1(VAR_23) == VAR_2) {
   VAR_24++;
   VAR_23->pwrgroup_cnt = VAR_24;
  }
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][5] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][5]);
 }
 if (VAR_19 == VAR_16) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][8] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][8] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][8]);
 }
 if (VAR_19 == VAR_17) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][9] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][9] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][9]);
 }
 if (VAR_19 == VAR_11) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][14] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][14] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][14]);
 }
 if (VAR_19 == VAR_10 && VAR_20 == 0x000000ff) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][15] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][15] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][15]);
 }
 if (VAR_19 == VAR_12) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][10] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][10] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][10]);
 }
 if (VAR_19 == VAR_13) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][11] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][11] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][11]);
 }
 if (VAR_19 == VAR_14) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][12] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][12] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][12]);
 }
 if (VAR_19 == VAR_15) {
  VAR_23->mcs_txpwrlevel_origoffset[VAR_24][13] = VAR_21;
  FUNC_0(VAR_22, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][13] = 0x%x\n",
     VAR_24,
     VAR_23->mcs_txpwrlevel_origoffset[VAR_24][13]);
  if (FUNC_1(VAR_23) != VAR_2) {
   VAR_24++;
   VAR_23->pwrgroup_cnt = VAR_24;
  }
 }
}
