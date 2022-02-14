
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sky2_port {unsigned int rx_pending; TYPE_1__* hw; struct rx_ring_info* rx_ring; scalar_t__ rx_le; } ;
struct rx_ring_info {int * skb; } ;
struct TYPE_2__ {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int ,struct rx_ring_info*) ;

__attribute__((used)) static void FUNC_3(struct sky2_port *VAR_1)
{
 unsigned VAR_2;

 if (VAR_1->rx_le)
  FUNC_1(VAR_1->rx_le, 0, VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_1->rx_pending; VAR_2++) {
  struct rx_ring_info *VAR_3 = VAR_1->rx_ring + VAR_2;

  if (VAR_3->skb) {
   FUNC_2(VAR_1->hw->pdev, VAR_3);
   FUNC_0(VAR_3->skb);
   VAR_3->skb = ((void*)0);
  }
 }
}
