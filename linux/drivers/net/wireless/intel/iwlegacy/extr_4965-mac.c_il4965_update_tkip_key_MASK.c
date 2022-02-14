
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct il_priv {int sta_lock; TYPE_3__* stations; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int dummy; } ;
struct TYPE_6__ {int modify_mask; } ;
struct TYPE_5__ {size_t tkip_rx_tsc_byte2; int * tkip_rx_ttak; } ;
struct TYPE_8__ {int mode; TYPE_2__ sta; TYPE_1__ key; } ;
struct TYPE_7__ {TYPE_4__ sta; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct il_priv*) ;
 int FUNC_2 (struct il_priv*,TYPE_4__*,int ) ;
 size_t FUNC_3 (struct il_priv*,struct ieee80211_sta*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void
FUNC_6(struct il_priv *VAR_4, struct ieee80211_key_conf *VAR_5,
         struct ieee80211_sta *VAR_6, u32 VAR_7, u16 *VAR_8)
{
 u8 VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 if (FUNC_1(VAR_4)) {


  return;
 }

 VAR_9 = FUNC_3(VAR_4, VAR_6);
 if (VAR_9 == VAR_1)
  return;

 FUNC_4(&VAR_4->sta_lock, VAR_10);

 VAR_4->stations[VAR_9].sta.key.tkip_rx_tsc_byte2 = (u8) VAR_7;

 for (VAR_11 = 0; VAR_11 < 5; VAR_11++)
  VAR_4->stations[VAR_9].sta.key.tkip_rx_ttak[VAR_11] =
      FUNC_0(VAR_8[VAR_11]);

 VAR_4->stations[VAR_9].sta.sta.modify_mask = VAR_3;
 VAR_4->stations[VAR_9].sta.mode = VAR_2;

 FUNC_2(VAR_4, &VAR_4->stations[VAR_9].sta, VAR_0);

 FUNC_5(&VAR_4->sta_lock, VAR_10);
}
