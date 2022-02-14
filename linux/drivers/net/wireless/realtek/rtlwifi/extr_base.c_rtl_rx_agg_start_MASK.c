
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct TYPE_10__ {int rx_agg_state; } ;
struct rtl_tid_data {TYPE_5__ agg; } ;
struct rtl_sta_info {struct rtl_tid_data* tids; } ;
struct TYPE_9__ {TYPE_3__* btc_ops; } ;
struct rtl_priv {TYPE_4__ btcoexist; TYPE_2__* cfg; } ;
struct ieee80211_sta {int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_8__ {int (* btc_get_ampdu_cfg ) (struct rtl_priv*,scalar_t__*,int *,int *) ;} ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_6__ {scalar_t__ (* get_btc_status ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,int ,size_t) ;
 struct rtl_priv* FUNC_1 (struct ieee80211_hw*) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct rtl_priv*,scalar_t__*,int *,int *) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct ieee80211_hw *VAR_6,
       struct ieee80211_sta *VAR_7, u16 VAR_8)
{
 struct rtl_priv *VAR_9 = FUNC_1(VAR_6);
 struct rtl_tid_data *VAR_10;
 struct rtl_sta_info *VAR_11 = ((void*)0);
 u8 VAR_12;

 if (VAR_7 == ((void*)0))
  return -VAR_2;

 if (FUNC_4(VAR_8 >= VAR_4))
  return -VAR_2;

 if (VAR_9->cfg->ops->get_btc_status()) {
  VAR_9->btcoexist.btc_ops->btc_get_ampdu_cfg(VAR_9,
             &VAR_12,
             ((void*)0), ((void*)0));
  if (VAR_12)
   return -VAR_2;
 }

 VAR_11 = (struct rtl_sta_info *)VAR_7->drv_priv;
 if (!VAR_11)
  return -VAR_3;
 VAR_10 = &VAR_11->tids[VAR_8];

 FUNC_0(VAR_9, VAR_0, VAR_1,
   "on ra = %pM tid = %d\n", VAR_7->addr, VAR_8);

 VAR_10->agg.rx_agg_state = VAR_5;
 return 0;
}
