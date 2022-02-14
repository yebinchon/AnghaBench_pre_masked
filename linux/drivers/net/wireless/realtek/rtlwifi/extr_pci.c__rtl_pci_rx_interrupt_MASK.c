
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ end; scalar_t__ tail; scalar_t__ len; scalar_t__ data; scalar_t__ cb; } ;
struct rtl_stats {scalar_t__ packet_report_type; int hwerror; int crc; scalar_t__ rx_bufshift; scalar_t__ rx_drvinfo_size; int rate; int signal; } ;
struct rtl_rx_desc {int dummy; } ;
struct rtl_rx_buffer_desc {int dummy; } ;
struct TYPE_11__ {int num_rx_inperiod; int num_tx_inperiod; } ;
struct TYPE_10__ {scalar_t__ current_bandtype; } ;
struct TYPE_9__ {scalar_t__ opmode; } ;
struct TYPE_8__ {int rxbytesunicast; } ;
struct rtl_priv {TYPE_7__* cfg; scalar_t__ use_new_trx_flow; TYPE_4__ link_info; TYPE_3__ rtlhal; TYPE_2__ mac80211; TYPE_1__ stats; } ;
struct rtl_pci {unsigned int rxringcount; TYPE_5__* rx_ring; int rxbuffersize; int pdev; } ;
struct ieee80211_rx_status {int member_0; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int addr1; } ;
typedef int rx_status ;
typedef int dma_addr_t ;
typedef int __le16 ;
struct TYPE_14__ {TYPE_6__* ops; } ;
struct TYPE_13__ {unsigned int (* rx_desc_buff_remained_cnt ) (struct ieee80211_hw*,size_t) ;scalar_t__ (* get_desc ) (struct ieee80211_hw*,size_t*,int,int ) ;int (* set_desc ) (struct ieee80211_hw*,size_t*,int,int ,size_t*) ;int (* led_control ) (struct ieee80211_hw*,int ) ;int (* rx_check_dma_ok ) (struct ieee80211_hw*,size_t*,size_t) ;int (* query_rx_desc ) (struct ieee80211_hw*,struct rtl_stats*,struct ieee80211_rx_status*,size_t*,struct sk_buff*) ;} ;
struct TYPE_12__ {size_t idx; int next_rx_rp; struct rtl_rx_desc* desc; struct rtl_rx_buffer_desc* buffer_desc; struct sk_buff** rx_buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct sk_buff*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (struct ieee80211_hw*,struct sk_buff*,size_t*,int,int) ;
 int FUNC_3 (struct ieee80211_hw*,struct sk_buff*,struct ieee80211_rx_status) ;
 struct sk_buff* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,struct ieee80211_rx_status*,int) ;
 int FUNC_12 (struct ieee80211_rx_status*,int ,int) ;
 int FUNC_13 (int ,int ,int ,int ) ;
 int FUNC_14 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_15 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_16 (struct ieee80211_hw*,struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 struct ieee80211_hdr* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct ieee80211_hw*,struct sk_buff*,int,int) ;
 int FUNC_20 (struct ieee80211_hw*) ;
 int FUNC_21 (struct ieee80211_hw*,void*,scalar_t__) ;
 struct rtl_pci* FUNC_22 (int ) ;
 int FUNC_23 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_24 (struct ieee80211_hw*) ;
 int FUNC_25 (struct ieee80211_hw*,void*,scalar_t__) ;
 int FUNC_26 (struct ieee80211_hw*,void*,scalar_t__) ;
 int FUNC_27 (struct rtl_priv*,int,int) ;
 int FUNC_28 (struct sk_buff*,scalar_t__) ;
 int FUNC_29 (struct sk_buff*,scalar_t__) ;
 unsigned int FUNC_30 (struct ieee80211_hw*,size_t) ;
 scalar_t__ FUNC_31 (struct ieee80211_hw*,size_t*,int,int ) ;
 int FUNC_32 (struct ieee80211_hw*,struct rtl_stats*,struct ieee80211_rx_status*,size_t*,struct sk_buff*) ;
 int FUNC_33 (struct ieee80211_hw*,size_t*,size_t) ;
 scalar_t__ FUNC_34 (struct ieee80211_hw*,size_t*,int,int ) ;
 int FUNC_35 (struct ieee80211_hw*,int ) ;
 int FUNC_36 (struct ieee80211_hw*,size_t*,int,int ,size_t*) ;
 scalar_t__ FUNC_37 (int) ;

