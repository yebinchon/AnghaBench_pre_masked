
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_adapter {scalar_t__ link_up; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct ixgbe_adapter *VAR_3)
{

 if (FUNC_7(VAR_0, &VAR_3->state) ||
     FUNC_7(VAR_1, &VAR_3->state) ||
     FUNC_7(VAR_2, &VAR_3->state))
  return;

 FUNC_6(VAR_3);

 if (VAR_3->link_up)
  FUNC_5(VAR_3);
 else
  FUNC_4(VAR_3);

 FUNC_0(VAR_3);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3);

 FUNC_3(VAR_3);
}
