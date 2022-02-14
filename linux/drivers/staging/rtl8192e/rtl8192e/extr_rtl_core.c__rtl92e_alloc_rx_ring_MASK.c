
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; struct net_device* dev; } ;
struct rx_desc {int OWN; int EOR; int Length; int BufferAddress; } ;
struct r8192_priv {int rxringcount; int rxbuffersize; int pdev; struct sk_buff*** rx_buf; struct rx_desc** rx_ring; scalar_t__* rx_idx; int * rx_ring_dma; } ;
struct net_device {int dummy; } ;
typedef int dma_addr_t ;


 short VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct net_device*,char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 struct rx_desc* FUNC_5 (int ,int,int *) ;
 struct r8192_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static short FUNC_8(struct net_device *VAR_3)
{
 struct r8192_priv *VAR_4 = FUNC_6(VAR_3);
 struct rx_desc *VAR_5 = ((void*)0);
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_4->rx_ring[VAR_7] = FUNC_5(VAR_4->pdev,
           sizeof(*VAR_4->rx_ring[VAR_7]) * VAR_4->rxringcount,
           &VAR_4->rx_ring_dma[VAR_7]);
  if (!VAR_4->rx_ring[VAR_7] ||
      (unsigned long)VAR_4->rx_ring[VAR_7] & 0xFF) {
   FUNC_2(VAR_3, "Cannot allocate RX ring\n");
   return -VAR_0;
  }

  VAR_4->rx_idx[VAR_7] = 0;

  for (VAR_6 = 0; VAR_6 < VAR_4->rxringcount; VAR_6++) {
   struct sk_buff *VAR_8 = FUNC_0(VAR_4->rxbuffersize);
   dma_addr_t *VAR_9;

   VAR_5 = &VAR_4->rx_ring[VAR_7][VAR_6];
   if (!VAR_8)
    return 0;
   VAR_8->dev = VAR_3;
   VAR_4->rx_buf[VAR_7][VAR_6] = VAR_8;
   VAR_9 = (dma_addr_t *)VAR_8->cb;
   *VAR_9 = FUNC_4(VAR_4->pdev,
        FUNC_7(VAR_8),
        VAR_4->rxbuffersize,
        VAR_2);
   if (FUNC_3(VAR_4->pdev, *VAR_9)) {
    FUNC_1(VAR_8);
    return -1;
   }
   VAR_5->BufferAddress = *VAR_9;

   VAR_5->Length = VAR_4->rxbuffersize;
   VAR_5->OWN = 1;
  }

  if (VAR_5)
   VAR_5->EOR = 1;
 }
 return 0;
}
