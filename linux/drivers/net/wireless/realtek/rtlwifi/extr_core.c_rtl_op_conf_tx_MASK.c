
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct rtl_priv {TYPE_3__* cfg; } ;
struct rtl_mac {int * edca_param; TYPE_1__* ac; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int txop; int cw_max; int cw_min; int aifs; } ;
struct ieee80211_hw {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ops; } ;
struct TYPE_5__ {int (* set_qos ) (struct ieee80211_hw*,int) ;} ;
struct TYPE_4__ {void* tx_op; void* cw_max; void* cw_min; int aifs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtl_priv*,int ,int ,char*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int *,struct ieee80211_tx_queue_params const*,int) ;
 struct rtl_mac* FUNC_4 (struct rtl_priv*) ;
 struct rtl_priv* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_hw*,int) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_4,
     struct ieee80211_vif *VAR_5, u16 VAR_6,
     const struct ieee80211_tx_queue_params *VAR_7)
{
 struct rtl_priv *VAR_8 = FUNC_5(VAR_4);
 struct rtl_mac *VAR_9 = FUNC_4(FUNC_5(VAR_4));
 int VAR_10;

 if (VAR_6 >= VAR_0) {
  FUNC_0(VAR_8, VAR_1, VAR_2,
    "queue number %d is incorrect!\n", VAR_6);
  return -VAR_3;
 }

 VAR_10 = FUNC_1(VAR_6);
 VAR_9->ac[VAR_10].aifs = VAR_7->aifs;
 VAR_9->ac[VAR_10].cw_min = FUNC_2(VAR_7->cw_min);
 VAR_9->ac[VAR_10].cw_max = FUNC_2(VAR_7->cw_max);
 VAR_9->ac[VAR_10].tx_op = FUNC_2(VAR_7->txop);
 FUNC_3(&VAR_9->edca_param[VAR_10], VAR_7, sizeof(*VAR_7));
 VAR_8->cfg->ops->set_qos(VAR_4, VAR_10);
 return 0;
}
