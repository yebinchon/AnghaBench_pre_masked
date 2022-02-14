
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct rtl_phy {scalar_t__ rf_type; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_0 (struct ieee80211_hw*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static bool FUNC_3(struct ieee80211_hw *VAR_7,
       u8 VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_2(VAR_7);
 struct rtl_phy *VAR_10 = &(VAR_9->phy);
 u32 *VAR_11;
 u16 VAR_12;
 int VAR_13;

 if (VAR_10->rf_type == VAR_3) {
  VAR_11 = VAR_5;
  VAR_12 = VAR_1;
 } else if (VAR_10->rf_type == VAR_4) {
  VAR_11 = VAR_6;
  VAR_12 = VAR_2;
 } else {
  return 0;
 }

 if (VAR_8 == VAR_0) {
  for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13 = VAR_13 + 3) {
   FUNC_1(VAR_11[VAR_13]);

   FUNC_0(VAR_7, VAR_11[VAR_13],
    VAR_11[VAR_13 + 1],
    VAR_11[VAR_13 + 2]);
  }
 }

 return 1;
}
