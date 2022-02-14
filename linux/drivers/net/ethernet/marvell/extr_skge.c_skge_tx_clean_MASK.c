
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct skge_tx_desc {int control; } ;
struct TYPE_4__ {struct skge_element* to_clean; struct skge_element* to_use; } ;
struct skge_port {TYPE_2__ tx_ring; TYPE_1__* hw; } ;
struct skge_element {int skb; struct skge_tx_desc* desc; struct skge_element* next; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int pdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct skge_port* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct skge_element*,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct skge_port *VAR_2 = FUNC_1(VAR_1);
 struct skge_element *VAR_3;

 for (VAR_3 = VAR_2->tx_ring.to_clean; VAR_3 != VAR_2->tx_ring.to_use; VAR_3 = VAR_3->next) {
  struct skge_tx_desc *VAR_4 = VAR_3->desc;

  FUNC_3(VAR_2->hw->pdev, VAR_3, VAR_4->control);

  if (VAR_4->control & VAR_0)
   FUNC_0(VAR_3->skb);
  VAR_4->control = 0;
 }

 FUNC_2(VAR_1);
 VAR_2->tx_ring.to_clean = VAR_3;
}
