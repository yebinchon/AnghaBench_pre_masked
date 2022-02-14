
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_6(struct xgbe_prv_data *VAR_0)
{
 int VAR_1;

 FUNC_3(VAR_0);

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_0(VAR_0->dev, "failed to disable i2c master\n");
  return VAR_1;
 }

 FUNC_4(VAR_0);

 FUNC_5(VAR_0);

 FUNC_1(VAR_0);

 return 0;
}
