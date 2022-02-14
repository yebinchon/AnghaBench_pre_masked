
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct sk_buff {unsigned int len; int data; } ;
struct TYPE_9__ {int vif; TYPE_1__* hw_key; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct ieee80211_tx_control {int * sta; } ;
struct ieee80211_rate {int dummy; } ;
struct ath5k_txq {int lock; int qnum; scalar_t__* link; int txq_len; int q; } ;
struct TYPE_11__ {scalar_t__ cap_has_mrr_support; } ;
struct TYPE_10__ {int txp_requested; } ;
struct ath5k_hw {int (* ah_setup_tx_desc ) (struct ath5k_hw*,struct ath5k_desc*,unsigned int,int ,int,int ,int,void*,unsigned int,unsigned int,int ,unsigned int,void*,void*) ;int dev; int hw; TYPE_4__ ah_capabilities; int ah_tx_ant; TYPE_3__ ah_txpower; } ;
struct ath5k_desc {scalar_t__ ds_link; int ds_data; } ;
struct ath5k_buf {int skbaddr; scalar_t__ daddr; int list; TYPE_5__* rates; struct sk_buff* skb; struct ath5k_desc* desc; } ;
typedef int mrr_tries ;
typedef int mrr_rate ;
struct TYPE_13__ {void* hw_value; } ;
struct TYPE_12__ {int flags; unsigned int count; } ;
struct TYPE_8__ {unsigned int hw_key_idx; scalar_t__ icv_len; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (TYPE_5__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct ieee80211_rate* FUNC_2 (int ,struct ieee80211_tx_info*,struct ath5k_buf*,int) ;
 void* FUNC_3 (int ,struct ieee80211_tx_info*,struct ath5k_buf*,int) ;
 int FUNC_4 (struct ath5k_hw*,int ,scalar_t__) ;
 int FUNC_5 (struct ath5k_hw*,struct ath5k_desc*,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (struct ath5k_hw*,int ) ;
 int FUNC_7 (int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,unsigned int,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int ,int ,unsigned int,struct ieee80211_tx_info*) ;
 int FUNC_12 (struct sk_buff*) ;
 TYPE_6__* FUNC_13 (int ,struct ieee80211_tx_info*) ;
 int FUNC_14 (int ,int *,struct sk_buff*,TYPE_5__*,int ) ;
 int FUNC_15 (int ,int ,unsigned int,struct ieee80211_tx_info*) ;
 void* FUNC_16 (int ) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (unsigned int*,int ,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct ath5k_hw*,struct ath5k_desc*,unsigned int,int ,int,int ,int,void*,unsigned int,unsigned int,int ,unsigned int,void*,void*) ;

__attribute__((used)) static int
FUNC_22(struct ath5k_hw *VAR_12, struct ath5k_buf *VAR_13,
    struct ath5k_txq *VAR_14, int VAR_15,
    struct ieee80211_tx_control *VAR_16)
{
 struct ath5k_desc *VAR_17 = VAR_13->desc;
 struct sk_buff *VAR_18 = VAR_13->skb;
 struct ieee80211_tx_info *VAR_19 = FUNC_1(VAR_18);
 unsigned int VAR_20, VAR_21, VAR_22 = VAR_5;
 struct ieee80211_rate *VAR_23;
 unsigned int VAR_24[3], VAR_25[3];
 int VAR_26, VAR_27;
 u16 VAR_28;
 u16 VAR_29 = 0;
 u16 VAR_30 = 0;
 u8 VAR_31;

 VAR_21 = VAR_2 | VAR_0;


 VAR_13->skbaddr = FUNC_7(VAR_12->dev, VAR_18->data, VAR_18->len,
   VAR_6);

 if (FUNC_8(VAR_12->dev, VAR_13->skbaddr))
  return -VAR_8;

 FUNC_14(VAR_19->control.vif, (VAR_16) ? VAR_16->sta : ((void*)0), VAR_18, VAR_13->rates,
          FUNC_0(VAR_13->rates));

 VAR_23 = FUNC_2(VAR_12->hw, VAR_19, VAR_13, 0);

 if (!VAR_23) {
  VAR_27 = -VAR_7;
  goto err_unmap;
 }

 if (VAR_19->flags & VAR_9)
  VAR_21 |= VAR_3;

 VAR_31 = VAR_13->rates[0].flags;

 VAR_28 = FUNC_3(VAR_12->hw, VAR_19, VAR_13, 0);

 VAR_20 = VAR_18->len;




 if (VAR_19->control.hw_key) {
  VAR_22 = VAR_19->control.hw_key->hw_key_idx;
  VAR_20 += VAR_19->control.hw_key->icv_len;
 }
 if (VAR_31 & VAR_11) {
  VAR_21 |= VAR_4;
  VAR_29 = FUNC_13(VAR_12->hw, VAR_19)->hw_value;
  VAR_30 = FUNC_16(FUNC_15(VAR_12->hw,
   VAR_19->control.vif, VAR_20, VAR_19));
 }
 if (VAR_31 & VAR_10) {
  VAR_21 |= VAR_1;
  VAR_29 = FUNC_13(VAR_12->hw, VAR_19)->hw_value;
  VAR_30 = FUNC_16(FUNC_11(VAR_12->hw,
   VAR_19->control.vif, VAR_20, VAR_19));
 }

 VAR_27 = VAR_12->ah_setup_tx_desc(VAR_12, VAR_17, VAR_20,
  FUNC_12(VAR_18), VAR_15,
  FUNC_10(VAR_18),
  (VAR_12->ah_txpower.txp_requested * 2),
  VAR_28,
  VAR_13->rates[0].count, VAR_22, VAR_12->ah_tx_ant, VAR_21,
  VAR_29, VAR_30);
 if (VAR_27)
  goto err_unmap;


 if (VAR_12->ah_capabilities.cap_has_mrr_support) {
  FUNC_18(VAR_24, 0, sizeof(VAR_24));
  FUNC_18(VAR_25, 0, sizeof(VAR_25));

  for (VAR_26 = 0; VAR_26 < 3; VAR_26++) {

   VAR_23 = FUNC_2(VAR_12->hw, VAR_19, VAR_13, VAR_26);
   if (!VAR_23)
    break;

   VAR_24[VAR_26] = FUNC_3(VAR_12->hw, VAR_19, VAR_13, VAR_26);
   VAR_25[VAR_26] = VAR_13->rates[VAR_26].count;
  }

  FUNC_5(VAR_12, VAR_17,
   VAR_24[0], VAR_25[0],
   VAR_24[1], VAR_25[1],
   VAR_24[2], VAR_25[2]);
 }

 VAR_17->ds_link = 0;
 VAR_17->ds_data = VAR_13->skbaddr;

 FUNC_19(&VAR_14->lock);
 FUNC_17(&VAR_13->list, &VAR_14->q);
 VAR_14->txq_len++;
 if (VAR_14->link == ((void*)0))
  FUNC_4(VAR_12, VAR_14->qnum, VAR_13->daddr);
 else
  *VAR_14->link = VAR_13->daddr;

 VAR_14->link = &VAR_17->ds_link;
 FUNC_6(VAR_12, VAR_14->qnum);
 FUNC_20(&VAR_14->lock);

 return 0;
err_unmap:
 FUNC_9(VAR_12->dev, VAR_13->skbaddr, VAR_18->len, VAR_6);
 return VAR_27;
}
