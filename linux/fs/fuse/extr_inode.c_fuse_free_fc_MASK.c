
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_fs_context {struct fuse_fs_context* subtype; } ;
struct fs_context {struct fuse_fs_context* fs_private; } ;


 int FUNC_0 (struct fuse_fs_context*) ;

__attribute__((used)) static void FUNC_1(struct fs_context *VAR_0)
{
 struct fuse_fs_context *VAR_1 = VAR_0->fs_private;

 if (VAR_1) {
  FUNC_0(VAR_1->subtype);
  FUNC_0(VAR_1);
 }
}
