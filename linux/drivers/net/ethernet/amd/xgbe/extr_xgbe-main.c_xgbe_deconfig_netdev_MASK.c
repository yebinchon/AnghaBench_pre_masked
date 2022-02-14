
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* phy_exit ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {TYPE_1__ phy_if; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;

void FUNC_5(struct xgbe_prv_data *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;

 FUNC_3(VAR_1);

 if (FUNC_0(VAR_0))
  FUNC_4(VAR_1);

 FUNC_2(VAR_2);

 VAR_1->phy_if.phy_exit(VAR_1);
}
