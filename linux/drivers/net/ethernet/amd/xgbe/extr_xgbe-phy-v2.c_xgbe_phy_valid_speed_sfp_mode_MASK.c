
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_data {int sfp_speed; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_0(struct xgbe_phy_data *VAR_3,
       int VAR_4)
{
 switch (VAR_4) {
 case 130:
  return (VAR_3->sfp_speed == VAR_2);
 case 129:
  return ((VAR_3->sfp_speed == VAR_2) ||
   (VAR_3->sfp_speed == VAR_0));
 case 128:
  return (VAR_3->sfp_speed == VAR_1);
 default:
  return 0;
 }
}
