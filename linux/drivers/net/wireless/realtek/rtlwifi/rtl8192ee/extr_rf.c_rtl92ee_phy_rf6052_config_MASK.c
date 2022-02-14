
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl_phy {scalar_t__ rf_type; int num_total_rfpath; } ;
struct rtl_priv {struct rtl_phy phy; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;

bool FUNC_2(struct ieee80211_hw *VAR_1)
{
 struct rtl_priv *VAR_2 = FUNC_1(VAR_1);
 struct rtl_phy *VAR_3 = &VAR_2->phy;

 if (VAR_3->rf_type == VAR_0)
  VAR_3->num_total_rfpath = 1;
 else
  VAR_3->num_total_rfpath = 2;

 return FUNC_0(VAR_1);
}
