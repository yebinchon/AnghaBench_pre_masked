
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int protocol; scalar_t__ len; scalar_t__ data; } ;
struct pcnet32_rx_head {int base; int msg_length; int status; } ;
struct pcnet32_private {int * rx_dma_addr; int pci_dev; struct sk_buff** rx_skbuff; } ;
struct TYPE_2__ {int rx_packets; int rx_bytes; int rx_dropped; int rx_errors; int rx_fifo_errors; int rx_crc_errors; int rx_over_errors; int rx_frame_errors; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (struct net_device*,scalar_t__) ;
 int FUNC_6 (struct pcnet32_private*,int ,struct net_device*,char*,...) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,short,int ) ;
 int FUNC_10 (int ,int ,short,int ) ;
 int FUNC_11 (int ,scalar_t__,short,int ) ;
 int FUNC_12 (int ,int ,short,int ) ;
 short VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (struct sk_buff*,unsigned char*,short) ;
 int FUNC_14 (struct sk_buff*,short) ;
 int FUNC_15 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static void FUNC_17(struct net_device *VAR_7,
        struct pcnet32_private *VAR_8,
        struct pcnet32_rx_head *VAR_9,
        int VAR_10)
{
 int VAR_11 = (short)FUNC_3(VAR_9->status) >> 8;
 int VAR_12 = 0;
 struct sk_buff *VAR_13;
 short VAR_14;

 if (VAR_11 != 0x03) {






  if (VAR_11 & 0x01)
   VAR_7->stats.rx_errors++;
  if (VAR_11 & 0x20)
   VAR_7->stats.rx_frame_errors++;
  if (VAR_11 & 0x10)
   VAR_7->stats.rx_over_errors++;
  if (VAR_11 & 0x08)
   VAR_7->stats.rx_crc_errors++;
  if (VAR_11 & 0x04)
   VAR_7->stats.rx_fifo_errors++;
  return;
 }

 VAR_14 = (FUNC_4(VAR_9->msg_length) & 0xfff) - 4;


 if (FUNC_16(VAR_14 > VAR_2)) {
  FUNC_6(VAR_8, VAR_4, VAR_7, "Impossible packet size %d!\n",
     VAR_14);
  VAR_7->stats.rx_errors++;
  return;
 }
 if (VAR_14 < 60) {
  FUNC_6(VAR_8, VAR_6, VAR_7, "Runt packet!\n");
  VAR_7->stats.rx_errors++;
  return;
 }

 if (VAR_14 > VAR_5) {
  struct sk_buff *VAR_15;
  dma_addr_t VAR_16;

  VAR_15 = FUNC_5(VAR_7, VAR_3);




  if (VAR_15) {
   FUNC_15(VAR_15, VAR_0);
   VAR_16 = FUNC_11(VAR_8->pci_dev,
            VAR_15->data,
            VAR_2,
            VAR_1);
   if (FUNC_8(VAR_8->pci_dev, VAR_16)) {
    FUNC_6(VAR_8, VAR_6, VAR_7,
       "DMA mapping error.\n");
    FUNC_1(VAR_15);
    VAR_13 = ((void*)0);
   } else {
    VAR_13 = VAR_8->rx_skbuff[VAR_10];
    FUNC_12(VAR_8->pci_dev,
       VAR_8->rx_dma_addr[VAR_10],
       VAR_2,
       VAR_1);
    FUNC_14(VAR_13, VAR_14);
    VAR_8->rx_skbuff[VAR_10] = VAR_15;
    VAR_8->rx_dma_addr[VAR_10] = VAR_16;
    VAR_9->base = FUNC_0(VAR_16);
    VAR_12 = 1;
   }
  } else
   VAR_13 = ((void*)0);
 } else
  VAR_13 = FUNC_5(VAR_7, VAR_14 + VAR_0);

 if (VAR_13 == ((void*)0)) {
  VAR_7->stats.rx_dropped++;
  return;
 }
 if (!VAR_12) {
  FUNC_15(VAR_13, VAR_0);
  FUNC_14(VAR_13, VAR_14);
  FUNC_9(VAR_8->pci_dev,
         VAR_8->rx_dma_addr[VAR_10],
         VAR_14,
         VAR_1);
  FUNC_13(VAR_13,
     (unsigned char *)(VAR_8->rx_skbuff[VAR_10]->data),
     VAR_14);
  FUNC_10(VAR_8->pci_dev,
            VAR_8->rx_dma_addr[VAR_10],
            VAR_14,
            VAR_1);
 }
 VAR_7->stats.rx_bytes += VAR_13->len;
 VAR_13->protocol = FUNC_2(VAR_13, VAR_7);
 FUNC_7(VAR_13);
 VAR_7->stats.rx_packets++;
}
