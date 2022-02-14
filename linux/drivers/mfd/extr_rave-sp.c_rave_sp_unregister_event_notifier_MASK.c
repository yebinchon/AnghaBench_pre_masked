
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blocking_notifier_head {int dummy; } ;
struct rave_sp {struct blocking_notifier_head event_notifier_list; } ;
struct notifier_block {int dummy; } ;
struct device {int parent; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct blocking_notifier_head*,struct notifier_block*) ;
 struct rave_sp* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct rave_sp *VAR_2 = FUNC_2(VAR_0->parent);
 struct notifier_block *VAR_3 = *(struct notifier_block **)VAR_1;
 struct blocking_notifier_head *VAR_4 = &VAR_2->event_notifier_list;

 FUNC_0(FUNC_1(VAR_4, VAR_3));
}
