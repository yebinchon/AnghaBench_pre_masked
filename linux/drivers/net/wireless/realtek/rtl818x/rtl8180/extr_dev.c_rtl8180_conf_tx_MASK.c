
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u16 ;
struct rtl8180_priv {scalar_t__ chip_family; TYPE_1__* map; struct ieee80211_tx_queue_params* queue_param; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int cw_max; int cw_min; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int CW_VAL; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ieee80211_hw*,size_t) ;
 int FUNC_2 (struct rtl8180_priv*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct ieee80211_hw *VAR_2,
       struct ieee80211_vif *VAR_3, u16 VAR_4,
       const struct ieee80211_tx_queue_params *VAR_5)
{
 struct rtl8180_priv *VAR_6 = VAR_2->priv;
 u8 VAR_7, VAR_8;


 if (VAR_6->chip_family == VAR_0)
  return 0;

 VAR_7 = FUNC_0(VAR_5->cw_min);
 VAR_8 = FUNC_0(VAR_5->cw_max);

 if (VAR_6->chip_family == VAR_1) {
  VAR_6->queue_param[VAR_4] = *VAR_5;
  FUNC_1(VAR_2, VAR_4);
 } else
  FUNC_2(VAR_6, &VAR_6->map->CW_VAL,
     (VAR_8 << 4) | VAR_7);
 return 0;
}
