
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_adapter {int tx_timeout_count; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbevf_adapter*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ixgbevf_adapter *VAR_4)
{
 if (!FUNC_3(VAR_3, &VAR_4->state))
  return;

 FUNC_1();

 if (FUNC_4(VAR_0, &VAR_4->state) ||
     FUNC_4(VAR_1, &VAR_4->state) ||
     FUNC_4(VAR_2, &VAR_4->state)) {
  FUNC_2();
  return;
 }

 VAR_4->tx_timeout_count++;

 FUNC_0(VAR_4);
 FUNC_2();
}
