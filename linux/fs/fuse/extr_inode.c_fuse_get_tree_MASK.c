
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_fs_context {scalar_t__ is_bdev; int group_id_present; int user_id_present; int rootmode_present; int fd_present; } ;
struct fs_context {struct fuse_fs_context* fs_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fs_context*,int ) ;
 int FUNC_1 (struct fs_context*,int ) ;

__attribute__((used)) static int FUNC_2(struct fs_context *VAR_2)
{
 struct fuse_fs_context *VAR_3 = VAR_2->fs_private;

 if (!VAR_3->fd_present || !VAR_3->rootmode_present ||
     !VAR_3->user_id_present || !VAR_3->group_id_present)
  return -VAR_0;






 return FUNC_1(VAR_2, VAR_1);
}
