
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct fs_context {struct dentry* root; int * fs_type; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_4__ {int new_sb_created; int magic; int root; } ;
struct cgroup_fs_context {TYPE_3__* root; TYPE_1__ kfc; TYPE_2__* ns; } ;
struct cgroup {int kn; } ;
struct TYPE_6__ {int cgrp; int kf_root; } ;
struct TYPE_5__ {int root_cset; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int VAR_2 ;
 struct cgroup_fs_context* FUNC_2 (struct fs_context*) ;
 int VAR_3 ;
 int FUNC_3 (int *) ;
 struct cgroup* FUNC_4 (int ,TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct dentry*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_7 (struct fs_context*) ;
 struct dentry* FUNC_8 (int ,struct super_block*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct fs_context *VAR_6)
{
 struct cgroup_fs_context *VAR_7 = FUNC_2(VAR_6);
 int VAR_8;

 VAR_7->kfc.root = VAR_7->root->kf_root;
 if (VAR_6->fs_type == &VAR_2)
  VAR_7->kfc.magic = VAR_0;
 else
  VAR_7->kfc.magic = VAR_1;
 VAR_8 = FUNC_7(VAR_6);





 if (!VAR_8 && VAR_7->ns != &VAR_5) {
  struct dentry *VAR_9;
  struct super_block *VAR_10 = VAR_6->root->d_sb;
  struct cgroup *VAR_11;

  FUNC_9(&VAR_3);
  FUNC_11(&VAR_4);

  VAR_11 = FUNC_4(VAR_7->ns->root_cset, VAR_7->root);

  FUNC_12(&VAR_4);
  FUNC_10(&VAR_3);

  VAR_9 = FUNC_8(VAR_11->kn, VAR_10);
  FUNC_6(VAR_6->root);
  VAR_6->root = VAR_9;
  if (FUNC_0(VAR_9)) {
   VAR_8 = FUNC_1(VAR_9);
   FUNC_5(VAR_10);
  }
 }

 if (!VAR_7->kfc.new_sb_created)
  FUNC_3(&VAR_7->root->cgrp);

 return VAR_8;
}
