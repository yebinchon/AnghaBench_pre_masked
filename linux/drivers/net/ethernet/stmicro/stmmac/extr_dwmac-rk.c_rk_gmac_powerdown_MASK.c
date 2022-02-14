
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_priv_data {scalar_t__ integrated_phy; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (struct rk_priv_data*,int) ;
 int FUNC_1 (struct rk_priv_data*,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct rk_priv_data*) ;

__attribute__((used)) static void FUNC_5(struct rk_priv_data *VAR_0)
{
 struct device *VAR_1 = &VAR_0->pdev->dev;

 if (VAR_0->integrated_phy)
  FUNC_4(VAR_0);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);

 FUNC_1(VAR_0, 0);
 FUNC_0(VAR_0, 0);
}
