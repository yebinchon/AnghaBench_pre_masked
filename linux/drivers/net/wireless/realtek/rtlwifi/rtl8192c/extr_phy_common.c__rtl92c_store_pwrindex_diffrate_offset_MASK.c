
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct rtl_phy {size_t pwrgroup_cnt; scalar_t__** mcs_txpwrlevel_origoffset; } ;
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
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,size_t,scalar_t__) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

void FUNC_2(struct ieee80211_hw *VAR_17,
         u32 VAR_18, u32 VAR_19,
         u32 VAR_20)
{
 struct rtl_priv *VAR_21 = FUNC_1(VAR_17);
 struct rtl_phy *VAR_22 = &(VAR_21->phy);

 if (VAR_18 == VAR_7) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][0] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][0] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][0]);
 }
 if (VAR_18 == VAR_8) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][1] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][1] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][1]);
 }
 if (VAR_18 == VAR_2) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][6] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][6] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][6]);
 }
 if (VAR_18 == VAR_9 && VAR_19 == 0xffffff00) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][7] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][7] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][7]);
 }
 if (VAR_18 == VAR_3) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][2] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][2] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][2]);
 }
 if (VAR_18 == VAR_4) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][3] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][3] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][3]);
 }
 if (VAR_18 == VAR_5) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][4] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][4] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][4]);
 }
 if (VAR_18 == VAR_6) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][5] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][5] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][5]);
 }
 if (VAR_18 == VAR_15) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][8] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][8] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][8]);
 }
 if (VAR_18 == VAR_16) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][9] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][9] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][9]);
 }
 if (VAR_18 == VAR_10) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][14] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][14] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][14]);
 }
 if (VAR_18 == VAR_9 && VAR_19 == 0x000000ff) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][15] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][15] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][15]);
 }
 if (VAR_18 == VAR_11) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][10] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][10] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][10]);
 }
 if (VAR_18 == VAR_12) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][11] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][11] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][11]);
 }
 if (VAR_18 == VAR_13) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][12] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][12] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][12]);
 }
 if (VAR_18 == VAR_14) {
  VAR_22->mcs_txpwrlevel_origoffset[VAR_22->pwrgroup_cnt][13] =
      VAR_20;
  FUNC_0(VAR_21, VAR_0, VAR_1,
    "MCSTxPowerLevelOriginalOffset[%d][13] = 0x%x\n",
     VAR_22->pwrgroup_cnt,
     VAR_22->mcs_txpwrlevel_origoffset[VAR_22->
           pwrgroup_cnt][13]);

  VAR_22->pwrgroup_cnt++;
 }
}
