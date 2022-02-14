
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct smsc9420_pdata {int tx_ring_head; int tx_ring_tail; TYPE_2__* tx_ring; int dev; TYPE_1__* tx_buffers; int pdev; } ;
struct sk_buff {scalar_t__ len; int data; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;
typedef void* dma_addr_t ;
struct TYPE_4__ {int status; int length; void* buffer1; } ;
struct TYPE_3__ {int skb; int mapping; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct smsc9420_pdata* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct smsc9420_pdata*,int ,int ,char*) ;
 scalar_t__ FUNC_4 (int ,void*) ;
 void* FUNC_5 (int ,int ,scalar_t__,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct smsc9420_pdata*) ;
 int FUNC_10 (struct smsc9420_pdata*,int ,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 () ;

__attribute__((used)) static netdev_tx_t FUNC_13(struct sk_buff *VAR_10,
         struct net_device *VAR_11)
{
 struct smsc9420_pdata *VAR_12 = FUNC_1(VAR_11);
 dma_addr_t VAR_13;
 int VAR_14 = VAR_12->tx_ring_head;
 u32 VAR_15;
 bool VAR_16 =
  (((VAR_12->tx_ring_head + 2) % VAR_8) == VAR_12->tx_ring_tail);

 FUNC_8(VAR_11);

 FUNC_6();
 FUNC_0(VAR_12->tx_ring[VAR_14].status & VAR_3);
 FUNC_0(VAR_12->tx_buffers[VAR_14].skb);
 FUNC_0(VAR_12->tx_buffers[VAR_14].mapping);

 VAR_13 = FUNC_5(VAR_12->pdev, VAR_10->data,
     VAR_10->len, VAR_2);
 if (FUNC_4(VAR_12->pdev, VAR_13)) {
  FUNC_3(VAR_12, VAR_9, VAR_12->dev,
      "pci_map_single failed, dropping packet\n");
  return VAR_0;
 }

 VAR_12->tx_buffers[VAR_14].skb = VAR_10;
 VAR_12->tx_buffers[VAR_14].mapping = VAR_13;

 VAR_15 = (VAR_5 | ((u32)VAR_10->len & 0x7FF));
 if (FUNC_11(VAR_16)) {
  VAR_15 |= VAR_4;
  FUNC_2(VAR_12->dev);
 }


 if (FUNC_11(VAR_14 == (VAR_8 - 1)))
  VAR_15 |= VAR_6;

 VAR_12->tx_ring[VAR_14].buffer1 = VAR_13;
 VAR_12->tx_ring[VAR_14].length = VAR_15;
 FUNC_12();


 VAR_12->tx_ring_head = (VAR_12->tx_ring_head + 1) % VAR_8;


 VAR_12->tx_ring[VAR_14].status = VAR_3;
 FUNC_12();

 FUNC_7(VAR_10);


 FUNC_10(VAR_12, VAR_7, 1);
 FUNC_9(VAR_12);

 return VAR_1;
}
