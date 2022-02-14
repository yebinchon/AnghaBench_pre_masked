
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct TYPE_7__ {int basic_rates; int use_short_preamble; } ;
struct ieee80211_vif {TYPE_1__ bss_conf; } ;
struct TYPE_9__ {TYPE_2__* chan; } ;
struct TYPE_10__ {TYPE_3__ chandef; } ;
struct ieee80211_hw {TYPE_4__ conf; } ;
struct ieee80211_bss_conf {int enable_beacon; } ;
struct TYPE_12__ {int hw_value; } ;
struct TYPE_11__ {int hw_value; } ;
struct TYPE_8__ {scalar_t__ band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ieee80211_hw*,struct ieee80211_vif*,int ) ;
 int FUNC_4 (struct ieee80211_hw*,struct ieee80211_vif*,int ,int ) ;
 int FUNC_5 (struct ieee80211_hw*,int,int) ;
 scalar_t__ FUNC_6 (struct ieee80211_hw*) ;
 int FUNC_7 (struct ieee80211_hw*) ;
 TYPE_6__* VAR_6 ;
 TYPE_5__* VAR_7 ;
 int FUNC_8 (struct ieee80211_hw*,int ) ;

__attribute__((used)) static void
FUNC_9(struct ieee80211_hw *VAR_8, struct ieee80211_vif *VAR_9,
     struct ieee80211_bss_conf *VAR_10, u32 VAR_11)
{
 int VAR_12;

 if (FUNC_6(VAR_8))
  return;

 if (VAR_11 & VAR_4) {
  VAR_12 = FUNC_8(VAR_8,
    VAR_9->bss_conf.use_short_preamble);
  if (VAR_12)
   goto out;
 }

 if (VAR_11 & VAR_0) {
  int VAR_13;
  int VAR_14;






  VAR_13 = FUNC_0(VAR_9->bss_conf.basic_rates);
  if (VAR_13)
   VAR_13--;

  if (VAR_8->conf.chandef.chan->band == VAR_5)
   VAR_14 = VAR_6[VAR_13].hw_value;
  else
   VAR_14 = VAR_7[VAR_13].hw_value;

  FUNC_5(VAR_8, VAR_14, VAR_14);
 }

 if (VAR_11 & (VAR_3 | VAR_1)) {
  struct sk_buff *VAR_15;

  VAR_15 = FUNC_1(VAR_8, VAR_9);
  if (VAR_15 != ((void*)0)) {
   FUNC_4(VAR_8, VAR_9, VAR_15->data, VAR_15->len);
   FUNC_2(VAR_15);
  }
 }

 if (VAR_11 & VAR_2)
  FUNC_3(VAR_8, VAR_9, VAR_10->enable_beacon);

out:
 FUNC_7(VAR_8);
}
