
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct xgbe_phy_data* phy_data; } ;
struct xgbe_phy_data {scalar_t__ speed_set; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;

__attribute__((used)) static enum xgbe_mode FUNC_1(struct xgbe_prv_data *VAR_8)
{
 struct xgbe_phy_data *VAR_9 = VAR_8->phy_data;
 enum xgbe_mode VAR_10;
 unsigned int VAR_11;

 VAR_11 = FUNC_0(VAR_8, VAR_1, VAR_0);
 VAR_11 &= VAR_3;

 if (VAR_11 == VAR_2) {
  VAR_10 = VAR_4;
 } else {
  if (VAR_9->speed_set == VAR_7)
   VAR_10 = VAR_6;
  else
   VAR_10 = VAR_5;
 }

 return VAR_10;
}
