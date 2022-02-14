
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ link; } ;
struct TYPE_4__ {int (* stop ) (struct xgbe_prv_data*) ;} ;
struct TYPE_5__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {scalar_t__ dev_irq; scalar_t__ an_irq; int netdev; TYPE_3__ phy; TYPE_2__ phy_if; int dev; scalar_t__ phy_started; } ;


 int FUNC_0 (int ,scalar_t__,struct xgbe_prv_data*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_6(struct xgbe_prv_data *VAR_1)
{
 FUNC_2(VAR_1, VAR_0, VAR_1->netdev, "stopping PHY\n");

 if (!VAR_1->phy_started)
  return;


 VAR_1->phy_started = 0;


 FUNC_4(VAR_1);

 if (VAR_1->dev_irq != VAR_1->an_irq)
  FUNC_0(VAR_1->dev, VAR_1->an_irq, VAR_1);

 VAR_1->phy_if.phy_impl.stop(VAR_1);

 VAR_1->phy.link = 0;
 FUNC_1(VAR_1->netdev);

 FUNC_5(VAR_1);
}
