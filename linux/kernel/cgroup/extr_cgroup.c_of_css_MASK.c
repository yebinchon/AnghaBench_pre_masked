
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct kernfs_open_file {TYPE_2__* kn; } ;
struct cgroup_subsys_state {int dummy; } ;
struct cgroup {struct cgroup_subsys_state self; int * subsys; } ;
struct cftype {TYPE_3__* ss; } ;
struct TYPE_6__ {size_t id; } ;
struct TYPE_5__ {TYPE_1__* parent; } ;
struct TYPE_4__ {struct cgroup* priv; } ;


 struct cftype* FUNC_0 (struct kernfs_open_file*) ;
 struct cgroup_subsys_state* FUNC_1 (int ) ;

struct cgroup_subsys_state *FUNC_2(struct kernfs_open_file *VAR_0)
{
 struct cgroup *VAR_1 = VAR_0->kn->parent->priv;
 struct cftype *VAR_2 = FUNC_0(VAR_0);
 if (VAR_2->ss)
  return FUNC_1(VAR_1->subsys[VAR_2->ss->id]);
 else
  return &VAR_1->self;
}
