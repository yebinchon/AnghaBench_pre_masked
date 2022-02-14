
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_phy_data {scalar_t__ redrv_if; int redrv_model; int redrv_lane; int redrv; } ;


 scalar_t__ VAR_0 ;



__attribute__((used)) static bool FUNC_0(struct xgbe_phy_data *VAR_1)
{
 if (!VAR_1->redrv)
  return 0;

 if (VAR_1->redrv_if >= VAR_0)
  return 1;

 switch (VAR_1->redrv_model) {
 case 129:
  if (VAR_1->redrv_lane > 3)
   return 1;
  break;
 case 128:
  if (VAR_1->redrv_lane > 1)
   return 1;
  break;
 default:
  return 1;
 }

 return 0;
}
