
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct sk_buff {int len; scalar_t__ data; } ;
struct mac80211_hwsim_data {int tx_bytes; int tx_pkts; int wmediumd; scalar_t__ tsf_offset; struct ieee80211_channel* tmp_chan; scalar_t__ idle; struct ieee80211_channel* channel; int use_chanctx; } ;
struct TYPE_12__ {TYPE_6__* rates; TYPE_5__* vif; } ;
struct ieee80211_tx_info {int hw_queue; int flags; TYPE_4__ control; } ;
struct ieee80211_tx_control {int sta; } ;
struct ieee80211_rate {int bitrate; } ;
struct TYPE_10__ {int timestamp; } ;
struct TYPE_11__ {TYPE_2__ probe_resp; } ;
struct ieee80211_mgmt {TYPE_3__ u; } ;
struct ieee80211_hw {int wiphy; struct mac80211_hwsim_data* priv; } ;
struct ieee80211_hdr {int addr2; int frame_control; } ;
struct ieee80211_channel {int dummy; } ;
struct TYPE_9__ {struct ieee80211_channel* chan; } ;
struct ieee80211_chanctx_conf {TYPE_1__ def; } ;
struct TYPE_14__ {int count; int idx; } ;
struct TYPE_13__ {int chanctx_conf; } ;


 int FUNC_0 (TYPE_6__*) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int,char*,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ieee80211_hw*,struct sk_buff*) ;
 struct ieee80211_rate* FUNC_9 (struct ieee80211_hw*,struct ieee80211_tx_info*) ;
 int FUNC_10 (TYPE_5__*,int ,struct sk_buff*,TYPE_6__*,int ) ;
 scalar_t__ FUNC_11 (struct ieee80211_hw*,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (struct ieee80211_tx_info*) ;
 int FUNC_14 (struct ieee80211_hw*,struct sk_buff*) ;
 scalar_t__ FUNC_15 () ;
 int FUNC_16 (struct ieee80211_channel*,int ) ;
 int FUNC_17 (struct ieee80211_hw*,struct sk_buff*,struct ieee80211_channel*) ;
 void FUNC_18 (struct ieee80211_hw*,struct sk_buff*,scalar_t__) ;
 int FUNC_19 (struct ieee80211_hw*,struct sk_buff*,struct ieee80211_channel*) ;
 struct ieee80211_chanctx_conf* FUNC_20 (int ) ;
 int FUNC_21 (int ,char*) ;

__attribute__((used)) static void FUNC_22(struct ieee80211_hw *VAR_3,
         struct ieee80211_tx_control *VAR_4,
         struct sk_buff *VAR_5)
{
 struct mac80211_hwsim_data *VAR_6 = VAR_3->priv;
 struct ieee80211_tx_info *VAR_7 = FUNC_1(VAR_5);
 struct ieee80211_hdr *VAR_8 = (void *)VAR_5->data;
 struct ieee80211_chanctx_conf *VAR_9;
 struct ieee80211_channel *VAR_10;
 bool VAR_11;
 u32 VAR_12;

 if (FUNC_4(VAR_5->len < 10)) {

  FUNC_8(VAR_3, VAR_5);
  return;
 }

 if (!VAR_6->use_chanctx) {
  VAR_10 = VAR_6->channel;
 } else if (VAR_7->hw_queue == 4) {
  VAR_10 = VAR_6->tmp_chan;
 } else {
  VAR_9 = FUNC_20(VAR_7->control.vif->chanctx_conf);
  if (VAR_9)
   VAR_10 = VAR_9->def.chan;
  else
   VAR_10 = ((void*)0);
 }

 if (FUNC_3(!VAR_10, "TX w/o channel - queue = %d\n", VAR_7->hw_queue)) {
  FUNC_8(VAR_3, VAR_5);
  return;
 }

 if (VAR_6->idle && !VAR_6->tmp_chan) {
  FUNC_21(VAR_3->wiphy, "Trying to TX when idle - reject\n");
  FUNC_8(VAR_3, VAR_5);
  return;
 }

 if (VAR_7->control.vif)
  FUNC_6(VAR_7->control.vif);
 if (VAR_4->sta)
  FUNC_7(VAR_4->sta);

 if (FUNC_11(VAR_3, VAR_2))
  FUNC_10(VAR_7->control.vif, VAR_4->sta, VAR_5,
           VAR_7->control.rates,
           FUNC_0(VAR_7->control.rates));

 if (VAR_5->len >= 24 + 8 &&
     FUNC_12(VAR_8->frame_control)) {

  struct ieee80211_mgmt *VAR_13;
  struct ieee80211_rate *VAR_14;
  u64 VAR_15;

  VAR_13 = (struct ieee80211_mgmt *)VAR_5->data;
  VAR_14 = FUNC_9(VAR_3, VAR_7);
  VAR_15 = FUNC_15();
  VAR_13->u.probe_resp.timestamp =
   FUNC_5(VAR_15 + VAR_6->tsf_offset +
        24 * 8 * 10 / VAR_14->bitrate);
 }

 FUNC_17(VAR_3, VAR_5, VAR_10);


 VAR_12 = FUNC_2(VAR_6->wmediumd);

 if (VAR_12)
  return FUNC_18(VAR_3, VAR_5, VAR_12);


 VAR_6->tx_pkts++;
 VAR_6->tx_bytes += VAR_5->len;
 VAR_11 = FUNC_19(VAR_3, VAR_5, VAR_10);

 if (VAR_11 && VAR_5->len >= 16)
  FUNC_16(VAR_10, VAR_8->addr2);

 FUNC_13(VAR_7);


 VAR_7->control.rates[0].count = 1;
 VAR_7->control.rates[1].idx = -1;

 if (!(VAR_7->flags & VAR_0) && VAR_11)
  VAR_7->flags |= VAR_1;
 FUNC_14(VAR_3, VAR_5);
}
