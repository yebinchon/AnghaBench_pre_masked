
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct rtl_sta_info {TYPE_2__* tids; } ;
struct rtl_priv {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; int addr; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_3__ {int agg_state; } ;
struct TYPE_4__ {TYPE_1__ agg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,size_t) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct ieee80211_hw *VAR_5,
  struct ieee80211_sta *VAR_6, u16 VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_1(VAR_5);
 struct rtl_sta_info *VAR_9 = ((void*)0);

 if (VAR_6 == ((void*)0))
  return -VAR_2;

 FUNC_0(VAR_8, VAR_0, VAR_1,
   "on ra = %pM tid = %d\n", VAR_6->addr, VAR_7);

 if (FUNC_2(VAR_7 >= VAR_3))
  return -VAR_2;

 VAR_9 = (struct rtl_sta_info *)VAR_6->drv_priv;
 VAR_9->tids[VAR_7].agg.agg_state = VAR_4;

 return 0;
}
