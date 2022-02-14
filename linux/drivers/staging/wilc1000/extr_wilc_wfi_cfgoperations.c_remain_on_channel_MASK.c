
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct wireless_dev {scalar_t__ iftype; int netdev; } ;
struct wiphy {int dummy; } ;
struct TYPE_5__ {unsigned int listen_duration; scalar_t__ listen_cookie; struct ieee80211_channel* listen_ch; } ;
struct wilc_priv {scalar_t__ inc_roc_cookie; int p2p_listen_state; TYPE_2__ remain_on_ch_params; } ;
struct wilc_vif {TYPE_3__* hif_drv; TYPE_1__* wilc; int ndev; struct wilc_priv priv; } ;
struct ieee80211_channel {int hw_value; } ;
struct TYPE_6__ {int remain_on_ch_timer; } ;
struct TYPE_4__ {int op_ch; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct wireless_dev*,scalar_t__,struct ieee80211_channel*,unsigned int,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,char*) ;
 struct wilc_vif* FUNC_4 (int ) ;
 int FUNC_5 (struct wilc_vif*,scalar_t__,unsigned int,int ,int ,void*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct wiphy *VAR_4,
        struct wireless_dev *VAR_5,
        struct ieee80211_channel *VAR_6,
        unsigned int VAR_7, u64 *VAR_8)
{
 int VAR_9 = 0;
 struct wilc_vif *VAR_10 = FUNC_4(VAR_5->netdev);
 struct wilc_priv *VAR_11 = &VAR_10->priv;
 u64 VAR_12;

 if (VAR_5->iftype == VAR_1) {
  FUNC_3(VAR_10->ndev, "Required while in AP mode\n");
  return VAR_9;
 }

 VAR_12 = ++VAR_11->inc_roc_cookie;
 if (VAR_12 == 0)
  VAR_12 = ++VAR_11->inc_roc_cookie;

 VAR_9 = FUNC_5(VAR_10, VAR_12, VAR_7, VAR_6->hw_value,
         VAR_3,
         (void *)VAR_10);
 if (VAR_9)
  return VAR_9;

 VAR_10->wilc->op_ch = VAR_6->hw_value;

 VAR_11->remain_on_ch_params.listen_ch = VAR_6;
 VAR_11->remain_on_ch_params.listen_cookie = VAR_12;
 *VAR_8 = VAR_12;
 VAR_11->p2p_listen_state = 1;
 VAR_11->remain_on_ch_params.listen_duration = VAR_7;

 FUNC_0(VAR_5, *VAR_8, VAR_6, VAR_7, VAR_0);
 FUNC_1(&VAR_10->hif_drv->remain_on_ch_timer,
    VAR_2 + FUNC_2(VAR_7));

 return VAR_9;
}
