
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int port_mode; scalar_t__ redrv; } ;
typedef enum xgbe_an_mode { ____Placeholder_xgbe_an_mode } xgbe_an_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct xgbe_phy_data*) ;

__attribute__((used)) static enum xgbe_an_mode FUNC_1(struct xgbe_prv_data *VAR_5)
{
 struct xgbe_phy_data *VAR_6 = VAR_5->phy_data;


 if (VAR_6->redrv)
  return VAR_3;

 switch (VAR_6->port_mode) {
 case 131:
  return VAR_2;
 case 130:
  return VAR_4;
 case 135:
  return VAR_1;
 case 134:
  return VAR_0;
 case 129:
  return VAR_1;
 case 132:
  return VAR_2;
 case 133:
  return VAR_4;
 case 128:
  return FUNC_0(VAR_6);
 default:
  return VAR_4;
 }
}
