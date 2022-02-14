
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {scalar_t__ awarcr; scalar_t__ awcr; scalar_t__ arcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xgbe_prv_data*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct xgbe_prv_data *VAR_3)
{
 FUNC_0(VAR_3, VAR_0, VAR_3->arcr);
 FUNC_0(VAR_3, VAR_2, VAR_3->awcr);
 if (VAR_3->awarcr)
  FUNC_0(VAR_3, VAR_1, VAR_3->awarcr);
}
