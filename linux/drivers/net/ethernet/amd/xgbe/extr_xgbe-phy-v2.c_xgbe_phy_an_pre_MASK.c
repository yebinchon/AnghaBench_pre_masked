
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int an_mode; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int cur_mode; } ;




 int VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_1)
{
 struct xgbe_phy_data *VAR_2 = VAR_1->phy_data;

 switch (VAR_1->an_mode) {
 case 129:
 case 128:
  if (VAR_2->cur_mode != VAR_0)
   break;

  FUNC_0(VAR_1);
  break;
 default:
  break;
 }
}
