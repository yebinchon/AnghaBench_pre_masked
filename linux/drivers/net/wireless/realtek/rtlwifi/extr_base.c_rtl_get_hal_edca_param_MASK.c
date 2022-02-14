
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int use_short_slot; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct ieee80211_tx_queue_params {int txop; int aifs; int cw_min; int cw_max; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum wireless_mode { ____Placeholder_wireless_mode } wireless_mode ;
 int FUNC_0 (int ) ;

u32 FUNC_1(struct ieee80211_hw *VAR_0,
      struct ieee80211_vif *VAR_1,
      enum wireless_mode VAR_2,
      struct ieee80211_tx_queue_params *VAR_3)
{
 u32 VAR_4 = 0;
 u8 VAR_5 = 10;
 u8 VAR_6 = 20;


 switch (VAR_2) {
 case 133:
 case 129:
 case 128:
 case 131:
 case 132:
  VAR_5 = 16;
  VAR_6 = 9;
  break;
 case 130:
  VAR_6 = (VAR_1->bss_conf.use_short_slot ? 9 : 20);
  break;
 default:
  break;
 }

 VAR_4 |= (VAR_3->txop & 0x7FF) << 16;
 VAR_4 |= (FUNC_0(VAR_3->cw_max) & 0xF) << 12;
 VAR_4 |= (FUNC_0(VAR_3->cw_min) & 0xF) << 8;
 VAR_4 |= (VAR_3->aifs & 0x0F) * VAR_6 + VAR_5;

 return VAR_4;
}
