
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int port_mode; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;


 int VAR_0 ;
 int FUNC_0 (struct xgbe_phy_data*,int) ;
 int FUNC_1 (struct xgbe_phy_data*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct xgbe_phy_data*,int) ;

__attribute__((used)) static enum xgbe_mode FUNC_5(struct xgbe_prv_data *VAR_1,
     int VAR_2)
{
 struct xgbe_phy_data *VAR_3 = VAR_1->phy_data;

 switch (VAR_3->port_mode) {
 case 131:
  return FUNC_3(VAR_2);
 case 130:
  return FUNC_2(VAR_2);
 case 135:
 case 129:
 case 132:
  return FUNC_0(VAR_3, VAR_2);
 case 134:
 case 133:
  return FUNC_1(VAR_3, VAR_2);
 case 128:
  return FUNC_4(VAR_3, VAR_2);
 default:
  return VAR_0;
 }
}
