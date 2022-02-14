
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fs_context {int * ops; struct ffs_sb_fill_data* fs_private; } ;
struct TYPE_2__ {int mode; int gid; int uid; } ;
struct ffs_sb_fill_data {int root_mode; int no_disconnect; TYPE_1__ perms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct ffs_sb_fill_data* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct fs_context *VAR_7)
{
 struct ffs_sb_fill_data *VAR_8;

 VAR_8 = FUNC_0(sizeof(struct ffs_sb_fill_data), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->perms.mode = VAR_5 | 0600;
 VAR_8->perms.uid = VAR_3;
 VAR_8->perms.gid = VAR_2;
 VAR_8->root_mode = VAR_4 | 0500;
 VAR_8->no_disconnect = 0;

 VAR_7->fs_private = VAR_8;
 VAR_7->ops = &VAR_6;
 return 0;
}
