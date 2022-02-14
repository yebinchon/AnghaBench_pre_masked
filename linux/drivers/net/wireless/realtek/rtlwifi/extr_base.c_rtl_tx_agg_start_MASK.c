
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {int agg_state; } ;
struct rtl_tid_data {TYPE_1__ agg; } ;
struct rtl_sta_info {struct rtl_tid_data* tids; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,size_t,size_t) ;
 int FUNC_1 (struct ieee80211_vif*,int ,size_t) ;
 struct rtl_priv* FUNC_2 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_3 (int) ;

int FUNC_4(struct ieee80211_hw *VAR_6, struct ieee80211_vif *VAR_7,
       struct ieee80211_sta *VAR_8, u16 VAR_9, u16 *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_2(VAR_6);
 struct rtl_tid_data *VAR_12;
 struct rtl_sta_info *VAR_13 = ((void*)0);

 if (VAR_8 == ((void*)0))
  return -VAR_2;

 if (FUNC_3(VAR_9 >= VAR_4))
  return -VAR_2;

 VAR_13 = (struct rtl_sta_info *)VAR_8->drv_priv;
 if (!VAR_13)
  return -VAR_3;
 VAR_12 = &VAR_13->tids[VAR_9];

 FUNC_0(VAR_11, VAR_0, VAR_1,
   "on ra = %pM tid = %d seq:%d\n", VAR_8->addr, VAR_9,
   *VAR_10);

 VAR_12->agg.agg_state = VAR_5;

 FUNC_1(VAR_7, VAR_8->addr, VAR_9);
 return 0;
}
