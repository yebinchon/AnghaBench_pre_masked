
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct TYPE_2__ {scalar_t__ rx_cnt; scalar_t__ tx_cnt; scalar_t__ rx_unicast; scalar_t__ tx_unicast; } ;
struct rtw_vif {size_t port; int in_lps; int net_type; size_t bcn_ctrl; int mac_addr; int * conf; TYPE_1__ stats; struct ieee80211_vif* vif; } ;
struct rtw_dev {int mutex; } ;
struct ieee80211_vif {int type; int addr; scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct rtw_dev* priv; } ;
typedef enum rtw_net_type { ____Placeholder_rtw_net_type } rtw_net_type ;


 size_t VAR_0 ;
 size_t VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rtw_dev*,char*,int ,size_t) ;
 int * VAR_8 ;
 int FUNC_4 (struct rtw_dev*,struct rtw_vif*,int ) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_9,
     struct ieee80211_vif *VAR_10)
{
 struct rtw_dev *VAR_11 = VAR_9->priv;
 struct rtw_vif *VAR_12 = (struct rtw_vif *)VAR_10->drv_priv;
 enum rtw_net_type VAR_13;
 u32 VAR_14 = 0;
 u8 VAR_15 = 0;
 u8 VAR_16 = 0;

 VAR_12->port = VAR_15;
 VAR_12->vif = VAR_10;
 VAR_12->stats.tx_unicast = 0;
 VAR_12->stats.rx_unicast = 0;
 VAR_12->stats.tx_cnt = 0;
 VAR_12->stats.rx_cnt = 0;
 VAR_12->in_lps = 0;
 VAR_12->conf = &VAR_8[VAR_15];

 FUNC_1(&VAR_11->mutex);

 switch (VAR_10->type) {
 case 130:
 case 129:
  VAR_13 = VAR_6;
  VAR_16 = VAR_1 | VAR_0;
  break;
 case 131:
  VAR_13 = VAR_5;
  VAR_16 = VAR_1 | VAR_0;
  break;
 case 128:
 default:
  VAR_13 = VAR_7;
  VAR_16 = VAR_1;
  break;
 }

 FUNC_0(VAR_12->mac_addr, VAR_10->addr);
 VAR_14 |= VAR_3;
 VAR_12->net_type = VAR_13;
 VAR_14 |= VAR_4;
 VAR_12->bcn_ctrl = VAR_16;
 VAR_14 |= VAR_2;
 FUNC_4(VAR_11, VAR_12, VAR_14);

 FUNC_2(&VAR_11->mutex);

 FUNC_3(VAR_11, "start vif %pM on port %d\n", VAR_10->addr, VAR_12->port);
 return 0;
}
