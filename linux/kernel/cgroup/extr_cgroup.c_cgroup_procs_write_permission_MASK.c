
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct cgroup_namespace {TYPE_2__* root_cset; } ;
struct TYPE_6__ {int kn; } ;
struct cgroup {TYPE_1__ procs_file; } ;
struct TYPE_10__ {int flags; } ;
struct TYPE_9__ {TYPE_3__* nsproxy; } ;
struct TYPE_8__ {struct cgroup_namespace* cgroup_ns; } ;
struct TYPE_7__ {struct cgroup* dfl_cgrp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cgroup*,struct cgroup*) ;
 int VAR_4 ;
 struct cgroup* FUNC_1 (struct cgroup*) ;
 TYPE_5__ VAR_5 ;
 TYPE_4__* VAR_6 ;
 int FUNC_2 (struct inode*,int ) ;
 int FUNC_3 (struct inode*) ;
 struct inode* FUNC_4 (struct super_block*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct cgroup *VAR_7,
      struct cgroup *VAR_8,
      struct super_block *VAR_9)
{
 struct cgroup_namespace *VAR_10 = VAR_6->nsproxy->cgroup_ns;
 struct cgroup *VAR_11 = VAR_7;
 struct inode *VAR_12;
 int VAR_13;

 FUNC_5(&VAR_4);


 while (!FUNC_0(VAR_8, VAR_11))
  VAR_11 = FUNC_1(VAR_11);


 VAR_12 = FUNC_4(VAR_9, VAR_11->procs_file.kn);
 if (!VAR_12)
  return -VAR_2;

 VAR_13 = FUNC_2(VAR_12, VAR_3);
 FUNC_3(VAR_12);
 if (VAR_13)
  return VAR_13;





 if ((VAR_5.flags & VAR_0) &&
     (!FUNC_0(VAR_7, VAR_10->root_cset->dfl_cgrp) ||
      !FUNC_0(VAR_8, VAR_10->root_cset->dfl_cgrp)))
  return -VAR_1;

 return 0;
}
