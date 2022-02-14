
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct wl12xx_vif {scalar_t__ channel_type; } ;
struct wl1271 {TYPE_1__* links; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_rate {size_t idx; int flags; } ;
struct TYPE_2__ {size_t fw_rate_idx; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (char*,size_t) ;
 struct wl12xx_vif* FUNC_1 (struct ieee80211_vif*) ;

__attribute__((used)) static
void FUNC_2(struct wl1271 *VAR_12, struct ieee80211_vif *VAR_13,
        u8 VAR_14, struct ieee80211_tx_rate *VAR_15, u8 VAR_16)
{
 u8 VAR_17 = VAR_12->links[VAR_16].fw_rate_idx;

 if (VAR_17 > VAR_2) {
  FUNC_0("last Tx rate invalid: %d", VAR_17);
  VAR_15->idx = 0;
  VAR_15->flags = 0;
  return;
 }

 if (VAR_17 <= VAR_0) {
  VAR_15->idx = VAR_17;
  if (VAR_14 == VAR_9)
   VAR_15->idx -= VAR_1;
  VAR_15->flags = 0;
 } else {
  VAR_15->flags = VAR_7;
  VAR_15->idx = VAR_17 - VAR_3;


  if (VAR_17 >= VAR_5)
   (VAR_15->idx)--;
  if (VAR_17 == VAR_4)
   (VAR_15->idx)--;


  if (VAR_17 == VAR_5 ||
      VAR_17 == VAR_4)
   VAR_15->flags |= VAR_8;

  if (VAR_17 > VAR_5 && VAR_13) {
   struct wl12xx_vif *VAR_18 = FUNC_1(VAR_13);
   if (VAR_18->channel_type == VAR_10 ||
       VAR_18->channel_type == VAR_11) {

    VAR_15->idx -= 8;
    VAR_15->flags |= VAR_6;
   }
  }
 }
}
