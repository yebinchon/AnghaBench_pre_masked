
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int flags; struct cgroup_root* root; } ;
struct cgroup_root {struct cgroup cgrp; int name; int release_agent_path; int flags; int cgroup_idr; int nr_cgrps; int root_list; } ;
struct cgroup_fs_context {scalar_t__ cpuset_clone_children; int name; int release_agent; int flags; struct cgroup_root* root; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cgroup*) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;

void FUNC_6(struct cgroup_fs_context *VAR_3)
{
 struct cgroup_root *VAR_4 = VAR_3->root;
 struct cgroup *VAR_5 = &VAR_4->cgrp;

 FUNC_0(&VAR_4->root_list);
 FUNC_1(&VAR_4->nr_cgrps, 1);
 VAR_5->root = VAR_4;
 FUNC_3(VAR_5);
 FUNC_2(&VAR_4->cgroup_idr);

 VAR_4->flags = VAR_3->flags;
 if (VAR_3->release_agent)
  FUNC_5(VAR_4->release_agent_path, VAR_3->release_agent, VAR_2);
 if (VAR_3->name)
  FUNC_5(VAR_4->name, VAR_3->name, VAR_1);
 if (VAR_3->cpuset_clone_children)
  FUNC_4(VAR_0, &VAR_4->cgrp.flags);
}
