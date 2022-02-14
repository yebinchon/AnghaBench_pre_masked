
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; int protocol; } ;
struct TYPE_3__ {short rx_bytes; int rx_packets; int rx_errors; int rx_length_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct epic_private {int cur_rx; int dirty_rx; TYPE_2__* rx_ring; int rx_buf_sz; int pci_dev; struct sk_buff** rx_skbuff; } ;
struct TYPE_4__ {int rxstatus; int bufaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 void* FUNC_1 (struct net_device*,short) ;
 int FUNC_2 (struct net_device*,char*,int,...) ;
 int FUNC_3 (struct net_device*,char*,int,short) ;
 struct epic_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,char*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ,int ,int ) ;
 short VAR_5 ;
 int FUNC_11 (struct sk_buff*,int ,short) ;
 int FUNC_12 (struct sk_buff*,short) ;
 int FUNC_13 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_14(struct net_device *VAR_6, int VAR_7)
{
 struct epic_private *VAR_8 = FUNC_4(VAR_6);
 int VAR_9 = VAR_8->cur_rx % VAR_3;
 int VAR_10 = VAR_8->dirty_rx + VAR_3 - VAR_8->cur_rx;
 int VAR_11 = 0;

 if (VAR_4 > 4)
  FUNC_2(VAR_6, " In epic_rx(), entry %d %8.8x.\n", VAR_9,
      VAR_8->rx_ring[VAR_9].rxstatus);

 if (VAR_10 > VAR_7)
  VAR_10 = VAR_7;


 while ((VAR_8->rx_ring[VAR_9].rxstatus & VAR_0) == 0) {
  int VAR_12 = VAR_8->rx_ring[VAR_9].rxstatus;

  if (VAR_4 > 4)
   FUNC_2(VAR_6, "  epic_rx() status was %8.8x.\n",
       VAR_12);
  if (--VAR_10 < 0)
   break;
  if (VAR_12 & 0x2006) {
   if (VAR_4 > 2)
    FUNC_2(VAR_6, "epic_rx() error status was %8.8x.\n",
        VAR_12);
   if (VAR_12 & 0x2000) {
    FUNC_5(VAR_6, "Oversized Ethernet frame spanned multiple buffers, status %4.4x!\n",
         VAR_12);
    VAR_6->stats.rx_length_errors++;
   } else if (VAR_12 & 0x0006)

    VAR_6->stats.rx_errors++;
  } else {


   short VAR_13 = (VAR_12 >> 16) - 4;
   struct sk_buff *VAR_14;

   if (VAR_13 > VAR_2 - 4) {
    FUNC_3(VAR_6, "Oversized Ethernet frame, status %x %d bytes.\n",
        VAR_12, VAR_13);
    VAR_13 = 1514;
   }


   if (VAR_13 < VAR_5 &&
       (VAR_14 = FUNC_1(VAR_6, VAR_13 + 2)) != ((void*)0)) {
    FUNC_13(VAR_14, 2);
    FUNC_7(VAR_8->pci_dev,
           VAR_8->rx_ring[VAR_9].bufaddr,
           VAR_8->rx_buf_sz,
           VAR_1);
    FUNC_11(VAR_14, VAR_8->rx_skbuff[VAR_9]->data, VAR_13);
    FUNC_12(VAR_14, VAR_13);
    FUNC_8(VAR_8->pci_dev,
              VAR_8->rx_ring[VAR_9].bufaddr,
              VAR_8->rx_buf_sz,
              VAR_1);
   } else {
    FUNC_10(VAR_8->pci_dev,
     VAR_8->rx_ring[VAR_9].bufaddr,
     VAR_8->rx_buf_sz, VAR_1);
    FUNC_12(VAR_14 = VAR_8->rx_skbuff[VAR_9], VAR_13);
    VAR_8->rx_skbuff[VAR_9] = ((void*)0);
   }
   VAR_14->protocol = FUNC_0(VAR_14, VAR_6);
   FUNC_6(VAR_14);
   VAR_6->stats.rx_packets++;
   VAR_6->stats.rx_bytes += VAR_13;
  }
  VAR_11++;
  VAR_9 = (++VAR_8->cur_rx) % VAR_3;
 }


 for (; VAR_8->cur_rx - VAR_8->dirty_rx > 0; VAR_8->dirty_rx++) {
  VAR_9 = VAR_8->dirty_rx % VAR_3;
  if (VAR_8->rx_skbuff[VAR_9] == ((void*)0)) {
   struct sk_buff *VAR_15;
   VAR_15 = VAR_8->rx_skbuff[VAR_9] = FUNC_1(VAR_6, VAR_8->rx_buf_sz + 2);
   if (VAR_15 == ((void*)0))
    break;
   FUNC_13(VAR_15, 2);
   VAR_8->rx_ring[VAR_9].bufaddr = FUNC_9(VAR_8->pci_dev,
    VAR_15->data, VAR_8->rx_buf_sz, VAR_1);
   VAR_11++;
  }

  VAR_8->rx_ring[VAR_9].rxstatus = VAR_0;
 }
 return VAR_11;
}
