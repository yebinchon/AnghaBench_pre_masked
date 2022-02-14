
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


struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_12__ {TYPE_5__* rates; } ;
struct ieee80211_tx_info {TYPE_6__ control; } ;
struct TYPE_8__ {int timestamp; } ;
struct TYPE_9__ {TYPE_2__ beacon; } ;
struct ieee80211_mgmt {TYPE_3__ u; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_vif {int tsf_adjust; struct ath_buf* av_bcbuf; } ;
struct ath_txq {int axq_depth; int axq_lock; } ;
struct TYPE_7__ {struct ath_txq* cabq; } ;
struct ath_softc {TYPE_4__* cur_chan; int dev; TYPE_1__ beacon; int sc_ah; } ;
struct ath_common {int dummy; } ;
struct ath_buf {scalar_t__ bf_buf_addr; struct sk_buff* bf_mpdu; } ;
struct TYPE_11__ {int idx; } ;
struct TYPE_10__ {int nvifs; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct ath_softc*,struct ath_vif*,struct sk_buff*) ;
 int FUNC_2 (struct ath_softc*,struct ieee80211_vif*,struct ath_buf*,int ) ;
 struct ath_common* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct ath_common*,struct sk_buff*) ;
 int FUNC_6 (struct ath_common*,int ,char*) ;
 int FUNC_7 (struct ath_softc*,struct ath_txq*) ;
 int FUNC_8 (struct ath_common*,char*) ;
 int FUNC_9 (struct ieee80211_hw*,struct ieee80211_vif*,struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,int ,int ) ;
 int FUNC_12 (int ,scalar_t__) ;
 int FUNC_13 (int ,scalar_t__,int ,int ) ;
 struct sk_buff* FUNC_14 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 struct sk_buff* FUNC_15 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (int ) ;

__attribute__((used)) static struct ath_buf *FUNC_19(struct ieee80211_hw *VAR_2,
          struct ieee80211_vif *VAR_3)
{
 struct ath_softc *VAR_4 = VAR_2->priv;
 struct ath_common *VAR_5 = FUNC_3(VAR_4->sc_ah);
 struct ath_buf *VAR_6;
 struct ath_vif *VAR_7 = (void *)VAR_3->drv_priv;
 struct sk_buff *VAR_8;
 struct ath_txq *VAR_9 = VAR_4->beacon.cabq;
 struct ieee80211_tx_info *VAR_10;
 struct ieee80211_mgmt *VAR_11;
 int VAR_12;

 if (VAR_7->av_bcbuf == ((void*)0))
  return ((void*)0);

 VAR_6 = VAR_7->av_bcbuf;
 VAR_8 = VAR_6->bf_mpdu;
 if (VAR_8) {
  FUNC_13(VAR_4->dev, VAR_6->bf_buf_addr,
     VAR_8->len, VAR_1);
  FUNC_10(VAR_8);
  VAR_6->bf_buf_addr = 0;
  VAR_6->bf_mpdu = ((void*)0);
 }

 VAR_8 = FUNC_14(VAR_2, VAR_3);
 if (VAR_8 == ((void*)0))
  return ((void*)0);

 VAR_6->bf_mpdu = VAR_8;

 VAR_11 = (struct ieee80211_mgmt *)VAR_8->data;
 VAR_11->u.beacon.timestamp = VAR_7->tsf_adjust;

 VAR_10 = FUNC_0(VAR_8);

 FUNC_5(VAR_5, VAR_8);


 if (FUNC_4())
  FUNC_1(VAR_4, VAR_7, VAR_8);

 VAR_6->bf_buf_addr = FUNC_11(VAR_4->dev, VAR_8->data,
      VAR_8->len, VAR_1);
 if (FUNC_18(FUNC_12(VAR_4->dev, VAR_6->bf_buf_addr))) {
  FUNC_10(VAR_8);
  VAR_6->bf_mpdu = ((void*)0);
  VAR_6->bf_buf_addr = 0;
  FUNC_8(VAR_5, "dma_mapping_error on beaconing\n");
  return ((void*)0);
 }

 VAR_8 = FUNC_15(VAR_2, VAR_3);
 FUNC_16(&VAR_9->axq_lock);
 VAR_12 = VAR_9->axq_depth;
 FUNC_17(&VAR_9->axq_lock);

 if (VAR_8 && VAR_12) {
  if (VAR_4->cur_chan->nvifs > 1) {
   FUNC_6(VAR_5, VAR_0,
    "Flushing previous cabq traffic\n");
   FUNC_7(VAR_4, VAR_9);
  }
 }

 FUNC_2(VAR_4, VAR_3, VAR_6, VAR_10->control.rates[0].idx);

 if (VAR_8)
  FUNC_9(VAR_2, VAR_3, VAR_8);

 return VAR_6;
}
