
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct kernfs_fs_context {int * ns_tag; } ;
struct fs_context {struct kernfs_fs_context* fs_private; } ;


 int FUNC_0 (struct super_block*,struct fs_context*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0, struct fs_context *VAR_1)
{
 struct kernfs_fs_context *VAR_2 = VAR_1->fs_private;

 VAR_2->ns_tag = ((void*)0);
 return FUNC_0(VAR_0, VAR_1);
}
