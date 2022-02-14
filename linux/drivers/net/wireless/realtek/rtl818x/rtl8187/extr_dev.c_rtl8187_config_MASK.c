
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct rtl8187_priv {int conf_mutex; TYPE_2__* map; TYPE_1__* rf; } ;
struct ieee80211_conf {int dummy; } ;
struct ieee80211_hw {struct ieee80211_conf conf; struct rtl8187_priv* priv; } ;
struct TYPE_4__ {int BEACON_INTERVAL_TIME; int BEACON_INTERVAL; int ATIMTR_INTERVAL; int ATIM_WND; int TX_CONF; } ;
struct TYPE_3__ {int (* set_chan ) (struct ieee80211_hw*,struct ieee80211_conf*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtl8187_priv*,int *) ;
 int FUNC_4 (struct rtl8187_priv*,int *,int) ;
 int FUNC_5 (struct rtl8187_priv*,int *,int) ;
 int FUNC_6 (struct ieee80211_hw*,struct ieee80211_conf*) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_1, u32 VAR_2)
{
 struct rtl8187_priv *VAR_3 = VAR_1->priv;
 struct ieee80211_conf *VAR_4 = &VAR_1->conf;
 u32 VAR_5;

 FUNC_1(&VAR_3->conf_mutex);
 VAR_5 = FUNC_3(VAR_3, &VAR_3->map->TX_CONF);




 FUNC_5(VAR_3, &VAR_3->map->TX_CONF,
     VAR_5 | VAR_0);
 VAR_3->rf->set_chan(VAR_1, VAR_4);
 FUNC_0(10);
 FUNC_5(VAR_3, &VAR_3->map->TX_CONF, VAR_5);

 FUNC_4(VAR_3, &VAR_3->map->ATIM_WND, 2);
 FUNC_4(VAR_3, &VAR_3->map->ATIMTR_INTERVAL, 100);
 FUNC_4(VAR_3, &VAR_3->map->BEACON_INTERVAL, 100);
 FUNC_4(VAR_3, &VAR_3->map->BEACON_INTERVAL_TIME, 100);
 FUNC_2(&VAR_3->conf_mutex);
 return 0;
}
