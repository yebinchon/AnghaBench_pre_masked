
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtl_phy {int rf_pathmap; scalar_t__ rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int,int,...) ;
 scalar_t__ FUNC_4 (struct ieee80211_hw*,int ,int) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;

bool FUNC_6(struct ieee80211_hw *VAR_6)
{
 struct rtl_priv *VAR_7 = FUNC_5(VAR_6);
 struct rtl_phy *VAR_8 = &(VAR_7->phy);
 bool VAR_9 = 1;
 u8 VAR_10, VAR_11, VAR_12 = 0;
 u8 VAR_13, VAR_14;

 FUNC_1(VAR_6);


 VAR_9 = FUNC_0(VAR_6);




 VAR_13 = (u8)(FUNC_4(VAR_6, VAR_0, 0xf));
 FUNC_2(10);
 VAR_14 = (u8)(FUNC_4(VAR_6, VAR_5, 0xf));
 VAR_10 = VAR_13 | VAR_14;

 VAR_8->rf_pathmap = VAR_10;
 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  if ((VAR_10 >> VAR_11) & 0x1)
   VAR_12++;
 }

 if ((VAR_8->rf_type == VAR_1 && VAR_12 != 1) ||
     (VAR_8->rf_type == VAR_2 && VAR_12 != 2) ||
     (VAR_8->rf_type == VAR_3 && VAR_12 != 2) ||
     (VAR_8->rf_type == VAR_4 && VAR_12 != 2)) {
  FUNC_3("RF_Type(%x) does not match RF_Num(%x)!!\n",
         VAR_8->rf_type, VAR_12);
  FUNC_3("path1 0x%x, path2 0x%x, pathmap 0x%x\n",
         VAR_13, VAR_14, VAR_10);
 }

 return VAR_9;
}
