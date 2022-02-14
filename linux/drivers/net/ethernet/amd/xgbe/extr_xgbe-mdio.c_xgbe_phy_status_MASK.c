
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ autoneg; scalar_t__ link; } ;
struct TYPE_4__ {scalar_t__ (* link_status ) (struct xgbe_prv_data*,int*) ;} ;
struct TYPE_5__ {TYPE_1__ phy_impl; } ;
struct xgbe_prv_data {int netdev; int dev_state; TYPE_3__ phy; TYPE_2__ phy_if; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct xgbe_prv_data*,int*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (struct xgbe_prv_data*) ;
 int FUNC_8 (struct xgbe_prv_data*) ;
 int FUNC_9 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_10(struct xgbe_prv_data *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 if (FUNC_4(VAR_1, &VAR_3->dev_state)) {
  FUNC_1(VAR_3->netdev);

  VAR_3->phy.link = 0;
  goto adjust_link;
 }

 VAR_4 = (VAR_3->phy.autoneg == VAR_0);

 VAR_3->phy.link = VAR_3->phy_if.phy_impl.link_status(VAR_3,
            &VAR_5);
 if (VAR_5) {
  FUNC_8(VAR_3);
  return;
 }

 if (VAR_3->phy.link) {
  if (VAR_4 && !FUNC_7(VAR_3)) {
   FUNC_5(VAR_3);
   return;
  }

  FUNC_9(VAR_3);

  if (FUNC_4(VAR_2, &VAR_3->dev_state))
   FUNC_0(VAR_2, &VAR_3->dev_state);

  FUNC_2(VAR_3->netdev);
 } else {
  if (FUNC_4(VAR_2, &VAR_3->dev_state)) {
   FUNC_5(VAR_3);

   if (VAR_4)
    return;
  }

  FUNC_9(VAR_3);

  FUNC_1(VAR_3->netdev);
 }

adjust_link:
 FUNC_6(VAR_3);
}
