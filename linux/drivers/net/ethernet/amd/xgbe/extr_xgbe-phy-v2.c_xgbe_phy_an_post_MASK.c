
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int an_mode; int an_result; struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {int phy_cdr_delay; int cur_mode; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_4)
{
 struct xgbe_phy_data *VAR_5 = VAR_4->phy_data;

 switch (VAR_4->an_mode) {
 case 130:
 case 129:
  if (VAR_5->cur_mode != VAR_3)
   break;

  FUNC_0(VAR_4);

  switch (VAR_4->an_result) {
  case 128:
  case 131:
   break;
  default:
   if (VAR_5->phy_cdr_delay < VAR_2)
    VAR_5->phy_cdr_delay += VAR_0;
   else
    VAR_5->phy_cdr_delay = VAR_1;
   break;
  }
  break;
 default:
  break;
 }
}
