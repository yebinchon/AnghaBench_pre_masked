
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_private {scalar_t__ mem; scalar_t__ rx_ring; struct fealnx_desc* cur_rx; scalar_t__ rx_ring_dma; } ;
struct net_device {int dummy; } ;
struct fealnx_desc {struct fealnx_desc* next_desc_logical; int status; scalar_t__ skbuff; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct netdev_private *VAR_4 = FUNC_2(VAR_3);
 struct fealnx_desc *VAR_5 = VAR_4->cur_rx;
 int VAR_6;

 FUNC_0(VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_5->skbuff)
   VAR_5->status = VAR_1;
  VAR_5 = VAR_5->next_desc_logical;
 }

 FUNC_1(VAR_4->rx_ring_dma + ((char*)VAR_4->cur_rx - (char*)VAR_4->rx_ring),
  VAR_4->mem + VAR_0);
}
