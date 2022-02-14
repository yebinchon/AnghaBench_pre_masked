
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {TYPE_1__* netdev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_1)
{
 if (VAR_1->netdev->features & VAR_0)
  FUNC_1(VAR_1);
 else
  FUNC_0(VAR_1);
}
