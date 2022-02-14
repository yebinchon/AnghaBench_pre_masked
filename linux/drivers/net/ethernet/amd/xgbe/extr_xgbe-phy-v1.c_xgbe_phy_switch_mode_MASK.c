
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {scalar_t__ speed_set; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct xgbe_prv_data*) ;

__attribute__((used)) static enum xgbe_mode FUNC_1(struct xgbe_prv_data *VAR_4)
{
 struct xgbe_phy_data *VAR_5 = VAR_4->phy_data;
 enum xgbe_mode VAR_6;


 if (FUNC_0(VAR_4) == VAR_0) {
  if (VAR_5->speed_set == VAR_3)
   VAR_6 = VAR_2;
  else
   VAR_6 = VAR_1;
 } else {
  VAR_6 = VAR_0;
 }

 return VAR_6;
}
