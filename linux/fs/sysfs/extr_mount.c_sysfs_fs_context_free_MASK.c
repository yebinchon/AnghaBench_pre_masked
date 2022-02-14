
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernfs_fs_context {scalar_t__ ns_tag; } ;
struct fs_context {struct kernfs_fs_context* fs_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct fs_context*) ;
 int FUNC_1 (struct kernfs_fs_context*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct fs_context *VAR_1)
{
 struct kernfs_fs_context *VAR_2 = VAR_1->fs_private;

 if (VAR_2->ns_tag)
  FUNC_2(VAR_0, VAR_2->ns_tag);
 FUNC_0(VAR_1);
 FUNC_1(VAR_2);
}
