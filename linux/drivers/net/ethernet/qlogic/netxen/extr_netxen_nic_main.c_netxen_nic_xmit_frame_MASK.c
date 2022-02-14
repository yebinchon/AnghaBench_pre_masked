
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct sk_buff {scalar_t__ len; } ;
struct pci_dev {int dummy; } ;
struct nx_host_tx_ring {size_t num_desc; size_t producer; struct netxen_cmd_buffer* cmd_buf_arr; struct cmd_desc_type0* desc_head; } ;
struct netxen_skb_frag {int dma; int length; } ;
struct netxen_cmd_buffer {int frag_count; struct netxen_skb_frag* frag_array; struct sk_buff* skb; } ;
struct TYPE_3__ {int txdropped; int xmitcalled; int txbytes; } ;
struct netxen_adapter {TYPE_1__ stats; int portnum; struct pci_dev* pdev; struct nx_host_tx_ring* tx_ring; } ;
struct net_device {int dummy; } ;
struct cmd_desc_type0 {void* addr_buffer4; void* addr_buffer3; void* addr_buffer2; void* addr_buffer1; int * buffer_length; } ;
typedef int skb_frag_t ;
typedef int netdev_tx_t ;
struct TYPE_4__ {int nr_frags; int * frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 void* FUNC_4 (size_t,size_t) ;
 struct netxen_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct pci_dev*,struct sk_buff*,struct netxen_cmd_buffer*) ;
 int FUNC_10 (struct netxen_adapter*,struct nx_host_tx_ring*) ;
 int FUNC_11 (struct cmd_desc_type0*,int,scalar_t__) ;
 int FUNC_12 (struct cmd_desc_type0*,int ) ;
 int FUNC_13 (struct net_device*,struct nx_host_tx_ring*,struct cmd_desc_type0*,struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct nx_host_tx_ring*) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (struct sk_buff*) ;
 TYPE_2__* FUNC_17 (struct sk_buff*) ;
 int FUNC_18 () ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static netdev_tx_t
FUNC_20(struct sk_buff *VAR_4, struct net_device *VAR_5)
{
 struct netxen_adapter *VAR_6 = FUNC_5(VAR_5);
 struct nx_host_tx_ring *VAR_7 = VAR_6->tx_ring;
 struct netxen_cmd_buffer *VAR_8;
 struct netxen_skb_frag *VAR_9;
 struct cmd_desc_type0 *VAR_10, *VAR_11;
 struct pci_dev *VAR_12;
 int VAR_13, VAR_14;
 int VAR_15 = 0;
 skb_frag_t *VAR_16;

 u32 VAR_17;
 int VAR_18;
 u32 VAR_19 = VAR_7->num_desc;

 VAR_18 = FUNC_17(VAR_4)->nr_frags + 1;




 if (!FUNC_16(VAR_4) && VAR_18 > VAR_2) {

  for (VAR_13 = 0; VAR_13 < (VAR_18 - VAR_2); VAR_13++) {
   VAR_16 = &FUNC_17(VAR_4)->frags[VAR_13];
   VAR_15 += FUNC_15(VAR_16);
  }

  if (!FUNC_0(VAR_4, VAR_15))
   goto drop_packet;

  VAR_18 = 1 + FUNC_17(VAR_4)->nr_frags;
 }

 if (FUNC_19(FUNC_14(VAR_7) <= VAR_3)) {
  FUNC_7(VAR_5);
  FUNC_18();
  if (FUNC_14(VAR_7) > VAR_3)
   FUNC_6(VAR_5);
  else
   return VAR_0;
 }

 VAR_17 = VAR_7->producer;
 VAR_8 = &VAR_7->cmd_buf_arr[VAR_17];

 VAR_12 = VAR_6->pdev;

 if (FUNC_9(VAR_12, VAR_4, VAR_8))
  goto drop_packet;

 VAR_8->skb = VAR_4;
 VAR_8->frag_count = VAR_18;

 VAR_11 = VAR_10 = &VAR_7->desc_head[VAR_17];
 FUNC_8((u64 *)VAR_10);

 FUNC_11(VAR_11, VAR_18, VAR_4->len);
 FUNC_12(VAR_11, VAR_6->portnum);

 for (VAR_13 = 0; VAR_13 < VAR_18; VAR_13++) {

  VAR_14 = VAR_13 % 4;

  if ((VAR_14 == 0) && (VAR_13 > 0)) {

   VAR_17 = FUNC_4(VAR_17, VAR_19);
   VAR_10 = &VAR_7->desc_head[VAR_17];
   FUNC_8((u64 *)VAR_10);
   VAR_7->cmd_buf_arr[VAR_17].skb = ((void*)0);
  }

  VAR_9 = &VAR_8->frag_array[VAR_13];

  VAR_10->buffer_length[VAR_14] = FUNC_1(VAR_9->length);
  switch (VAR_14) {
  case 0:
   VAR_10->addr_buffer1 = FUNC_2(VAR_9->dma);
   break;
  case 1:
   VAR_10->addr_buffer2 = FUNC_2(VAR_9->dma);
   break;
  case 2:
   VAR_10->addr_buffer3 = FUNC_2(VAR_9->dma);
   break;
  case 3:
   VAR_10->addr_buffer4 = FUNC_2(VAR_9->dma);
   break;
  }
 }

 VAR_7->producer = FUNC_4(VAR_17, VAR_19);

 FUNC_13(VAR_5, VAR_7, VAR_11, VAR_4);

 VAR_6->stats.txbytes += VAR_4->len;
 VAR_6->stats.xmitcalled++;

 FUNC_10(VAR_6, VAR_7);

 return VAR_1;

drop_packet:
 VAR_6->stats.txdropped++;
 FUNC_3(VAR_4);
 return VAR_1;
}
