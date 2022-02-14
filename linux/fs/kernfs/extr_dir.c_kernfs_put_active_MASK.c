
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kernfs_node {int active; int dep_map; } ;
struct TYPE_2__ {int deactivate_waitq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct kernfs_node*) ;
 TYPE_1__* FUNC_2 (struct kernfs_node*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,int,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct kernfs_node *VAR_2)
{
 int VAR_3;

 if (FUNC_5(!VAR_2))
  return;

 if (FUNC_1(VAR_2))
  FUNC_4(&VAR_2->dep_map, 1, VAR_1);
 VAR_3 = FUNC_0(&VAR_2->active);
 if (FUNC_3(VAR_3 != VAR_0))
  return;

 FUNC_6(&FUNC_2(VAR_2)->deactivate_waitq);
}
