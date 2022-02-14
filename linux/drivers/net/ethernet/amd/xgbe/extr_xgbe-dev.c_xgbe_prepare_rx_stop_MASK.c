
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int netdev; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 scalar_t__ FUNC_0 (unsigned int,int ,int ) ;
 unsigned int FUNC_1 (struct xgbe_prv_data*,unsigned int,int ) ;
 unsigned long VAR_5 ;
 int FUNC_2 (int ,char*,unsigned int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct xgbe_prv_data *VAR_6,
     unsigned int VAR_7)
{
 unsigned int VAR_8;
 unsigned long VAR_9;





 VAR_9 = VAR_5 + (VAR_4 * VAR_0);
 while (FUNC_3(VAR_5, VAR_9)) {
  VAR_8 = FUNC_1(VAR_6, VAR_7, VAR_1);
  if ((FUNC_0(VAR_8, VAR_1, VAR_2) == 0) &&
      (FUNC_0(VAR_8, VAR_1, VAR_3) == 0))
   break;

  FUNC_4(500, 1000);
 }

 if (!FUNC_3(VAR_5, VAR_9))
  FUNC_2(VAR_6->netdev,
       "timed out waiting for Rx queue %u to empty\n",
       VAR_7);
}
