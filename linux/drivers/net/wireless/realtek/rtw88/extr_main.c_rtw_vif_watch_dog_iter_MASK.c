
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct rtw_watch_dog_iter_data {int active; struct rtw_vif* rtwvif; int assoc_cnt; } ;
struct TYPE_4__ {scalar_t__ tx_cnt; scalar_t__ rx_cnt; scalar_t__ rx_unicast; scalar_t__ tx_unicast; } ;
struct rtw_vif {TYPE_2__ stats; } ;
struct TYPE_3__ {scalar_t__ assoc; } ;
struct ieee80211_vif {scalar_t__ type; TYPE_1__ bss_conf; scalar_t__ drv_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_0(void *VAR_2, u8 *VAR_3,
       struct ieee80211_vif *VAR_4)
{
 struct rtw_watch_dog_iter_data *VAR_5 = VAR_2;
 struct rtw_vif *VAR_6 = (struct rtw_vif *)VAR_4->drv_priv;

 if (VAR_4->type == VAR_0) {
  if (VAR_4->bss_conf.assoc) {
   VAR_5->assoc_cnt++;
   VAR_5->rtwvif = VAR_6;
  }
  if (VAR_6->stats.tx_cnt > VAR_1 ||
      VAR_6->stats.rx_cnt > VAR_1)
   VAR_5->active = 1;
 } else {

  VAR_5->active = 1;
 }

 VAR_6->stats.tx_unicast = 0;
 VAR_6->stats.rx_unicast = 0;
 VAR_6->stats.tx_cnt = 0;
 VAR_6->stats.rx_cnt = 0;
}
