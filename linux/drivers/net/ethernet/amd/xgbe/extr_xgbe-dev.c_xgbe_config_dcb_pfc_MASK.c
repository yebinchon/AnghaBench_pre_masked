
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* enable_rx ) (struct xgbe_prv_data*) ;int (* disable_rx ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {int netdev; TYPE_1__ hw_if; int dev_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_7(struct xgbe_prv_data *VAR_1)
{
 if (!FUNC_4(VAR_0, &VAR_1->dev_state)) {

  FUNC_1(VAR_1->netdev);


  VAR_1->hw_if.disable_rx(VAR_1);
 }

 FUNC_6(VAR_1);
 FUNC_5(VAR_1);

 if (!FUNC_4(VAR_0, &VAR_1->dev_state)) {

  VAR_1->hw_if.enable_rx(VAR_1);


  FUNC_0(VAR_1->netdev);
 }
}
