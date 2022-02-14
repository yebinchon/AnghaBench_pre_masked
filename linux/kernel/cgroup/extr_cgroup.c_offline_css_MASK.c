
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgroup_subsys_state {int flags; TYPE_1__* cgroup; struct cgroup_subsys* ss; } ;
struct cgroup_subsys {size_t id; int (* css_offline ) (struct cgroup_subsys_state*) ;} ;
struct TYPE_2__ {int offline_waitq; int * subsys; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cgroup_subsys_state*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cgroup_subsys_state *VAR_2)
{
 struct cgroup_subsys *VAR_3 = VAR_2->ss;

 FUNC_1(&VAR_1);

 if (!(VAR_2->flags & VAR_0))
  return;

 if (VAR_3->css_offline)
  VAR_3->css_offline(VAR_2);

 VAR_2->flags &= ~VAR_0;
 FUNC_0(VAR_2->cgroup->subsys[VAR_3->id], ((void*)0));

 FUNC_3(&VAR_2->cgroup->offline_waitq);
}
