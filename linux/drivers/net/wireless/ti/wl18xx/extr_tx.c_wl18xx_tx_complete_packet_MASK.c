
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct wl1271_tx_hw_descr {int hlid; } ;
struct TYPE_7__ {int retry_count; } ;
struct wl1271 {int num_tx_desc; int quirks; int netstack_work; int freezable_wq; int deferred_tx_queue; TYPE_2__ stats; struct sk_buff** tx_frames; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_9__ {TYPE_3__* hw_key; int vif; } ;
struct TYPE_6__ {int ack_signal; TYPE_5__* rates; } ;
struct ieee80211_tx_info {int flags; TYPE_4__ control; TYPE_1__ status; int band; } ;
struct TYPE_10__ {int count; } ;
struct TYPE_8__ {scalar_t__ cipher; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,char*,int,struct sk_buff*,int) ;
 int FUNC_9 (struct wl1271*,int) ;
 int FUNC_10 (char*,int) ;
 scalar_t__ FUNC_11 (struct wl1271*,struct sk_buff*) ;
 int FUNC_12 (struct wl1271*,int ,int ,TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_13(struct wl1271 *VAR_8, u8 VAR_9)
{
 struct ieee80211_tx_info *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12 = VAR_9 & VAR_4;
 bool VAR_13;
 struct wl1271_tx_hw_descr *VAR_14;


 if (FUNC_7(VAR_12 >= VAR_8->num_tx_desc || VAR_8->tx_frames[VAR_12] == ((void*)0))) {
  FUNC_10("illegal id in tx completion: %d", VAR_12);
  return;
 }


 VAR_13 = !(VAR_9 & FUNC_0(VAR_5));

 VAR_11 = VAR_8->tx_frames[VAR_12];
 VAR_10 = FUNC_1(VAR_11);
 VAR_14 = (struct wl1271_tx_hw_descr *)VAR_11->data;

 if (FUNC_11(VAR_8, VAR_11)) {
  FUNC_9(VAR_8, VAR_12);
  return;
 }


 if (VAR_13 && !(VAR_10->flags & VAR_1))
  VAR_10->flags |= VAR_2;




 FUNC_12(VAR_8, VAR_10->control.vif,
    VAR_10->band,
    &VAR_10->status.rates[0],
    VAR_14->hlid);

 VAR_10->status.rates[0].count = 1;
 VAR_10->status.ack_signal = -1;

 if (!VAR_13)
  VAR_8->stats.retry_count++;







 FUNC_5(VAR_11, sizeof(struct wl1271_tx_hw_descr));


 if ((VAR_8->quirks & VAR_7) &&
     VAR_10->control.hw_key &&
     VAR_10->control.hw_key->cipher == VAR_6) {
  int VAR_15 = FUNC_2(VAR_11);
  FUNC_3(VAR_11->data + VAR_3, VAR_11->data, VAR_15);
  FUNC_5(VAR_11, VAR_3);
 }

 FUNC_8(VAR_0, "tx status id %u skb 0x%p success %d",
       VAR_12, VAR_11, VAR_13);


 FUNC_6(&VAR_8->deferred_tx_queue, VAR_11);
 FUNC_4(VAR_8->freezable_wq, &VAR_8->netstack_work);
 FUNC_9(VAR_8, VAR_12);
}
