
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbe_fcoe {int * ddp_pool; } ;
struct ixgbe_adapter {TYPE_1__* netdev; struct ixgbe_fcoe fcoe; } ;
struct TYPE_2__ {scalar_t__ fcoe_ddp_xid; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct ixgbe_adapter *VAR_0)
{
 struct ixgbe_fcoe *VAR_1 = &VAR_0->fcoe;

 VAR_0->netdev->fcoe_ddp_xid = 0;

 if (!VAR_1->ddp_pool)
  return;

 FUNC_0(VAR_1->ddp_pool);
 VAR_1->ddp_pool = ((void*)0);
}
