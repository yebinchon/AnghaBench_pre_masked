
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct rtl8180_priv {int slot_time; TYPE_1__* map; struct ieee80211_tx_queue_params* queue_param; } ;
struct ieee80211_tx_queue_params {int aifs; size_t txop; int cw_max; int cw_min; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct TYPE_2__ {int AC_VO_PARAM; int AC_VI_PARAM; int AC_BE_PARAM; int AC_BK_PARAM; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;




 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct rtl8180_priv*,int *,size_t) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_4, u8 VAR_5)
{
 const struct ieee80211_tx_queue_params *VAR_6;
 struct rtl8180_priv *VAR_7 = VAR_4->priv;


 u32 VAR_8;

 u8 VAR_9;
 u8 VAR_10;
 u8 VAR_11, VAR_12;

 VAR_6 = &VAR_7->queue_param[VAR_5];

 VAR_11 = FUNC_0(VAR_6->cw_min);
 VAR_12 = FUNC_0(VAR_6->cw_max);

 VAR_9 = 10 + VAR_6->aifs * VAR_7->slot_time;


 VAR_10 = VAR_6->txop;

 VAR_8 = VAR_10 << VAR_3 |
  VAR_12 << VAR_1 |
  VAR_11 << VAR_2 |
  VAR_9 << VAR_0;

 switch (VAR_5) {
 case 130:
  FUNC_1(VAR_7, &VAR_7->map->AC_BK_PARAM, VAR_8);
  break;
 case 131:
  FUNC_1(VAR_7, &VAR_7->map->AC_BE_PARAM, VAR_8);
  break;
 case 129:
  FUNC_1(VAR_7, &VAR_7->map->AC_VI_PARAM, VAR_8);
  break;
 case 128:
  FUNC_1(VAR_7, &VAR_7->map->AC_VO_PARAM, VAR_8);
  break;
 }
}
