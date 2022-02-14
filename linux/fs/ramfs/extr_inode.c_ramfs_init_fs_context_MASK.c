
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct ramfs_fs_info {TYPE_1__ mount_opts; } ;
struct fs_context {int * ops; struct ramfs_fs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ramfs_fs_info* FUNC_0 (int,int ) ;
 int VAR_3 ;

int FUNC_1(struct fs_context *VAR_4)
{
 struct ramfs_fs_info *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->mount_opts.mode = VAR_2;
 VAR_4->s_fs_info = VAR_5;
 VAR_4->ops = &VAR_3;
 return 0;
}
