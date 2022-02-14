
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {int state; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct ixgbe_adapter*) ;
 scalar_t__ FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ixgbe_adapter *VAR_2)
{
 if (!FUNC_3(VAR_2->netdev)) {
  if (FUNC_1(VAR_2) ||
      FUNC_2(VAR_2)) {





   FUNC_0(VAR_1, "initiating reset to clear Tx work after link loss\n");
   FUNC_4(VAR_0, &VAR_2->state);
  }
 }
}
