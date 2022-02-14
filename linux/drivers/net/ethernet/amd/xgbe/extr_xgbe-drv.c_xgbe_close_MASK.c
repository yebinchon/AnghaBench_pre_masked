
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dev_state; int dev_workqueue; int an_workqueue; int sysclk; int ptpclk; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct xgbe_prv_data* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 struct xgbe_prv_data *VAR_2 = FUNC_3(VAR_1);


 FUNC_6(VAR_2);

 FUNC_5(VAR_2);


 FUNC_0(VAR_2->ptpclk);
 FUNC_0(VAR_2->sysclk);

 FUNC_2(VAR_2->an_workqueue);
 FUNC_1(VAR_2->an_workqueue);

 FUNC_2(VAR_2->dev_workqueue);
 FUNC_1(VAR_2->dev_workqueue);

 FUNC_4(VAR_0, &VAR_2->dev_state);

 return 0;
}
