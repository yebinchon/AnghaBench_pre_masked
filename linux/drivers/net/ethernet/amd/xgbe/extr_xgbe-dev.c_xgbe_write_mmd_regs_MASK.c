
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {TYPE_1__* vdata; } ;
struct TYPE_2__ {int xpcs_access; } ;




 void FUNC_0 (struct xgbe_prv_data*,int,int,int) ;
 void FUNC_1 (struct xgbe_prv_data*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_0, int VAR_1,
    int VAR_2, int VAR_3)
{
 switch (VAR_0->vdata->xpcs_access) {
 case 129:
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);

 case 128:
 default:
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 }
}
