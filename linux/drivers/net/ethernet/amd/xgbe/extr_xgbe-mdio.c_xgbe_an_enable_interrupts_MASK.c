
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int an_mode; } ;






 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_0)
{
 switch (VAR_0->an_mode) {
 case 129:
 case 128:
  FUNC_1(VAR_0);
  break;
 case 131:
 case 130:
  FUNC_0(VAR_0);
  break;
 default:
  break;
 }
}
