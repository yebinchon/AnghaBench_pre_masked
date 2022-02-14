
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_data {int port_mode; } ;




 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool FUNC_0(struct xgbe_phy_data *VAR_2,
         int VAR_3)
{
 switch (VAR_3) {
 case 129:
  return (VAR_2->port_mode == VAR_0);
 case 128:
  return (VAR_2->port_mode == VAR_1);
 default:
  return 0;
 }
}
