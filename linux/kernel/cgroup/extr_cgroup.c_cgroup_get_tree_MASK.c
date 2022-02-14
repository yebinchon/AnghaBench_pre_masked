
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_context {int dummy; } ;
struct cgroup_fs_context {int flags; TYPE_1__* root; } ;
struct TYPE_2__ {int cgrp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct fs_context*) ;
 struct cgroup_fs_context* FUNC_2 (struct fs_context*) ;
 int FUNC_3 (int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct fs_context *VAR_2)
{
 struct cgroup_fs_context *VAR_3 = FUNC_2(VAR_2);
 int VAR_4;

 VAR_1 = 1;
 FUNC_3(&VAR_0.cgrp);
 VAR_3->root = &VAR_0;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  FUNC_0(VAR_3->flags);
 return VAR_4;
}
