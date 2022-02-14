
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int port_mode; int conn_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
__attribute__((used)) static bool FUNC_0(struct xgbe_prv_data *VAR_3)
{
 struct xgbe_phy_data *VAR_4 = VAR_3->phy_data;

 switch (VAR_4->port_mode) {
 case 131:
 case 130:
  if (VAR_4->conn_type == VAR_0)
   return 0;
  break;
 case 135:
 case 134:
 case 129:
 case 132:
 case 133:
  if (VAR_4->conn_type == VAR_1)
   return 0;
  break;
 case 128:
  if (VAR_4->conn_type == VAR_2)
   return 0;
  break;
 default:
  break;
 }

 return 1;
}
