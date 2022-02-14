
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {scalar_t__ rx_pause; struct ieee_pfc* pfc; } ;
struct ieee_pfc {scalar_t__ pfc_en; } ;


 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;

__attribute__((used)) static int FUNC_2(struct xgbe_prv_data *VAR_0)
{
 struct ieee_pfc *VAR_1 = VAR_0->pfc;

 if (VAR_0->rx_pause || (VAR_1 && VAR_1->pfc_en))
  FUNC_1(VAR_0);
 else
  FUNC_0(VAR_0);

 return 0;
}
