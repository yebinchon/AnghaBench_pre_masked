
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {struct ieee_pfc* pfc; } ;
struct ieee_pfc {scalar_t__ pfc_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,int) ;
 int FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_2)
{
 struct ieee_pfc *VAR_3 = VAR_2->pfc;

 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 FUNC_0(VAR_2, VAR_0, VAR_1,
      (VAR_3 && VAR_3->pfc_en) ? 1 : 0);
}
