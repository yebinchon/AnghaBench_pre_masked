
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ autoneg; int speed; } ;
struct xgbe_prv_data {TYPE_1__ phy; } ;
typedef enum xgbe_mode { ____Placeholder_xgbe_mode } xgbe_mode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static bool FUNC_1(struct xgbe_prv_data *VAR_1,
    enum xgbe_mode VAR_2, bool VAR_3)
{
 if (VAR_1->phy.autoneg == VAR_0) {
  return VAR_3;
 } else {
  enum xgbe_mode VAR_4;

  VAR_4 = FUNC_0(VAR_1, VAR_1->phy.speed);
  if (VAR_4 == VAR_2)
   return 1;
 }

 return 0;
}