__attribute__((used)) static void FUNC_38(struct ieee80211_hw *VAR_13)
{
 struct rtl_priv *VAR_14 = FUNC_24(VAR_13);
 struct rtl_pci *VAR_15 = FUNC_22(FUNC_23(VAR_13));
 int VAR_16 = VAR_12;
 struct ieee80211_rx_status VAR_17 = { 0 };
 unsigned int VAR_18 = VAR_15->rxringcount;
 u8 VAR_19;
 u8 VAR_20;
 bool VAR_21 = 0;
 u8 VAR_22 = 0;
 unsigned int VAR_23 = 0;
 struct rtl_stats VAR_24 = {
  .signal = 0,
  .rate = 0,
 };


 while (VAR_18--) {
  struct ieee80211_hdr *VAR_25;
  __le16 VAR_26;
  u16 VAR_27;

  struct rtl_rx_buffer_desc *VAR_28 = ((void*)0);

  struct rtl_rx_desc *VAR_29 = ((void*)0);

  struct sk_buff *VAR_30 = VAR_15->rx_ring[VAR_16].rx_buf[
          VAR_15->rx_ring[VAR_16].idx];
  struct sk_buff *VAR_31;

  if (VAR_14->use_new_trx_flow) {
   if (VAR_23 == 0)
    VAR_23 =
    VAR_14->cfg->ops->rx_desc_buff_remained_cnt(VAR_13,
              VAR_22);
   if (VAR_23 == 0)
    return;
   VAR_28 = &VAR_15->rx_ring[VAR_16].buffer_desc[
    VAR_15->rx_ring[VAR_16].idx];
   VAR_29 = (struct rtl_rx_desc *)VAR_30->data;
  } else {
   VAR_29 = &VAR_15->rx_ring[VAR_16].desc[
    VAR_15->rx_ring[VAR_16].idx];

   VAR_19 = (u8)VAR_14->cfg->ops->get_desc(VAR_13, (u8 *)VAR_29,
             0,
             VAR_5);
   if (VAR_19)
    return;
  }





  FUNC_13(VAR_15->pdev, *((dma_addr_t *)VAR_30->cb),
     VAR_15->rxbuffersize, VAR_10);


  VAR_31 = FUNC_4(VAR_15->rxbuffersize);
  if (FUNC_37(!VAR_31))
   goto no_new;
  FUNC_12(&VAR_17, 0, sizeof(VAR_17));
  VAR_14->cfg->ops->query_rx_desc(VAR_13, &VAR_24,
       &VAR_17, (u8 *)VAR_29, VAR_30);

  if (VAR_14->use_new_trx_flow)
   VAR_14->cfg->ops->rx_check_dma_ok(VAR_13,
          (u8 *)VAR_28,
          VAR_22);

  VAR_27 = VAR_14->cfg->ops->get_desc(VAR_13, (u8 *)VAR_29, 0,
        VAR_7);

  if (VAR_30->end - VAR_30->tail > VAR_27) {
   FUNC_28(VAR_30, VAR_27);
   if (VAR_14->use_new_trx_flow)
    FUNC_29(VAR_30, VAR_24.rx_drvinfo_size +
         VAR_24.rx_bufshift + 24);
   else
    FUNC_29(VAR_30, VAR_24.rx_drvinfo_size +
         VAR_24.rx_bufshift);
  } else {
   FUNC_1(VAR_14, VAR_2, VAR_3,
     "skb->end - skb->tail = %d, len is %d\n",
     VAR_30->end - VAR_30->tail, VAR_27);
   FUNC_5(VAR_30);
   goto new_trx_end;
  }

  if (VAR_24.packet_report_type == VAR_1) {
   FUNC_15(VAR_13, VAR_30);
   goto new_trx_end;
  }







  VAR_25 = FUNC_18(VAR_30);
  VAR_26 = FUNC_17(VAR_30);

  if (!VAR_24.crc && !VAR_24.hwerror && (VAR_30->len > VAR_4)) {
   FUNC_11(FUNC_0(VAR_30), &VAR_17,
          sizeof(VAR_17));

   if (FUNC_9(VAR_25->addr1)) {
    ;
   } else if (FUNC_10(VAR_25->addr1)) {
    ;
   } else {
    VAR_21 = 1;
    VAR_14->stats.rxbytesunicast += VAR_30->len;
   }
   FUNC_19(VAR_13, VAR_30, 0, 1);

   if (FUNC_7(VAR_26)) {
    VAR_14->cfg->ops->led_control(VAR_13, VAR_8);
    if (VAR_21)
     VAR_14->link_info.num_rx_inperiod++;
   }

   FUNC_16(VAR_13, VAR_30);


   FUNC_14(VAR_13, VAR_30);
   FUNC_21(VAR_13, (void *)VAR_30->data, VAR_30->len);

   FUNC_26(VAR_13, (void *)VAR_30->data, VAR_30->len);
   FUNC_25(VAR_13, (void *)VAR_30->data, VAR_30->len);
   if (VAR_14->mac80211.opmode == VAR_9 &&
       VAR_14->rtlhal.current_bandtype == VAR_0 &&
       (FUNC_6(VAR_26) ||
        FUNC_8(VAR_26))) {
    FUNC_5(VAR_30);
   } else {
    FUNC_3(VAR_13, VAR_30, VAR_17);
   }
  } else {

   FUNC_5(VAR_30);
  }
new_trx_end:
  if (VAR_14->use_new_trx_flow) {
   VAR_15->rx_ring[VAR_22].next_rx_rp += 1;
   VAR_15->rx_ring[VAR_22].next_rx_rp %=
     VAR_11;

   VAR_23--;
   FUNC_27(VAR_14, 0x3B4,
           VAR_15->rx_ring[VAR_22].next_rx_rp);
  }
  if (((VAR_14->link_info.num_rx_inperiod +
        VAR_14->link_info.num_tx_inperiod) > 8) ||
        VAR_14->link_info.num_rx_inperiod > 2)
   FUNC_20(VAR_13);
  VAR_30 = VAR_31;
no_new:
  if (VAR_14->use_new_trx_flow) {
   FUNC_2(VAR_13, VAR_30, (u8 *)VAR_28,
       VAR_16,
       VAR_15->rx_ring[VAR_16].idx);
  } else {
   FUNC_2(VAR_13, VAR_30, (u8 *)VAR_29,
       VAR_16,
       VAR_15->rx_ring[VAR_16].idx);
   if (VAR_15->rx_ring[VAR_16].idx ==
       VAR_15->rxringcount - 1)
    VAR_14->cfg->ops->set_desc(VAR_13, (u8 *)VAR_29,
           0,
           VAR_6,
           (u8 *)&VAR_20);
  }
  VAR_15->rx_ring[VAR_16].idx =
    (VAR_15->rx_ring[VAR_16].idx + 1) %
    VAR_15->rxringcount;
 }
}
