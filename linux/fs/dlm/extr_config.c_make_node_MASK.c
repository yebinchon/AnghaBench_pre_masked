
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_space {int members_lock; int members_count; int members; } ;
struct config_item {int dummy; } ;
struct dlm_node {int nodeid; int weight; int new; struct config_item item; int list; } ;
struct TYPE_2__ {int ci_parent; } ;
struct config_group {TYPE_1__ cg_item; } ;


 int VAR_0 ;
 struct config_item* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct config_item*,char const*,int *) ;
 struct dlm_space* FUNC_2 (int ) ;
 struct dlm_node* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;

__attribute__((used)) static struct config_item *FUNC_7(struct config_group *VAR_3, const char *VAR_4)
{
 struct dlm_space *VAR_5 = FUNC_2(VAR_3->cg_item.ci_parent);
 struct dlm_node *VAR_6;

 VAR_6 = FUNC_3(sizeof(struct dlm_node), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_6->item, VAR_4, &VAR_2);
 VAR_6->nodeid = -1;
 VAR_6->weight = 1;
 VAR_6->new = 1;

 FUNC_5(&VAR_5->members_lock);
 FUNC_4(&VAR_6->list, &VAR_5->members);
 VAR_5->members_count++;
 FUNC_6(&VAR_5->members_lock);

 return &VAR_6->item;
}
