
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int an_mode; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;






 int VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;

__attribute__((used)) static enum xgbe_mode FUNC_4(struct xgbe_prv_data *VAR_1)
{
 switch (VAR_1->an_mode) {
 case 129:
  return FUNC_2(VAR_1);
 case 128:
  return FUNC_3(VAR_1);
 case 131:
  return FUNC_0(VAR_1);
 case 130:
  return FUNC_1(VAR_1);
 default:
  return VAR_0;
 }
}
