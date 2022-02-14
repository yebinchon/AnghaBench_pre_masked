
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fuse_fs_context {int is_bdev; int destroy; int blksize; int max_read; } ;
struct fs_context {int * ops; struct fuse_fs_context* fs_private; int * fs_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fuse_fs_context* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_5)
{
 struct fuse_fs_context *VAR_6;

 VAR_6 = FUNC_0(sizeof(struct fuse_fs_context), VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->max_read = ~0;
 VAR_6->blksize = VAR_1;
 VAR_5->fs_private = VAR_6;
 VAR_5->ops = &VAR_3;
 return 0;
}
