
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct e1000_adapter {int update_phy_task; int state; } ;


 int VAR_0 ;
 struct e1000_adapter* VAR_1 ;
 struct e1000_adapter* FUNC_0 (int ,struct timer_list*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct timer_list *VAR_3)
{
 struct e1000_adapter *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);

 if (FUNC_2(VAR_0, &VAR_4->state))
  return;

 FUNC_1(&VAR_4->update_phy_task);
}
