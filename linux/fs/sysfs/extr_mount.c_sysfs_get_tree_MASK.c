
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kernfs_fs_context {scalar_t__ new_sb_created; } ;
struct fs_context {TYPE_2__* root; struct kernfs_fs_context* fs_private; } ;
struct TYPE_4__ {TYPE_1__* d_sb; } ;
struct TYPE_3__ {int s_iflags; } ;


 int VAR_0 ;
 int FUNC_0 (struct fs_context*) ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_1)
{
 struct kernfs_fs_context *VAR_2 = VAR_1->fs_private;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  return VAR_3;

 if (VAR_2->new_sb_created)
  VAR_1->root->d_sb->s_iflags |= VAR_0;
 return 0;
}
