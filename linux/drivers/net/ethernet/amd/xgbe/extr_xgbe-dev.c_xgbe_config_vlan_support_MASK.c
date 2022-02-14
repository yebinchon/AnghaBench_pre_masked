
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {TYPE_1__* netdev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,int) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_6(struct xgbe_prv_data *VAR_5)
{

 FUNC_0(VAR_5, VAR_1, VAR_0, 0);
 FUNC_0(VAR_5, VAR_1, VAR_4, 1);


 FUNC_5(VAR_5);

 if (VAR_5->netdev->features & VAR_2)
  FUNC_3(VAR_5);
 else
  FUNC_1(VAR_5);

 if (VAR_5->netdev->features & VAR_3)
  FUNC_4(VAR_5);
 else
  FUNC_2(VAR_5);
}
