
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fs_context {TYPE_5__* root; } ;
struct cgroup_fs_context {TYPE_4__* root; TYPE_1__* ns; } ;
struct TYPE_12__ {int cgrp; } ;
struct TYPE_11__ {struct super_block* d_sb; } ;
struct TYPE_8__ {int refcnt; } ;
struct TYPE_9__ {TYPE_2__ self; } ;
struct TYPE_10__ {TYPE_3__ cgrp; } ;
struct TYPE_7__ {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fs_context*) ;
 int FUNC_1 (struct fs_context*) ;
 struct cgroup_fs_context* FUNC_2 (struct fs_context*) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 TYPE_6__ VAR_3 ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 () ;
 scalar_t__ FUNC_12 (int) ;

int FUNC_13(struct fs_context *VAR_4)
{
 struct cgroup_fs_context *VAR_5 = FUNC_2(VAR_4);
 int VAR_6;


 if (!FUNC_8(VAR_5->ns->user_ns, VAR_0))
  return -VAR_1;

 FUNC_3(&VAR_3.cgrp);

 VAR_6 = FUNC_0(VAR_4);
 if (!VAR_6 && !FUNC_10(&VAR_5->root->cgrp.self.refcnt))
  VAR_6 = 1;

 FUNC_7(&VAR_2);

 if (!VAR_6)
  VAR_6 = FUNC_1(VAR_4);

 if (!VAR_6 && FUNC_9(&VAR_5->root->cgrp.self.refcnt)) {
  struct super_block *VAR_7 = VAR_4->root->d_sb;
  FUNC_5(VAR_4->root);
  FUNC_4(VAR_7);
  VAR_6 = 1;
 }

 if (FUNC_12(VAR_6 > 0)) {
  FUNC_6(10);
  return FUNC_11();
 }
 return VAR_6;
}
