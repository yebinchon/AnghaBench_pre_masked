
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct kernfs_root {int dummy; } ;
struct TYPE_3__ {int refcnt; int children; } ;
struct TYPE_4__ {TYPE_1__ self; } ;
struct cgroup_root {TYPE_2__ cgrp; } ;


 int FUNC_0 (TYPE_2__*) ;
 struct cgroup_root* FUNC_1 (struct kernfs_root*) ;
 struct cgroup_root VAR_0 ;
 int FUNC_2 (struct super_block*) ;
 struct kernfs_root* FUNC_3 (struct super_block*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct super_block *VAR_1)
{
 struct kernfs_root *VAR_2 = FUNC_3(VAR_1);
 struct cgroup_root *VAR_3 = FUNC_1(VAR_2);
 if (FUNC_4(&VAR_3->cgrp.self.children) && VAR_3 != &VAR_0 &&
     !FUNC_5(&VAR_3->cgrp.self.refcnt))
  FUNC_6(&VAR_3->cgrp.self.refcnt);
 FUNC_0(&VAR_3->cgrp);
 FUNC_2(VAR_1);
}
