
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int ip_summed; int protocol; int data; } ;
struct pci_dev {int dev; } ;
struct pch_gbe_rx_ring {unsigned int next_to_clean; unsigned int count; struct pch_gbe_buffer* buffer_info; } ;
struct pch_gbe_rx_desc {scalar_t__ gbec_status; int tcp_ip_status; int rx_words_eob; int dma_status; } ;
struct pch_gbe_buffer {int mapped; int rx_buffer; int length; int dma; struct sk_buff* skb; } ;
struct TYPE_2__ {int multicast; int rx_packets; int rx_bytes; int rx_crc_errors; int rx_frame_errors; } ;
struct pch_gbe_adapter {int napi; TYPE_1__ stats; struct pci_dev* pdev; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int VAR_10 ;
 struct pch_gbe_rx_desc* FUNC_0 (struct pch_gbe_rx_ring,unsigned int) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct net_device*,char*,unsigned int,int,...) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (struct pch_gbe_adapter*,struct pch_gbe_rx_ring*,unsigned int) ;
 int FUNC_8 (struct pch_gbe_adapter*,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static bool
FUNC_11(struct pch_gbe_adapter *VAR_11,
   struct pch_gbe_rx_ring *VAR_12,
   int *VAR_13, int VAR_14)
{
 struct net_device *VAR_15 = VAR_11->netdev;
 struct pci_dev *VAR_16 = VAR_11->pdev;
 struct pch_gbe_buffer *VAR_17;
 struct pch_gbe_rx_desc *VAR_18;
 u32 VAR_19;
 unsigned int VAR_20;
 unsigned int VAR_21 = 0;
 bool VAR_22 = 0;
 struct sk_buff *VAR_23;
 u8 VAR_24;
 u16 VAR_25;
 u32 VAR_26;

 VAR_20 = VAR_12->next_to_clean;

 while (*VAR_13 < VAR_14) {

  VAR_18 = FUNC_0(*VAR_12, VAR_20);
  if (VAR_18->gbec_status == VAR_3)
   break;
  VAR_22 = 1;
  VAR_21++;

  VAR_24 = VAR_18->dma_status;
  VAR_25 = VAR_18->gbec_status;
  VAR_26 = VAR_18->tcp_ip_status;
  VAR_18->gbec_status = VAR_3;
  VAR_17 = &VAR_12->buffer_info[VAR_20];
  VAR_23 = VAR_17->skb;
  VAR_17->skb = ((void*)0);


  FUNC_1(&VAR_16->dev, VAR_17->dma,
       VAR_17->length, VAR_2);
  VAR_17->mapped = 0;

  FUNC_5(VAR_15,
      "RxDecNo = 0x%04x  Status[DMA:0x%02x GBE:0x%04x TCP:0x%08x]  BufInf = 0x%p\n",
      VAR_20, VAR_24, VAR_25, VAR_26,
      VAR_17);

  if (FUNC_10(VAR_25 & VAR_9)) {
   VAR_11->stats.rx_frame_errors++;
   FUNC_6(VAR_15, "Receive Not Octal Error\n");
  } else if (FUNC_10(VAR_25 &
    VAR_8)) {
   VAR_11->stats.rx_frame_errors++;
   FUNC_6(VAR_15, "Receive Nibble Error\n");
  } else if (FUNC_10(VAR_25 &
    VAR_6)) {
   VAR_11->stats.rx_crc_errors++;
   FUNC_6(VAR_15, "Receive CRC Error\n");
  } else {


   VAR_19 = (VAR_18->rx_words_eob) - 3 - VAR_4;
   if (VAR_18->rx_words_eob & 0x02)
    VAR_19 = VAR_19 - 4;




   FUNC_3(VAR_23->data, VAR_17->rx_buffer, VAR_19);


   VAR_11->stats.rx_bytes += VAR_19;
   VAR_11->stats.rx_packets++;
   if ((VAR_25 & VAR_7))
    VAR_11->stats.multicast++;

   FUNC_9(VAR_23, VAR_19);

   FUNC_8(VAR_11, VAR_23);

   VAR_23->protocol = FUNC_2(VAR_23, VAR_15);
   if (VAR_26 & VAR_5)
    VAR_23->ip_summed = VAR_1;
   else
    VAR_23->ip_summed = VAR_0;

   FUNC_4(&VAR_11->napi, VAR_23);
   (*VAR_13)++;
   FUNC_5(VAR_15,
       "Receive skb->ip_summed: %d length: %d\n",
       VAR_23->ip_summed, VAR_19);
  }

  if (FUNC_10(VAR_21 >= VAR_10)) {
   FUNC_7(VAR_11, VAR_12,
       VAR_21);
   VAR_21 = 0;
  }
  if (++VAR_20 == VAR_12->count)
   VAR_20 = 0;
 }
 VAR_12->next_to_clean = VAR_20;
 if (VAR_21)
  FUNC_7(VAR_11, VAR_12, VAR_21);
 return VAR_22;
}
