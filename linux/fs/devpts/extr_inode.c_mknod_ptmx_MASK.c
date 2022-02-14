
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {struct dentry* s_root; } ;
struct pts_mount_opts {int ptmxmode; } ;
struct pts_fs_info {struct dentry* ptmx_dentry; struct pts_mount_opts mount_opts; } ;
struct inode {int i_ino; int i_gid; int i_uid; int i_ctime; int i_atime; int i_mtime; } ;
struct dentry {int dummy; } ;
typedef int kuid_t ;
typedef int kgid_t ;


 struct pts_fs_info* FUNC_0 (struct super_block*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_6 (struct dentry*,char*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct inode*,int,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct inode* FUNC_12 (struct super_block*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static int FUNC_14(struct super_block *VAR_3)
{
 int VAR_4;
 int VAR_5 = -VAR_0;
 struct dentry *VAR_6;
 struct inode *VAR_7;
 struct dentry *VAR_8 = VAR_3->s_root;
 struct pts_fs_info *VAR_9 = FUNC_0(VAR_3);
 struct pts_mount_opts *VAR_10 = &VAR_9->mount_opts;
 kuid_t VAR_11 = FUNC_3();
 kgid_t VAR_12 = FUNC_2();

 FUNC_10(FUNC_7(VAR_8));


 if (VAR_9->ptmx_dentry) {
  VAR_5 = 0;
  goto out;
 }

 VAR_6 = FUNC_6(VAR_8, "ptmx");
 if (!VAR_6) {
  FUNC_13("Unable to alloc dentry for ptmx node\n");
  goto out;
 }




 VAR_7 = FUNC_12(VAR_3);
 if (!VAR_7) {
  FUNC_13("Unable to alloc inode for ptmx node\n");
  FUNC_8(VAR_6);
  goto out;
 }

 VAR_7->i_ino = 2;
 VAR_7->i_mtime = VAR_7->i_atime = VAR_7->i_ctime = FUNC_4(VAR_7);

 VAR_4 = VAR_1|VAR_10->ptmxmode;
 FUNC_9(VAR_7, VAR_4, FUNC_1(VAR_2, 2));
 VAR_7->i_uid = VAR_11;
 VAR_7->i_gid = VAR_12;

 FUNC_5(VAR_6, VAR_7);

 VAR_9->ptmx_dentry = VAR_6;
 VAR_5 = 0;
out:
 FUNC_11(FUNC_7(VAR_8));
 return VAR_5;
}
