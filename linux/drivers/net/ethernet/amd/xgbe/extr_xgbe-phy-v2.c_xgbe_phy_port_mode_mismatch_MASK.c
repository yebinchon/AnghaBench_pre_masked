
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int port_mode; int port_speeds; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
__attribute__((used)) static bool FUNC_0(struct xgbe_prv_data *VAR_4)
{
 struct xgbe_phy_data *VAR_5 = VAR_4->phy_data;

 switch (VAR_5->port_mode) {
 case 131:
  if ((VAR_5->port_speeds & VAR_1) ||
      (VAR_5->port_speeds & VAR_2))
   return 0;
  break;
 case 130:
  if (VAR_5->port_speeds & VAR_3)
   return 0;
  break;
 case 135:
  if ((VAR_5->port_speeds & VAR_0) ||
      (VAR_5->port_speeds & VAR_1))
   return 0;
  break;
 case 134:
  if (VAR_5->port_speeds & VAR_1)
   return 0;
  break;
 case 129:
  if ((VAR_5->port_speeds & VAR_0) ||
      (VAR_5->port_speeds & VAR_1) ||
      (VAR_5->port_speeds & VAR_3))
   return 0;
  break;
 case 132:
  if ((VAR_5->port_speeds & VAR_0) ||
      (VAR_5->port_speeds & VAR_1) ||
      (VAR_5->port_speeds & VAR_2))
   return 0;
  break;
 case 133:
  if (VAR_5->port_speeds & VAR_2)
   return 0;
  break;
 case 128:
  if ((VAR_5->port_speeds & VAR_0) ||
      (VAR_5->port_speeds & VAR_1) ||
      (VAR_5->port_speeds & VAR_2))
   return 0;
  break;
 default:
  break;
 }

 return 1;
}
