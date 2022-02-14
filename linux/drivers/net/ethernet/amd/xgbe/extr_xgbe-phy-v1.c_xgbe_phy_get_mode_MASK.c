
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int speed_set; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static enum xgbe_mode FUNC_0(struct xgbe_prv_data *VAR_6,
     int VAR_7)
{
 struct xgbe_phy_data *VAR_8 = VAR_6->phy_data;

 switch (VAR_7) {
 case 130:
  return (VAR_8->speed_set == VAR_4)
   ? VAR_1 : VAR_3;
 case 128:
  return (VAR_8->speed_set == VAR_5)
   ? VAR_2 : VAR_3;
 case 129:
  return VAR_0;
 default:
  return VAR_3;
 }
}
