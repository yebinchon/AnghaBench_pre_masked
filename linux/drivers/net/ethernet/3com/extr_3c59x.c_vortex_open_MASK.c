
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vortex_private {int rx_ring_dma; struct sk_buff** rx_skbuff; TYPE_1__* rx_ring; int gendev; scalar_t__ full_bus_master_rx; } ;
struct sk_buff {int data; } ;
struct net_device {int irq; int name; } ;
struct boom_rx_desc {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {void* next; void* addr; void* length; scalar_t__ status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_0 (struct net_device*,scalar_t__,int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,int,int ) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int FUNC_5 (int,struct net_device*) ;
 struct vortex_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (int,int ,int ,int ,struct net_device*) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static int
FUNC_13(struct net_device *VAR_10)
{
 struct vortex_private *VAR_11 = FUNC_6(VAR_10);
 int VAR_12;
 int VAR_13;
 dma_addr_t VAR_14;


 if ((VAR_13 = FUNC_10(VAR_10->irq, VAR_8, VAR_3, VAR_10->name, VAR_10))) {
  FUNC_9("%s: Could not reserve IRQ %d\n", VAR_10->name, VAR_10->irq);
  goto err;
 }

 if (VAR_11->full_bus_master_rx) {
  if (VAR_9 > 2)
   FUNC_7("%s:  Filling in the Rx ring.\n", VAR_10->name);
  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   struct sk_buff *VAR_15;
   VAR_11->rx_ring[VAR_12].next = FUNC_1(VAR_11->rx_ring_dma + sizeof(struct boom_rx_desc) * (VAR_12+1));
   VAR_11->rx_ring[VAR_12].status = 0;
   VAR_11->rx_ring[VAR_12].length = FUNC_1(VAR_6 | VAR_4);

   VAR_15 = FUNC_0(VAR_10, VAR_6 + VAR_5,
       VAR_2);
   VAR_11->rx_skbuff[VAR_12] = VAR_15;
   if (VAR_15 == ((void*)0))
    break;

   FUNC_11(VAR_15, VAR_5);
   VAR_14 = FUNC_3(VAR_11->gendev, VAR_15->data,
          VAR_6, VAR_0);
   if (FUNC_4(VAR_11->gendev, VAR_14))
    break;
   VAR_11->rx_ring[VAR_12].addr = FUNC_1(VAR_14);
  }
  if (VAR_12 != VAR_7) {
   FUNC_8("%s: no memory for rx ring\n", VAR_10->name);
   VAR_13 = -VAR_1;
   goto err_free_skb;
  }

  VAR_11->rx_ring[VAR_12-1].next = FUNC_1(VAR_11->rx_ring_dma);
 }

 VAR_13 = FUNC_12(VAR_10);
 if (!VAR_13)
  goto out;

err_free_skb:
 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  if (VAR_11->rx_skbuff[VAR_12]) {
   FUNC_2(VAR_11->rx_skbuff[VAR_12]);
   VAR_11->rx_skbuff[VAR_12] = ((void*)0);
  }
 }
 FUNC_5(VAR_10->irq, VAR_10);
err:
 if (VAR_9 > 1)
  FUNC_9("%s: vortex_open() fails: returning %d\n", VAR_10->name, VAR_13);
out:
 return VAR_13;
}
