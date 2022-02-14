
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct rtl8180_priv {scalar_t__ chip_family; int slot_time; int ack_time; TYPE_1__* map; } ;
struct ieee80211_hw {struct rtl8180_priv* priv; } ;
struct ieee80211_bss_conf {scalar_t__ use_short_slot; } ;
struct TYPE_2__ {int EIFS; int EIFS_8187SE; int CARRIER_SENSE_COUNTER; int DIFS; int SIFS; int SLOT; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rtl8180_priv*,int *,int) ;

__attribute__((used)) static void FUNC_2(struct ieee80211_hw *VAR_3,
       struct ieee80211_bss_conf *VAR_4)
{
 struct rtl8180_priv *VAR_5 = VAR_3->priv;
 u8 VAR_6, VAR_7;
 int VAR_8;
 u8 VAR_9;


 if (VAR_5->chip_family == VAR_0)
  return;





 VAR_6 = 0x22;

 if (VAR_4->use_short_slot)
  VAR_5->slot_time = 9;
 else
  VAR_5->slot_time = 20;


 VAR_7 = 10 + 2 * VAR_5->slot_time;
 VAR_8 = 10 + VAR_7 + VAR_5->ack_time;


 VAR_9 = FUNC_0(VAR_8, 4);


 FUNC_1(VAR_5, &VAR_5->map->SLOT, VAR_5->slot_time);
 FUNC_1(VAR_5, &VAR_5->map->SIFS, VAR_6);
 FUNC_1(VAR_5, &VAR_5->map->DIFS, VAR_7);


 FUNC_1(VAR_5, &VAR_5->map->CARRIER_SENSE_COUNTER, VAR_9);

 if (VAR_5->chip_family == VAR_2)
  FUNC_1(VAR_5, &VAR_5->map->EIFS_8187SE, VAR_9);
 else if (VAR_5->chip_family == VAR_1) {




  VAR_9 = FUNC_0(VAR_8 - VAR_7, 4);

  FUNC_1(VAR_5, &VAR_5->map->EIFS, VAR_9);
 }
}
