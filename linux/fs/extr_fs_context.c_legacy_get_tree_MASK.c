
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct legacy_fs_context {int legacy_data; } ;
struct fs_context {struct dentry* root; int source; int sb_flags; TYPE_1__* fs_type; struct legacy_fs_context* fs_private; } ;
struct dentry {struct super_block* d_sb; } ;
struct TYPE_2__ {struct dentry* (* mount ) (TYPE_1__*,int ,int ,int ) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 struct dentry* FUNC_3 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct fs_context *VAR_0)
{
 struct legacy_fs_context *VAR_1 = VAR_0->fs_private;
 struct super_block *VAR_2;
 struct dentry *VAR_3;

 VAR_3 = VAR_0->fs_type->mount(VAR_0->fs_type, VAR_0->sb_flags,
          VAR_0->source, VAR_1->legacy_data);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 VAR_2 = VAR_3->d_sb;
 FUNC_0(!VAR_2);

 VAR_0->root = VAR_3;
 return 0;
}
