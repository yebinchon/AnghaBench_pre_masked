
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct css_task_iter {unsigned int flags; int * cset_pos; int * cset_head; TYPE_1__* ss; } ;
struct cgroup_subsys_state {TYPE_2__* cgroup; TYPE_1__* ss; } ;
struct TYPE_4__ {int cset_links; int * e_csets; } ;
struct TYPE_3__ {size_t id; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct css_task_iter*) ;
 int FUNC_2 (struct css_task_iter*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;

void FUNC_5(struct cgroup_subsys_state *VAR_2, unsigned int VAR_3,
    struct css_task_iter *VAR_4)
{

 FUNC_0(!VAR_1);

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));

 FUNC_3(&VAR_0);

 VAR_4->ss = VAR_2->ss;
 VAR_4->flags = VAR_3;

 if (VAR_4->ss)
  VAR_4->cset_pos = &VAR_2->cgroup->e_csets[VAR_2->ss->id];
 else
  VAR_4->cset_pos = &VAR_2->cgroup->cset_links;

 VAR_4->cset_head = VAR_4->cset_pos;

 FUNC_1(VAR_4);

 FUNC_4(&VAR_0);
}
