
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_data {int sfp_base; } ;
typedef enum xgbe_an_mode { ____Placeholder_xgbe_an_mode } xgbe_an_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





__attribute__((used)) static enum xgbe_an_mode FUNC_0(struct xgbe_phy_data *VAR_3)
{
 switch (VAR_3->sfp_base) {
 case 128:
  return VAR_1;
 case 129:
 case 130:
 case 131:
  return VAR_0;
 default:
  return VAR_2;
 }
}
