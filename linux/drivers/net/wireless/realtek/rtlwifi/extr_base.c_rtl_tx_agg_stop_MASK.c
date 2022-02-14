
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct rtl_sta_info {TYPE_2__* tids; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_3__ {int agg_state; } ;
struct TYPE_4__ {TYPE_1__ agg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,size_t) ;
 int FUNC_1 (struct ieee80211_vif*,int ,size_t) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct ieee80211_hw *VAR_5, struct ieee80211_vif *VAR_6,
      struct ieee80211_sta *VAR_7, u16 VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_2(VAR_5);
 struct rtl_sta_info *VAR_10 = ((void*)0);

 if (VAR_7 == ((void*)0))
  return -VAR_2;

 FUNC_0(VAR_9, VAR_0, VAR_1,
   "on ra = %pM tid = %d\n", VAR_7->addr, VAR_8);

 if (FUNC_3(VAR_8 >= VAR_3))
  return -VAR_2;

 VAR_10 = (struct rtl_sta_info *)VAR_7->drv_priv;
 VAR_10->tids[VAR_8].agg.agg_state = VAR_4;

 FUNC_1(VAR_6, VAR_7->addr, VAR_8);
 return 0;
}
