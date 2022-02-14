
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int phy_platdev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct xgbe_prv_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct xgbe_prv_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1);

 FUNC_0(VAR_1->phy_platdev);

 FUNC_3(VAR_1);

 return 0;
}
