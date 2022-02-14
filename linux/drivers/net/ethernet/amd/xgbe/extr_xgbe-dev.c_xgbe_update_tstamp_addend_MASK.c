
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,unsigned int) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct xgbe_prv_data *VAR_3,
          unsigned int VAR_4)
{
 unsigned int VAR_5 = 10000;


 FUNC_1(VAR_3, VAR_0, VAR_4);
 FUNC_2(VAR_3, VAR_1, VAR_2, 1);


 while (--VAR_5 && FUNC_0(VAR_3, VAR_1, VAR_2))
  FUNC_4(5);

 if (!VAR_5)
  FUNC_3(VAR_3->netdev,
      "timed out updating timestamp addend register\n");
}
