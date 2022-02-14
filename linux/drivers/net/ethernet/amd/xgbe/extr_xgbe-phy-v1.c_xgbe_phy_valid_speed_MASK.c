
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int speed_set; } ;





 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct xgbe_prv_data *VAR_2, int VAR_3)
{
 struct xgbe_phy_data *VAR_4 = VAR_2->phy_data;

 switch (VAR_3) {
 case 130:
  if (VAR_4->speed_set != VAR_0)
   return 0;
  return 1;
 case 128:
  if (VAR_4->speed_set != VAR_1)
   return 0;
  return 1;
 case 129:
  return 1;
 default:
  return 0;
 }
}
