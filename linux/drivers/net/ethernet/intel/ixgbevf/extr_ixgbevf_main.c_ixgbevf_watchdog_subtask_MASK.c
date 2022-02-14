
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbevf_adapter {scalar_t__ link_up; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbevf_adapter*) ;
 int FUNC_1 (struct ixgbevf_adapter*) ;
 int FUNC_2 (struct ixgbevf_adapter*) ;
 int FUNC_3 (struct ixgbevf_adapter*) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ixgbevf_adapter *VAR_2)
{

 if (FUNC_4(VAR_0, &VAR_2->state) ||
     FUNC_4(VAR_1, &VAR_2->state))
  return;

 FUNC_3(VAR_2);

 if (VAR_2->link_up)
  FUNC_2(VAR_2);
 else
  FUNC_1(VAR_2);

 FUNC_0(VAR_2);
}
