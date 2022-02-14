
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_data {int sfp_base; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum xgbe_mode FUNC_0(struct xgbe_phy_data *VAR_6,
         int VAR_7)
{
 switch (VAR_7) {
 case 131:
  return VAR_1;
 case 130:
  if (VAR_6->sfp_base == VAR_5)
   return VAR_2;
  else
   return VAR_4;
 case 129:
 case 128:
  return VAR_0;
 default:
  return VAR_3;
 }
}
