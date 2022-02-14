
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ixgbe_adapter {TYPE_2__** tx_ring; TYPE_1__** rx_ring; } ;
struct TYPE_4__ {scalar_t__ reg_idx; } ;
struct TYPE_3__ {scalar_t__ reg_idx; } ;


 scalar_t__ FUNC_0 (struct ixgbe_adapter*) ;
 scalar_t__ FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 scalar_t__ FUNC_3 (struct ixgbe_adapter*) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_adapter *VAR_0)
{

 VAR_0->rx_ring[0]->reg_idx = 0;
 VAR_0->tx_ring[0]->reg_idx = 0;
 if (FUNC_3(VAR_0))
  return;

 FUNC_2(VAR_0);
}
