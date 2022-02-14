
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; int encapsulation; int protocol; scalar_t__ data; } ;
struct qlcnic_skb_frag {int dma; int length; } ;
struct TYPE_6__ {int xmit_called; int tx_bytes; int xmit_off; } ;
struct qlcnic_host_tx_ring {size_t num_desc; size_t producer; TYPE_1__ tx_stats; struct qlcnic_cmd_buffer* cmd_buf_arr; struct cmd_desc_type0* desc_head; int txq; } ;
struct qlcnic_cmd_buffer {int frag_count; struct qlcnic_skb_frag* frag_array; struct sk_buff* skb; } ;
struct TYPE_7__ {int txdropped; int tx_dma_map_error; } ;
struct qlcnic_adapter {int flags; TYPE_2__ stats; scalar_t__ drv_mac_learn; int portnum; struct pci_dev* pdev; struct qlcnic_host_tx_ring* tx_ring; int mac_addr; int state; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct ethhdr {int h_source; } ;
struct cmd_desc_type0 {void* addr_buffer4; void* addr_buffer3; void* addr_buffer2; void* addr_buffer1; int * buffer_length; } ;
typedef int netdev_tx_t ;
struct TYPE_10__ {scalar_t__ protocol; } ;
struct TYPE_9__ {scalar_t__ nexthdr; } ;
struct TYPE_8__ {int nr_frags; int * frags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int ,int ) ;
 void* FUNC_5 (size_t,size_t) ;
 TYPE_5__* FUNC_6 (struct sk_buff*) ;
 TYPE_4__* FUNC_7 (struct sk_buff*) ;
 struct qlcnic_adapter* FUNC_8 (struct net_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct qlcnic_adapter*) ;
 scalar_t__ FUNC_15 (struct pci_dev*,struct sk_buff*,struct qlcnic_cmd_buffer*) ;
 int FUNC_16 (struct qlcnic_adapter*,struct cmd_desc_type0*,struct sk_buff*,struct qlcnic_host_tx_ring*) ;
 int FUNC_17 (struct cmd_desc_type0*,int,scalar_t__) ;
 int FUNC_18 (struct cmd_desc_type0*,int ) ;
 scalar_t__ FUNC_19 (struct qlcnic_host_tx_ring*) ;
 int FUNC_20 (struct qlcnic_adapter*,struct cmd_desc_type0*,struct sk_buff*,struct qlcnic_host_tx_ring*) ;
 int FUNC_21 (struct qlcnic_adapter*,struct cmd_desc_type0*,struct sk_buff*,struct qlcnic_host_tx_ring*) ;
 int FUNC_22 (struct pci_dev*,struct sk_buff*,struct qlcnic_cmd_buffer*) ;
 int FUNC_23 (struct qlcnic_host_tx_ring*) ;
 scalar_t__ FUNC_24 (int *) ;
 size_t FUNC_25 (struct sk_buff*) ;
 int FUNC_26 (struct sk_buff*) ;
 TYPE_3__* FUNC_27 (struct sk_buff*) ;
 int FUNC_28 () ;
 int FUNC_29 (int ,int *) ;
 scalar_t__ FUNC_30 (int) ;
 int FUNC_31 () ;

netdev_tx_t FUNC_32(struct sk_buff *VAR_9, struct net_device *VAR_10)
{
 struct qlcnic_adapter *VAR_11 = FUNC_8(VAR_10);
 struct qlcnic_host_tx_ring *VAR_12;
 struct qlcnic_cmd_buffer *VAR_13;
 struct qlcnic_skb_frag *VAR_14;
 struct cmd_desc_type0 *VAR_15, *VAR_16;
 struct pci_dev *VAR_17;
 struct ethhdr *VAR_18;
 int VAR_19, VAR_20, VAR_21, VAR_22 = 0;
 u32 VAR_23, VAR_24;
 u16 VAR_25;
 bool VAR_26 = 0;

 if (!FUNC_29(VAR_8, &VAR_11->state)) {
  FUNC_10(VAR_10);
  return VAR_3;
 }

 if (VAR_11->flags & VAR_5) {
  VAR_18 = (struct ethhdr *)VAR_9->data;
  if (!FUNC_4(VAR_18->h_source, VAR_11->mac_addr))
   goto drop_packet;
 }

 VAR_12 = &VAR_11->tx_ring[FUNC_25(VAR_9)];
 VAR_24 = VAR_12->num_desc;

 VAR_21 = FUNC_27(VAR_9)->nr_frags + 1;




 if (!FUNC_26(VAR_9) && VAR_21 > VAR_6) {
  for (VAR_19 = 0; VAR_19 < (VAR_21 - VAR_6); VAR_19++)
   VAR_22 += FUNC_24(&FUNC_27(VAR_9)->frags[VAR_19]);

  if (!FUNC_0(VAR_9, VAR_22))
   goto drop_packet;

  VAR_21 = 1 + FUNC_27(VAR_9)->nr_frags;
 }

 if (FUNC_30(FUNC_19(VAR_12) <= VAR_7)) {
  FUNC_11(VAR_12->txq);
  if (FUNC_19(VAR_12) > VAR_7) {
   FUNC_9(VAR_12->txq);
  } else {
   VAR_12->tx_stats.xmit_off++;
   return VAR_3;
  }
 }

 VAR_23 = VAR_12->producer;
 VAR_13 = &VAR_12->cmd_buf_arr[VAR_23];
 VAR_17 = VAR_11->pdev;
 VAR_16 = &VAR_12->desc_head[VAR_23];
 VAR_15 = &VAR_12->desc_head[VAR_23];
 FUNC_13((u64 *)VAR_15);

 if (FUNC_15(VAR_17, VAR_9, VAR_13)) {
  VAR_11->stats.tx_dma_map_error++;
  goto drop_packet;
 }

 VAR_13->skb = VAR_9;
 VAR_13->frag_count = VAR_21;

 FUNC_17(VAR_16, VAR_21, VAR_9->len);
 FUNC_18(VAR_16, VAR_11->portnum);

 for (VAR_19 = 0; VAR_19 < VAR_21; VAR_19++) {
  VAR_20 = VAR_19 % 4;

  if ((VAR_20 == 0) && (VAR_19 > 0)) {

   VAR_23 = FUNC_5(VAR_23, VAR_24);
   VAR_15 = &VAR_12->desc_head[VAR_23];
   FUNC_13((u64 *)VAR_15);
   VAR_12->cmd_buf_arr[VAR_23].skb = ((void*)0);
  }

  VAR_14 = &VAR_13->frag_array[VAR_19];
  VAR_15->buffer_length[VAR_20] = FUNC_1(VAR_14->length);
  switch (VAR_20) {
  case 0:
   VAR_15->addr_buffer1 = FUNC_2(VAR_14->dma);
   break;
  case 1:
   VAR_15->addr_buffer2 = FUNC_2(VAR_14->dma);
   break;
  case 2:
   VAR_15->addr_buffer3 = FUNC_2(VAR_14->dma);
   break;
  case 3:
   VAR_15->addr_buffer4 = FUNC_2(VAR_14->dma);
   break;
  }
 }

 VAR_12->producer = FUNC_5(VAR_23, VAR_24);
 FUNC_28();

 VAR_25 = FUNC_12(VAR_9->protocol);
 if (VAR_25 == VAR_0)
  VAR_26 = FUNC_6(VAR_9)->protocol == VAR_2;
 else if (VAR_25 == VAR_1)
  VAR_26 = FUNC_7(VAR_9)->nexthdr == VAR_2;


 if (!VAR_9->encapsulation || !VAR_26 ||
     !FUNC_14(VAR_11)) {
  if (FUNC_30(FUNC_21(VAR_11, VAR_16, VAR_9,
        VAR_12)))
   goto unwind_buff;
 } else {
  if (FUNC_30(FUNC_20(VAR_11, VAR_16,
       VAR_9, VAR_12)))
   goto unwind_buff;
 }

 if (VAR_11->drv_mac_learn)
  FUNC_16(VAR_11, VAR_16, VAR_9, VAR_12);

 VAR_12->tx_stats.tx_bytes += VAR_9->len;
 VAR_12->tx_stats.xmit_called++;


 FUNC_31();
 FUNC_23(VAR_12);

 return VAR_4;

unwind_buff:
 FUNC_22(VAR_17, VAR_9, VAR_13);
drop_packet:
 VAR_11->stats.txdropped++;
 FUNC_3(VAR_9);
 return VAR_4;
}
