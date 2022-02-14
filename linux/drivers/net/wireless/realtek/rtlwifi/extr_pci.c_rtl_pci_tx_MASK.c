
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u16 ;
struct sk_buff {int len; } ;
struct rtl_tx_desc {int dummy; } ;
struct rtl_tx_buffer_desc {int dummy; } ;
struct rtl_tcb_desc {int dummy; } ;
struct TYPE_8__ {int irq_th_lock; } ;
struct TYPE_7__ {int txbytesunicast; int txbytesbroadcast; int txbytesmulticast; } ;
struct TYPE_6__ {scalar_t__ sw_ps_enabled; } ;
struct rtl_priv {TYPE_5__* cfg; TYPE_3__ locks; scalar_t__ use_new_trx_flow; TYPE_2__ stats; TYPE_1__ psc; } ;
struct rtl_pci {struct rtl8192_tx_ring* tx_ring; } ;
struct rtl8192_tx_ring {size_t cur_tx_wp; int idx; int entries; int queue; struct rtl_tx_buffer_desc* buffer_desc; struct rtl_tx_desc* desc; } ;
struct ieee80211_tx_info {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {size_t* addr1; int frame_control; } ;
typedef int __le16 ;
struct TYPE_10__ {TYPE_4__* ops; } ;
struct TYPE_9__ {scalar_t__ (* get_available_desc ) (struct ieee80211_hw*,size_t) ;int (* tx_polling ) (struct ieee80211_hw*,size_t) ;int (* set_desc ) (struct ieee80211_hw*,size_t*,int,int ,size_t*) ;int (* fill_tx_desc ) (struct ieee80211_hw*,struct ieee80211_hdr*,size_t*,size_t*,struct ieee80211_tx_info*,struct ieee80211_sta*,struct sk_buff*,size_t,struct rtl_tcb_desc*) ;int (* led_control ) (struct ieee80211_hw*,int ) ;scalar_t__ (* get_desc ) (struct ieee80211_hw*,size_t*,int,int ) ;} ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,...) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 size_t FUNC_3 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ieee80211_hw*,int ) ;
 scalar_t__ FUNC_10 (size_t*) ;
 scalar_t__ FUNC_11 (size_t*) ;
 int FUNC_12 (struct ieee80211_hw*,struct sk_buff*,int) ;
 int FUNC_13 (struct sk_buff*) ;
 struct ieee80211_hdr* FUNC_14 (struct sk_buff*) ;
 struct rtl_pci* FUNC_15 (int ) ;
 int FUNC_16 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_17 (struct ieee80211_hw*) ;
 int FUNC_18 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,unsigned long) ;
 int FUNC_22 (int *,unsigned long) ;
 scalar_t__ FUNC_23 (struct ieee80211_hw*,size_t*,int,int ) ;
 scalar_t__ FUNC_24 (struct ieee80211_hw*,size_t) ;
 int FUNC_25 (struct ieee80211_hw*,int ) ;
 int FUNC_26 (struct ieee80211_hw*,struct ieee80211_hdr*,size_t*,size_t*,struct ieee80211_tx_info*,struct ieee80211_sta*,struct sk_buff*,size_t,struct rtl_tcb_desc*) ;
 int FUNC_27 (struct ieee80211_hw*,size_t*,int,int ,size_t*) ;
 int FUNC_28 (struct ieee80211_hw*,size_t*,int,int ,size_t*) ;
 int FUNC_29 (struct ieee80211_hw*,size_t) ;

__attribute__((used)) static int FUNC_30(struct ieee80211_hw *VAR_7,
        struct ieee80211_sta *VAR_8,
        struct sk_buff *VAR_9,
        struct rtl_tcb_desc *VAR_10)
{
 struct rtl_priv *VAR_11 = FUNC_17(VAR_7);
 struct ieee80211_tx_info *VAR_12 = FUNC_0(VAR_9);
 struct rtl8192_tx_ring *VAR_13;
 struct rtl_tx_desc *VAR_14;
 struct rtl_tx_buffer_desc *VAR_15 = ((void*)0);
 u16 VAR_16;
 u8 VAR_17 = FUNC_3(VAR_7, VAR_9);
 unsigned long VAR_18;
 struct ieee80211_hdr *VAR_19 = FUNC_14(VAR_9);
 __le16 VAR_20 = FUNC_13(VAR_9);
 u8 *VAR_21 = VAR_19->addr1;
 struct rtl_pci *VAR_22 = FUNC_15(FUNC_16(VAR_7));
 u8 VAR_23;
 u8 VAR_24 = 1;

