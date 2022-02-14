
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tracefs_mount_opts {int gid; int uid; int mode; } ;
struct tracefs_fs_info {struct tracefs_mount_opts mount_opts; } ;
struct super_block {TYPE_1__* s_root; struct tracefs_fs_info* s_fs_info; } ;
struct inode {int i_gid; int i_uid; int i_mode; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct super_block *VAR_1)
{
 struct tracefs_fs_info *VAR_2 = VAR_1->s_fs_info;
 struct inode *VAR_3 = VAR_1->s_root->d_inode;
 struct tracefs_mount_opts *VAR_4 = &VAR_2->mount_opts;

 VAR_3->i_mode &= ~VAR_0;
 VAR_3->i_mode |= VAR_4->mode;

 VAR_3->i_uid = VAR_4->uid;
 VAR_3->i_gid = VAR_4->gid;

 return 0;
}
