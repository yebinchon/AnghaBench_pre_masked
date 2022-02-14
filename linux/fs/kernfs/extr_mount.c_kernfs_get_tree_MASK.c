
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_root; int s_flags; } ;
struct kernfs_super_info {TYPE_1__* root; int node; int ns; } ;
struct kernfs_fs_context {int new_sb_created; int ns_tag; TYPE_1__* root; } ;
struct fs_context {int root; struct kernfs_super_info* s_fs_info; struct kernfs_fs_context* fs_private; } ;
struct TYPE_2__ {int supers; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int VAR_2 ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct super_block*,struct kernfs_fs_context*) ;
 struct kernfs_super_info* FUNC_6 (struct super_block*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct kernfs_super_info* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct super_block* FUNC_11 (struct fs_context*,int ,int ) ;

int FUNC_12(struct fs_context *VAR_6)
{
 struct kernfs_fs_context *VAR_7 = VAR_6->fs_private;
 struct super_block *VAR_8;
 struct kernfs_super_info *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_7(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->root = VAR_7->root;
 VAR_9->ns = VAR_7->ns_tag;
 FUNC_0(&VAR_9->node);

 VAR_6->s_fs_info = VAR_9;
 VAR_8 = FUNC_11(VAR_6, VAR_5, VAR_4);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 if (!VAR_8->s_root) {
  struct kernfs_super_info *VAR_11 = FUNC_6(VAR_8);

  VAR_7->new_sb_created = 1;

  VAR_10 = FUNC_5(VAR_8, VAR_7);
  if (VAR_10) {
   FUNC_3(VAR_8);
   return VAR_10;
  }
  VAR_8->s_flags |= VAR_2;

  FUNC_9(&VAR_3);
  FUNC_8(&VAR_11->node, &VAR_11->root->supers);
  FUNC_10(&VAR_3);
 }

 VAR_6->root = FUNC_4(VAR_8->s_root);
 return 0;
}
