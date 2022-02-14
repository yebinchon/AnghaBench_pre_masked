
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rtl_phy {int ***** txpwr_limit_5g; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;
typedef int s8 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int,...) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_1(VAR_8);
 struct rtl_phy *VAR_10 = &VAR_9->phy;
 u8 VAR_11, VAR_12, VAR_13, VAR_14;
 s8 VAR_15 = 0;

 for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
  for (VAR_12 = 0; VAR_12 < VAR_3; ++VAR_12) {
   for (VAR_13 = 0; VAR_13 < VAR_0; ++VAR_13) {
    for (VAR_14 = 0; VAR_14 < VAR_5; ++VAR_14) {
     VAR_15 = VAR_10->txpwr_limit_5g[VAR_11]
      [VAR_12][VAR_14][VAR_13][VAR_7];
     if (VAR_15 == VAR_4) {
      if (VAR_12 == 0 || VAR_12 == 1) {
       FUNC_0(VAR_9, VAR_1, VAR_2,
        "No power limit table of the specified band %d, bandwidth %d, ratesection %d, channel %d, rf path %d\n",
        1, VAR_12, VAR_14, VAR_13, VAR_7);
       if (VAR_14 == 2) {
        VAR_10->txpwr_limit_5g[VAR_11][VAR_12][2][VAR_13][VAR_7] =
         VAR_10->txpwr_limit_5g[VAR_11][VAR_12][4][VAR_13][VAR_7];
       } else if (VAR_14 == 4) {
        VAR_10->txpwr_limit_5g[VAR_11][VAR_12][4][VAR_13][VAR_7] =
         VAR_10->txpwr_limit_5g[VAR_11][VAR_12][2][VAR_13][VAR_7];
       } else if (VAR_14 == 3) {
        VAR_10->txpwr_limit_5g[VAR_11][VAR_12][3][VAR_13][VAR_7] =
         VAR_10->txpwr_limit_5g[VAR_11][VAR_12][5][VAR_13][VAR_7];
       } else if (VAR_14 == 5) {
        VAR_10->txpwr_limit_5g[VAR_11][VAR_12][5][VAR_13][VAR_7] =
         VAR_10->txpwr_limit_5g[VAR_11][VAR_12][3][VAR_13][VAR_7];
       }

       FUNC_0(VAR_9, VAR_1, VAR_2, "use other value %d\n", VAR_15);
      }
     }
    }
   }
  }
 }
}
