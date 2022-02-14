
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,int ,unsigned int) ;
 int VAR_2 ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_3(struct xgbe_prv_data *VAR_3,
           unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_4 ? 1 : 0;

 if (FUNC_0(VAR_3, VAR_0, VAR_1) == VAR_5)
  return 0;

 FUNC_2(VAR_3, VAR_2, VAR_3->netdev, "%s allmulti mode\n",
    VAR_4 ? "entering" : "leaving");
 FUNC_1(VAR_3, VAR_0, VAR_1, VAR_5);

 return 0;
}
