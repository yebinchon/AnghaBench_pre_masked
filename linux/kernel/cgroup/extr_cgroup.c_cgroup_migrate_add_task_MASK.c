
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {int flags; int cg_list; } ;
struct css_set {TYPE_1__* mg_dst_cset; int mg_node; int mg_tasks; int mg_src_cgrp; } ;
struct TYPE_4__ {int dst_csets; int src_csets; int nr_tasks; } ;
struct cgroup_mgctx {TYPE_2__ tset; } ;
struct TYPE_3__ {int mg_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 struct css_set* FUNC_4 (struct task_struct*) ;

__attribute__((used)) static void FUNC_5(struct task_struct *VAR_2,
        struct cgroup_mgctx *VAR_3)
{
 struct css_set *VAR_4;

 FUNC_3(&VAR_1);


 if (VAR_2->flags & VAR_0)
  return;


 if (FUNC_1(&VAR_2->cg_list))
  return;

 VAR_4 = FUNC_4(VAR_2);
 if (!VAR_4->mg_src_cgrp)
  return;

 VAR_3->tset.nr_tasks++;

 FUNC_2(&VAR_2->cg_list, &VAR_4->mg_tasks);
 if (FUNC_1(&VAR_4->mg_node))
  FUNC_0(&VAR_4->mg_node,
         &VAR_3->tset.src_csets);
 if (FUNC_1(&VAR_4->mg_dst_cset->mg_node))
  FUNC_0(&VAR_4->mg_dst_cset->mg_node,
         &VAR_3->tset.dst_csets);
}
