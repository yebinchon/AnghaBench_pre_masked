
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int tx_timeout_count; int netdev; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct ixgbe_adapter *VAR_4)
{
 if (!FUNC_5(VAR_3, &VAR_4->state))
  return;

 FUNC_3();

 if (FUNC_6(VAR_0, &VAR_4->state) ||
     FUNC_6(VAR_1, &VAR_4->state) ||
     FUNC_6(VAR_2, &VAR_4->state)) {
  FUNC_4();
  return;
 }

 FUNC_0(VAR_4);
 FUNC_2(VAR_4->netdev, "Reset adapter\n");
 VAR_4->tx_timeout_count++;

 FUNC_1(VAR_4);
 FUNC_4();
}
