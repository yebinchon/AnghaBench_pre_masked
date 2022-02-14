
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_space {int members_lock; int members_count; } ;
struct dlm_node {int list; } ;
struct config_item {int dummy; } ;
struct TYPE_2__ {int ci_parent; } ;
struct config_group {TYPE_1__ cg_item; } ;


 int FUNC_0 (struct config_item*) ;
 struct dlm_node* FUNC_1 (struct config_item*) ;
 struct dlm_space* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct config_group *VAR_0, struct config_item *VAR_1)
{
 struct dlm_space *VAR_2 = FUNC_2(VAR_0->cg_item.ci_parent);
 struct dlm_node *VAR_3 = FUNC_1(VAR_1);

 FUNC_4(&VAR_2->members_lock);
 FUNC_3(&VAR_3->list);
 VAR_2->members_count--;
 FUNC_5(&VAR_2->members_lock);

 FUNC_0(VAR_1);
}