 if (FUNC_7(VAR_20))
  FUNC_18(VAR_7, VAR_9);

 if (VAR_11->psc.sw_ps_enabled) {
  if (FUNC_6(VAR_20) && !FUNC_8(VAR_20) &&
      !FUNC_5(VAR_20))
   VAR_19->frame_control |= FUNC_4(VAR_5);
 }

 FUNC_12(VAR_7, VAR_9, 1);

 if (FUNC_11(VAR_21))
  VAR_11->stats.txbytesmulticast += VAR_9->len;
 else if (FUNC_10(VAR_21))
  VAR_11->stats.txbytesbroadcast += VAR_9->len;
 else
  VAR_11->stats.txbytesunicast += VAR_9->len;

 FUNC_21(&VAR_11->locks.irq_th_lock, VAR_18);
 VAR_13 = &VAR_22->tx_ring[VAR_17];
 if (VAR_17 != VAR_0) {
  if (VAR_11->use_new_trx_flow)
   VAR_16 = VAR_13->cur_tx_wp;
  else
   VAR_16 = (VAR_13->idx + FUNC_20(&VAR_13->queue)) %
         VAR_13->entries;
 } else {
  VAR_16 = 0;
 }

 VAR_14 = &VAR_13->desc[VAR_16];
 if (VAR_11->use_new_trx_flow) {
  VAR_15 = &VAR_13->buffer_desc[VAR_16];
 } else {
  VAR_23 = (u8)VAR_11->cfg->ops->get_desc(VAR_7, (u8 *)VAR_14,
    1, VAR_4);

  if (VAR_23 == 1 && VAR_17 != VAR_0) {
   FUNC_1(VAR_11, VAR_1, VAR_3,
     "No more TX desc@%d, ring->idx = %d, idx = %d, skb_queue_len = 0x%x\n",
     VAR_17, VAR_13->idx, VAR_16,
     FUNC_20(&VAR_13->queue));

   FUNC_22(&VAR_11->locks.irq_th_lock,
            VAR_18);
   return VAR_9->len;
  }
 }

 if (VAR_11->cfg->ops->get_available_desc &&
     VAR_11->cfg->ops->get_available_desc(VAR_7, VAR_17) == 0) {
  FUNC_1(VAR_11, VAR_1, VAR_3,
    "get_available_desc fail\n");
  FUNC_22(&VAR_11->locks.irq_th_lock, VAR_18);
  return VAR_9->len;
 }

 if (FUNC_6(VAR_20))
  VAR_11->cfg->ops->led_control(VAR_7, VAR_6);

 VAR_11->cfg->ops->fill_tx_desc(VAR_7, VAR_19, (u8 *)VAR_14,
   (u8 *)VAR_15, VAR_12, VAR_8, VAR_9, VAR_17, VAR_10);

 FUNC_2(&VAR_13->queue, VAR_9);

 if (VAR_11->use_new_trx_flow) {
  VAR_11->cfg->ops->set_desc(VAR_7, (u8 *)VAR_14, 1,
         VAR_4, &VAR_17);
 } else {
  VAR_11->cfg->ops->set_desc(VAR_7, (u8 *)VAR_14, 1,
         VAR_4, &VAR_24);
 }

 if ((VAR_13->entries - FUNC_20(&VAR_13->queue)) < 2 &&
     VAR_17 != VAR_0) {
  FUNC_1(VAR_11, VAR_1, VAR_2,
    "less desc left, stop skb_queue@%d, ring->idx = %d, idx = %d, skb_queue_len = 0x%x\n",
    VAR_17, VAR_13->idx, VAR_16,
    FUNC_20(&VAR_13->queue));

  FUNC_9(VAR_7, FUNC_19(VAR_9));
 }

 FUNC_22(&VAR_11->locks.irq_th_lock, VAR_18);

 VAR_11->cfg->ops->tx_polling(VAR_7, VAR_17);

 return 0;
}
