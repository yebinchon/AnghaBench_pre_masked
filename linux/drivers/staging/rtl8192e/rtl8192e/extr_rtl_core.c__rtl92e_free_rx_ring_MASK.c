
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ cb; } ;
struct r8192_priv {int rxringcount; int ** rx_ring; int * rx_ring_dma; int pdev; int rxbuffersize; struct sk_buff*** rx_buf; } ;
struct net_device {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int,int *,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct r8192_priv *VAR_3 = FUNC_3(VAR_2);
 int VAR_4, VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0;
      VAR_5++) {
  for (VAR_4 = 0; VAR_4 < VAR_3->rxringcount; VAR_4++) {
   struct sk_buff *VAR_6 = VAR_3->rx_buf[VAR_5][VAR_4];

   if (!VAR_6)
    continue;

   FUNC_2(VAR_3->pdev,
    *((dma_addr_t *)VAR_6->cb),
    VAR_3->rxbuffersize, VAR_1);
   FUNC_0(VAR_6);
  }

  FUNC_1(VAR_3->pdev,
   sizeof(*VAR_3->rx_ring[VAR_5]) *
   VAR_3->rxringcount,
   VAR_3->rx_ring[VAR_5],
   VAR_3->rx_ring_dma[VAR_5]);
  VAR_3->rx_ring[VAR_5] = ((void*)0);
 }
}
