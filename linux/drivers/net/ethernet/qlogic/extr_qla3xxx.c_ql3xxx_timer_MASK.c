
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct ql3_adapter {int link_state_work; int workqueue; } ;


 int VAR_0 ;
 struct ql3_adapter* FUNC_0 (int ,struct timer_list*,int ) ;
 struct ql3_adapter* VAR_1 ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct ql3_adapter *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 FUNC_1(VAR_3->workqueue, &VAR_3->link_state_work, 0);
}
