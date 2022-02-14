
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


struct sk_buff {int len; int data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_rate {int count; int idx; int flags; } ;
struct TYPE_11__ {struct ieee80211_tx_rate* rates; } ;
struct TYPE_7__ {struct ieee80211_vif* vif; } ;
struct ieee80211_tx_info {int flags; TYPE_5__ status; TYPE_1__ control; } ;
struct TYPE_9__ {TYPE_2__* chan; } ;
struct ieee80211_conf {TYPE_3__ chandef; } ;
struct ath9k_htc_tx_ctl {int txok; } ;
struct TYPE_10__ {scalar_t__ queued_cnt; int tx_lock; } ;
struct ath9k_htc_priv {TYPE_6__* hw; TYPE_4__ tx; } ;
struct __wmi_event_txstatus {int ts_flags; int ts_rate; } ;
struct TYPE_12__ {struct ieee80211_conf conf; } ;
struct TYPE_8__ {scalar_t__ band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ath9k_htc_tx_ctl* FUNC_0 (struct sk_buff*) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ath9k_htc_priv*,struct ieee80211_vif*,struct sk_buff*) ;
 int FUNC_5 (struct ath9k_htc_priv*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (TYPE_6__*,struct sk_buff*) ;
 int FUNC_9 (int ,int ,int) ;
 int FUNC_10 (TYPE_5__*,int ,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ath9k_htc_priv*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_15(struct ath9k_htc_priv *VAR_16,
     struct sk_buff *VAR_17,
     struct __wmi_event_txstatus *VAR_18)
{
 struct ieee80211_vif *VAR_19;
 struct ath9k_htc_tx_ctl *VAR_20;
 struct ieee80211_tx_info *VAR_21;
 struct ieee80211_tx_rate *VAR_22;
 struct ieee80211_conf *VAR_23 = &VAR_16->hw->conf;
 bool VAR_24;
 int VAR_25;
 int VAR_26, VAR_27;

 VAR_25 = FUNC_14(VAR_16, VAR_17);
 if (VAR_25 < 0) {
  FUNC_6(VAR_17);
  return;
 }

 VAR_20 = FUNC_0(VAR_17);
 VAR_24 = VAR_20->txok;
 VAR_21 = FUNC_1(VAR_17);
 VAR_19 = VAR_21->control.vif;
 VAR_22 = &VAR_21->status.rates[0];

 FUNC_10(&VAR_21->status, 0, sizeof(VAR_21->status));





 if (!VAR_24 || !VAR_19 || !VAR_18)
  goto send_mac80211;

 if (VAR_18->ts_flags & VAR_0) {
  VAR_21->flags |= VAR_12;
  if (VAR_21->flags & VAR_7)
   VAR_21->flags |= VAR_13;
 }

 if (VAR_18->ts_flags & VAR_2)
  VAR_21->flags |= VAR_14;

 if (VAR_18->ts_flags & VAR_5)
  VAR_22->flags |= VAR_11;

 VAR_22->count = 1;
 VAR_22->idx = FUNC_2(VAR_18->ts_rate, VAR_4);

 if (VAR_18->ts_flags & VAR_3) {
  VAR_22->flags |= VAR_9;

  if (VAR_18->ts_flags & VAR_1)
   VAR_22->flags |= VAR_8;
  if (VAR_18->ts_flags & VAR_6)
   VAR_22->flags |= VAR_10;
 } else {
  if (VAR_23->chandef.chan->band == VAR_15)
   VAR_22->idx += 4;
 }

 FUNC_4(VAR_16, VAR_19, VAR_17);

send_mac80211:
 FUNC_12(&VAR_16->tx.tx_lock);
 if (FUNC_3(--VAR_16->tx.queued_cnt < 0))
  VAR_16->tx.queued_cnt = 0;
 FUNC_13(&VAR_16->tx.tx_lock);

 FUNC_5(VAR_16, VAR_25);


 VAR_26 = FUNC_7(VAR_17);

 VAR_27 = VAR_26 & 3;
 if (VAR_27 && VAR_17->len > VAR_26 + VAR_27) {
  FUNC_9(VAR_17->data + VAR_27, VAR_17->data, VAR_26);
  FUNC_11(VAR_17, VAR_27);
 }


 FUNC_8(VAR_16->hw, VAR_17);
}
