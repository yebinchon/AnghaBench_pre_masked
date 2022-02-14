
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int an_mode; int netdev; } ;






 int VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_1)
{
 struct xgbe_prv_data *VAR_2 = (struct xgbe_prv_data *)VAR_1;

 FUNC_0(VAR_2, VAR_0, VAR_2->netdev, "AN interrupt received\n");

 switch (VAR_2->an_mode) {
 case 129:
 case 128:
  FUNC_2(VAR_2);
  break;
 case 131:
 case 130:
  FUNC_1(VAR_2);
  break;
 default:
  break;
 }
}
