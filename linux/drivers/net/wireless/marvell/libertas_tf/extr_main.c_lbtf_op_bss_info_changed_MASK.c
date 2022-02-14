
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct lbtf_private {int preamble; TYPE_1__* vif; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct lbtf_private* priv; } ;
struct ieee80211_bss_conf {scalar_t__ use_short_preamble; int bssid; int beacon_int; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 struct sk_buff* FUNC_0 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct lbtf_private*,int,int ) ;
 int FUNC_4 (struct lbtf_private*,struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct lbtf_private*,int,int ) ;
 int FUNC_8 (struct lbtf_private*) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_7,
   struct ieee80211_vif *VAR_8,
   struct ieee80211_bss_conf *VAR_9,
   u32 VAR_10)
{
 struct lbtf_private *VAR_11 = VAR_7->priv;
 struct sk_buff *VAR_12;
 FUNC_5(VAR_6);

 if (VAR_10 & (VAR_0 | VAR_1)) {
  switch (VAR_11->vif->type) {
  case 129:
  case 128:
   VAR_12 = FUNC_0(VAR_7, VAR_8);
   if (VAR_12) {
    FUNC_4(VAR_11, VAR_12);
    FUNC_2(VAR_12);
    FUNC_3(VAR_11, 1,
       VAR_9->beacon_int);
   }
   break;
  default:
   break;
  }
 }

 if (VAR_10 & VAR_2) {
  bool VAR_13 = !FUNC_1(VAR_9->bssid);
  FUNC_7(VAR_11, VAR_13, VAR_9->bssid);
 }

 if (VAR_10 & VAR_3) {
  if (VAR_9->use_short_preamble)
   VAR_11->preamble = VAR_5;
  else
   VAR_11->preamble = VAR_4;
  FUNC_8(VAR_11);
 }

 FUNC_6(VAR_6);
}
