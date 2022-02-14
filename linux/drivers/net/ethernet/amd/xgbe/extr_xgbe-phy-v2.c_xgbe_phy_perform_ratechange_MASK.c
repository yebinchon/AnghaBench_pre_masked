
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (struct xgbe_prv_data*,int ,unsigned int) ;
 int FUNC_2 (struct xgbe_prv_data*,int ,int ,int) ;
 int FUNC_3 (unsigned int,int ,int ,unsigned int) ;
 int VAR_9 ;
 int FUNC_4 (struct xgbe_prv_data*,int ,int ,char*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(struct xgbe_prv_data *VAR_10,
     unsigned int VAR_11, unsigned int VAR_12)
{
 unsigned int VAR_13 = 0;
 unsigned int VAR_14;


 if (FUNC_0(VAR_10, VAR_6, VAR_2))
  FUNC_4(VAR_10, VAR_9, VAR_10->netdev,
     "firmware mailbox not ready for command\n");


 FUNC_3(VAR_13, VAR_7, VAR_0, VAR_11);
 FUNC_3(VAR_13, VAR_7, VAR_3, VAR_12);


 FUNC_1(VAR_10, VAR_7, VAR_13);
 FUNC_1(VAR_10, VAR_8, 0);
 FUNC_2(VAR_10, VAR_5, VAR_1, 1);


 VAR_14 = VAR_4;
 while (VAR_14--) {
  if (!FUNC_0(VAR_10, VAR_6, VAR_2))
   return;

  FUNC_5(1000, 2000);
 }

 FUNC_4(VAR_10, VAR_9, VAR_10->netdev,
    "firmware mailbox command did not complete\n");
}
