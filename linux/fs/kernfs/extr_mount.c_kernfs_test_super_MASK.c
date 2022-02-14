
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct kernfs_super_info {scalar_t__ root; scalar_t__ ns; } ;
struct fs_context {struct kernfs_super_info* s_fs_info; } ;


 struct kernfs_super_info* FUNC_0 (struct super_block*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0, struct fs_context *VAR_1)
{
 struct kernfs_super_info *VAR_2 = FUNC_0(VAR_0);
 struct kernfs_super_info *VAR_3 = VAR_1->s_fs_info;

 return VAR_2->root == VAR_3->root && VAR_2->ns == VAR_3->ns;
}
