
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wsm_tx {int flags; } ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_tx_control {TYPE_1__* sta; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {struct cw1200_common* priv; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_5__ {int tid; int raw_link_id; int link_id; int rate_id; } ;
struct cw1200_txinfo {int queue; TYPE_2__ txpriv; struct sk_buff* skb; TYPE_1__* sta; struct cw1200_sta_priv* sta_priv; struct ieee80211_hdr* hdr; int da; int hdrlen; int tx_info; } ;
struct cw1200_sta_priv {int dummy; } ;
struct cw1200_common {int ps_state_lock; int * tx_queue; scalar_t__ bh_error; } ;
struct TYPE_4__ {int drv_priv; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct cw1200_common*) ;
 int FUNC_4 (int *,struct sk_buff*,TYPE_2__*) ;
 int FUNC_5 (struct cw1200_common*,struct sk_buff*,TYPE_2__*) ;
 int FUNC_6 (struct cw1200_common*,struct cw1200_txinfo*) ;
 int FUNC_7 (struct cw1200_common*,struct cw1200_txinfo*,int *) ;
 int FUNC_8 (struct cw1200_common*,struct cw1200_txinfo*,struct wsm_tx*) ;
 int FUNC_9 (struct cw1200_common*,struct cw1200_txinfo*) ;
 int FUNC_10 (struct cw1200_common*,struct cw1200_txinfo*) ;
 int FUNC_11 (struct cw1200_common*,struct cw1200_txinfo*) ;
 int FUNC_12 (struct cw1200_common*,struct cw1200_txinfo*) ;
 int FUNC_13 (struct cw1200_common*,struct cw1200_txinfo*) ;
 int FUNC_14 (struct cw1200_common*,struct cw1200_txinfo*,struct wsm_tx*) ;
 struct wsm_tx* FUNC_15 (struct cw1200_common*,struct cw1200_txinfo*) ;
 int FUNC_16 (struct ieee80211_hdr*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (struct ieee80211_sta*,int ,int) ;
 int FUNC_19 (char*,int ,int,int ,int ) ;
 struct ieee80211_sta* FUNC_20 (TYPE_1__*) ;
 int FUNC_21 () ;
 int FUNC_22 () ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;

void FUNC_26(struct ieee80211_hw *VAR_3,
        struct ieee80211_tx_control *VAR_4,
        struct sk_buff *VAR_5)
{
 struct cw1200_common *VAR_6 = VAR_3->priv;
 struct cw1200_txinfo VAR_7 = {
  .skb = VAR_5,
  .queue = FUNC_23(VAR_5),
  .tx_info = FUNC_1(VAR_5),
  .hdr = (struct ieee80211_hdr *)VAR_5->data,
  .txpriv.tid = VAR_1,
  .txpriv.rate_id = VAR_0,
 };
 struct ieee80211_sta *VAR_8;
 struct wsm_tx *VAR_9;
 bool VAR_10 = 0;
 u8 VAR_11 = 0;
 int VAR_12;

 if (VAR_6->bh_error)
  goto drop;

 VAR_7.hdrlen = FUNC_17(VAR_7.hdr->frame_control);
 VAR_7.da = FUNC_16(VAR_7.hdr);
 if (VAR_4) {
  VAR_7.sta = VAR_4->sta;
  VAR_7.sta_priv = (struct cw1200_sta_priv *)&VAR_7.sta->drv_priv;
 }

 if (FUNC_2(VAR_7.queue >= 4))
  goto drop;

 VAR_12 = FUNC_9(VAR_6, &VAR_7);
 if (VAR_12)
  goto drop;

 FUNC_19("[TX] TX %d bytes (queue: %d, link_id: %d (%d)).\n",
   VAR_5->len, VAR_7.queue, VAR_7.txpriv.link_id,
   VAR_7.txpriv.raw_link_id);

 FUNC_12(VAR_6, &VAR_7);
 FUNC_10(VAR_6, &VAR_7);
 VAR_12 = FUNC_11(VAR_6, &VAR_7);
 if (VAR_12)
  goto drop;
 VAR_12 = FUNC_7(VAR_6, &VAR_7, &VAR_11);
 if (VAR_12)
  goto drop;
 VAR_12 = FUNC_6(VAR_6, &VAR_7);
 if (VAR_12)
  goto drop;
 VAR_9 = FUNC_15(VAR_6, &VAR_7);
 if (!VAR_9) {
  VAR_12 = -VAR_2;
  goto drop;
 }
 VAR_9->flags |= VAR_11;
 FUNC_8(VAR_6, &VAR_7, VAR_9);
 VAR_12 = FUNC_14(VAR_6, &VAR_7, VAR_9);
 if (VAR_12)
  goto drop;

 FUNC_21();
 VAR_8 = FUNC_20(VAR_7.sta);

 FUNC_24(&VAR_6->ps_state_lock);
 {
  VAR_10 = FUNC_13(VAR_6, &VAR_7);
  FUNC_0(FUNC_4(&VAR_6->tx_queue[VAR_7.queue],
     VAR_7.skb, &VAR_7.txpriv));
 }
 FUNC_25(&VAR_6->ps_state_lock);

 if (VAR_10 && VAR_8)
  FUNC_18(VAR_8, VAR_7.txpriv.tid, 1);

 FUNC_22();

 FUNC_3(VAR_6);

 return;

drop:
 FUNC_5(VAR_6, VAR_5, &VAR_7.txpriv);
 return;
}
