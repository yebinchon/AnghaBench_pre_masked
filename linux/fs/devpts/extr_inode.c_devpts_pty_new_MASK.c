
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct dentry* s_root; } ;
struct pts_mount_opts {int mode; int gid; scalar_t__ setgid; int uid; scalar_t__ setuid; } ;
struct pts_fs_info {struct pts_mount_opts mount_opts; struct super_block* sb; } ;
struct inode {int i_ino; int i_ctime; int i_atime; int i_mtime; int i_gid; int i_uid; } ;
struct dentry {void* d_fsdata; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_6 (struct dentry*,char*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (int ,struct dentry*) ;
 int FUNC_9 (struct inode*,int,int ) ;
 int FUNC_10 (struct inode*) ;
 struct inode* FUNC_11 (struct super_block*) ;
 int FUNC_12 (char*,char*,int) ;

struct dentry *FUNC_13(struct pts_fs_info *VAR_3, int VAR_4, void *VAR_5)
{
 struct dentry *VAR_6;
 struct super_block *VAR_7 = VAR_3->sb;
 struct inode *VAR_8;
 struct dentry *VAR_9;
 struct pts_mount_opts *VAR_10;
 char VAR_11[12];

 VAR_9 = VAR_7->s_root;
 VAR_10 = &VAR_3->mount_opts;

 VAR_8 = FUNC_11(VAR_7);
 if (!VAR_8)
  return FUNC_0(-VAR_0);

 VAR_8->i_ino = VAR_4 + 3;
 VAR_8->i_uid = VAR_10->setuid ? VAR_10->uid : FUNC_3();
 VAR_8->i_gid = VAR_10->setgid ? VAR_10->gid : FUNC_2();
 VAR_8->i_mtime = VAR_8->i_atime = VAR_8->i_ctime = FUNC_4(VAR_8);
 FUNC_9(VAR_8, VAR_1|VAR_10->mode, FUNC_1(VAR_2, VAR_4));

 FUNC_12(VAR_11, "%d", VAR_4);

 VAR_6 = FUNC_6(VAR_9, VAR_11);
 if (VAR_6) {
  VAR_6->d_fsdata = VAR_5;
  FUNC_5(VAR_6, VAR_8);
  FUNC_8(FUNC_7(VAR_9), VAR_6);
 } else {
  FUNC_10(VAR_8);
  VAR_6 = FUNC_0(-VAR_0);
 }

 return VAR_6;
}
