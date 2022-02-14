
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int start; } ;
struct TYPE_4__ {int start; } ;
struct skge_port {int port; int * mem; int dma; int mem_size; TYPE_2__ tx_ring; TYPE_1__ rx_ring; struct skge_hw* hw; int napi; int link_timer; int netdev; } ;
struct skge_hw {scalar_t__ phy_type; long intr_mask; int ports; TYPE_3__* pdev; int hw_lock; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int irq; } ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 int VAR_6 ;
 long VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int VAR_11 ;
 long VAR_12 ;
 long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_2 (int,int ) ;
 int VAR_17 ;
 long VAR_18 ;
 long VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 long VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,struct skge_hw*) ;
 int FUNC_5 (struct skge_port*) ;
 int VAR_25 ;
 scalar_t__ FUNC_6 (struct skge_hw*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 struct skge_port* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct skge_port*,int ,int ,char*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (TYPE_3__*,int ,int *,int ) ;
 long* VAR_26 ;
 int FUNC_16 (struct skge_port*,int ) ;
 int FUNC_17 (struct skge_hw*,int ) ;
 int FUNC_18 (struct skge_port*) ;
 int FUNC_19 (struct skge_hw*,int) ;
 int FUNC_20 (struct net_device*) ;
 int FUNC_21 (struct skge_hw*,int ,long) ;
 int FUNC_22 (struct skge_hw*,int ,long) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int * VAR_27 ;
 int FUNC_25 (struct skge_port*) ;

__attribute__((used)) static int FUNC_26(struct net_device *VAR_28)
{
 struct skge_port *VAR_29 = FUNC_9(VAR_28);
 struct skge_hw *VAR_30 = VAR_29->hw;
 int VAR_31 = VAR_29->port;

 if (!VAR_29->mem)
  return 0;

 FUNC_11(VAR_29, VAR_25, VAR_29->netdev, "disabling interface\n");

 FUNC_12(VAR_28);

 if (FUNC_6(VAR_30) && VAR_30->phy_type == VAR_16)
  FUNC_3(&VAR_29->link_timer);

 FUNC_8(&VAR_29->napi);
 FUNC_10(VAR_28);

 FUNC_23(&VAR_30->hw_lock);
 VAR_30->intr_mask &= ~VAR_26[VAR_31];
 FUNC_21(VAR_30, VAR_0, (VAR_30->ports == 1) ? 0 : VAR_30->intr_mask);
 FUNC_17(VAR_30, VAR_0);
 FUNC_24(&VAR_30->hw_lock);

 if (VAR_30->ports == 1)
  FUNC_4(VAR_30->pdev->irq, VAR_30);

 FUNC_22(VAR_29->hw, FUNC_2(VAR_29->port, VAR_6), VAR_5);
 if (FUNC_6(VAR_30))
  FUNC_5(VAR_29);
 else
  FUNC_25(VAR_29);


 FUNC_22(VAR_30, FUNC_0(VAR_27[VAR_31], VAR_8), VAR_2);
 FUNC_21(VAR_30, FUNC_1(VAR_27[VAR_31], VAR_11),
       VAR_13|VAR_12);



 FUNC_22(VAR_30, FUNC_2(VAR_31, VAR_17),
      VAR_19 | VAR_18 | VAR_22);


 FUNC_21(VAR_30, FUNC_2(VAR_31, VAR_20), 0L);
 FUNC_21(VAR_30, FUNC_2(VAR_31, VAR_21), 0L);


 FUNC_21(VAR_30, FUNC_0(VAR_27[VAR_31], VAR_8), VAR_1);
 FUNC_21(VAR_30, FUNC_1(VAR_27[VAR_31], VAR_11), VAR_13);


 FUNC_22(VAR_30, FUNC_1(VAR_31 == 0 ? VAR_9 : VAR_10, VAR_11), VAR_13);

 FUNC_19(VAR_30, VAR_31);

 if (FUNC_6(VAR_30)) {
  FUNC_22(VAR_30, FUNC_2(VAR_31, VAR_24), VAR_7);
  FUNC_22(VAR_30, FUNC_2(VAR_31, VAR_15), VAR_7);
 } else {
  FUNC_22(VAR_30, FUNC_2(VAR_31, VAR_14), VAR_3);
  FUNC_22(VAR_30, FUNC_2(VAR_31, VAR_23), VAR_3);
 }

 FUNC_16(VAR_29, VAR_4);

 FUNC_13(VAR_28);
 FUNC_20(VAR_28);
 FUNC_14(VAR_28);

 FUNC_18(VAR_29);

 FUNC_7(VAR_29->rx_ring.start);
 FUNC_7(VAR_29->tx_ring.start);
 FUNC_15(VAR_30->pdev, VAR_29->mem_size, VAR_29->mem, VAR_29->dma);
 VAR_29->mem = ((void*)0);
 return 0;
}
