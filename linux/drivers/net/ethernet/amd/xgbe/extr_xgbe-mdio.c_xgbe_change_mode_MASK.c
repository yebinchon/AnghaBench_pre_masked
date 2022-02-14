
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int netdev; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;
 int VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,char*,int) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 int FUNC_3 (struct xgbe_prv_data*) ;
 int FUNC_4 (struct xgbe_prv_data*) ;
 int FUNC_5 (struct xgbe_prv_data*) ;
 int FUNC_6 (struct xgbe_prv_data*) ;
 int FUNC_7 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_8(struct xgbe_prv_data *VAR_1,
        enum xgbe_mode VAR_2)
{
 switch (VAR_2) {
 case 134:
  FUNC_2(VAR_1);
  break;
 case 133:
  FUNC_3(VAR_1);
  break;
 case 135:
  FUNC_1(VAR_1);
  break;
 case 131:
  FUNC_6(VAR_1);
  break;
 case 130:
  FUNC_5(VAR_1);
  break;
 case 128:
  FUNC_7(VAR_1);
  break;
 case 132:
  FUNC_4(VAR_1);
  break;
 case 129:
  break;
 default:
  FUNC_0(VAR_1, VAR_0, VAR_1->netdev,
     "invalid operation mode requested (%u)\n", VAR_2);
 }
}
