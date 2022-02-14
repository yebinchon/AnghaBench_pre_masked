
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int last_update; int interval; int period; } ;
struct zd_mac {scalar_t__ type; int associated; int lock; int short_preamble; int chip; TYPE_1__ beacon; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_bss_conf {int use_short_preamble; int bssid; int beacon_int; int dtim_period; scalar_t__ enable_beacon; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 struct sk_buff* FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (struct zd_mac*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct zd_mac* FUNC_8 (struct ieee80211_hw*) ;
 int FUNC_9 (struct ieee80211_hw*,struct sk_buff*,int) ;
 int FUNC_10 (struct zd_mac*) ;
 int FUNC_11 (int *,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_7,
       struct ieee80211_vif *VAR_8,
       struct ieee80211_bss_conf *VAR_9,
       u32 VAR_10)
{
 struct zd_mac *VAR_11 = FUNC_8(VAR_7);
 int VAR_12;

 FUNC_0(FUNC_10(VAR_11), "changes: %x\n", VAR_10);

 if (VAR_11->type == VAR_5 ||
     VAR_11->type == VAR_3 ||
     VAR_11->type == VAR_4) {
  VAR_12 = 1;
  if (VAR_10 & VAR_0) {
   struct sk_buff *VAR_13 = FUNC_1(VAR_7, VAR_8);

   if (VAR_13) {
    FUNC_6(&VAR_11->chip);
    FUNC_9(VAR_7, VAR_13, 0);
    FUNC_7(&VAR_11->chip);
   }
  }

  if (VAR_10 & VAR_1) {
   u16 VAR_14 = 0;
   u8 VAR_15 = 0;

   if (VAR_9->enable_beacon) {
    VAR_15 = VAR_9->dtim_period;
    VAR_14 = VAR_9->beacon_int;
   }

   FUNC_4(&VAR_11->lock);
   VAR_11->beacon.period = VAR_15;
   VAR_11->beacon.interval = VAR_14;
   VAR_11->beacon.last_update = VAR_6;
   FUNC_5(&VAR_11->lock);

   FUNC_11(&VAR_11->chip, VAR_14, VAR_15,
            VAR_11->type);
  }
 } else
  VAR_12 = FUNC_2(VAR_9->bssid);

 FUNC_4(&VAR_11->lock);
 VAR_11->associated = VAR_12;
 FUNC_5(&VAR_11->lock);



 if (VAR_10 & VAR_2) {
  FUNC_4(&VAR_11->lock);
  VAR_11->short_preamble = VAR_9->use_short_preamble;
  FUNC_5(&VAR_11->lock);

  FUNC_3(VAR_11, VAR_9->use_short_preamble);
 }
}
