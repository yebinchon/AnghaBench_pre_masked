
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int work; } ;
struct rtl8187_vif {TYPE_2__ beacon_work; scalar_t__ enable_beacon; } ;
struct rtl8187_priv {int conf_mutex; TYPE_1__* map; scalar_t__ is_rtl8187b; } ;
struct ieee80211_vif {scalar_t__ type; int drv_priv; } ;
struct ieee80211_hw {struct rtl8187_priv* priv; } ;
struct ieee80211_bss_conf {scalar_t__ enable_beacon; int use_short_preamble; int use_short_slot; int * bssid; } ;
struct TYPE_3__ {int MSR; int * BSSID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rtl8187_priv*,int ,int ) ;
 int FUNC_5 (struct rtl8187_priv*,int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_hw *VAR_11,
         struct ieee80211_vif *VAR_12,
         struct ieee80211_bss_conf *VAR_13,
         u32 VAR_14)
{
 struct rtl8187_priv *VAR_15 = VAR_11->priv;
 struct rtl8187_vif *VAR_16;
 int VAR_17;
 u8 VAR_18;

 VAR_16 = (struct rtl8187_vif *)&VAR_12->drv_priv;

 if (VAR_14 & VAR_2) {
  FUNC_2(&VAR_15->conf_mutex);
  for (VAR_17 = 0; VAR_17 < VAR_5; VAR_17++)
   FUNC_5(VAR_15, &VAR_15->map->BSSID[VAR_17],
      VAR_13->bssid[VAR_17]);

  if (VAR_15->is_rtl8187b)
   VAR_18 = VAR_8;
  else
   VAR_18 = 0;

  if (FUNC_1(VAR_13->bssid)) {
   if (VAR_12->type == VAR_6)
    VAR_18 |= VAR_7;
   else
    VAR_18 |= VAR_9;
  }
  else
   VAR_18 |= VAR_10;

  FUNC_5(VAR_15, &VAR_15->map->MSR, VAR_18);

  FUNC_3(&VAR_15->conf_mutex);
 }

 if (VAR_14 & (VAR_4 | VAR_3))
  FUNC_4(VAR_15, VAR_13->use_short_slot,
     VAR_13->use_short_preamble);

 if (VAR_14 & VAR_1)
  VAR_16->enable_beacon = VAR_13->enable_beacon;

 if (VAR_14 & (VAR_1 | VAR_0)) {
  FUNC_0(&VAR_16->beacon_work);
  if (VAR_16->enable_beacon)
   FUNC_6(&VAR_16->beacon_work.work);
 }

}
