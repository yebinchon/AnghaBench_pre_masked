
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgbe_prv_data {TYPE_1__* vdata; } ;
struct TYPE_2__ {int ecc_support; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,unsigned int) ;
 int FUNC_2 (unsigned int,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_8)
{
 unsigned int VAR_9, VAR_10 = 0;

 if (!VAR_8->vdata->ecc_support)
  return;


 VAR_9 = FUNC_0(VAR_8, VAR_7);
 FUNC_1(VAR_8, VAR_7, VAR_9);


 FUNC_2(VAR_10, VAR_6, VAR_4, 1);
 FUNC_2(VAR_10, VAR_6, VAR_5, 1);
 FUNC_2(VAR_10, VAR_6, VAR_2, 1);
 FUNC_2(VAR_10, VAR_6, VAR_3, 1);
 FUNC_2(VAR_10, VAR_6, VAR_0, 1);
 FUNC_2(VAR_10, VAR_6, VAR_1, 1);

 FUNC_1(VAR_8, VAR_6, VAR_10);
}
