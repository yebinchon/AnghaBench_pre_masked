
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_hw {int dummy; } ;
struct pch_gbe_adapter {int rx_ring; int tx_ring; int wake_up_evt; struct pch_gbe_hw hw; } ;
struct net_device {int dummy; } ;


 struct pch_gbe_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct pch_gbe_adapter*) ;
 int FUNC_2 (struct pch_gbe_adapter*,int ) ;
 int FUNC_3 (struct pch_gbe_adapter*,int ) ;
 int FUNC_4 (struct pch_gbe_hw*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct pch_gbe_adapter *VAR_1 = FUNC_0(VAR_0);
 struct pch_gbe_hw *VAR_2 = &VAR_1->hw;

 FUNC_1(VAR_1);
 if (!VAR_1->wake_up_evt)
  FUNC_4(VAR_2);
 FUNC_3(VAR_1, VAR_1->tx_ring);
 FUNC_2(VAR_1, VAR_1->rx_ring);
 return 0;
}
