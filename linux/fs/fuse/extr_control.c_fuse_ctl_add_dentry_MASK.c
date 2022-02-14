
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode_operations {int dummy; } ;
struct inode {int i_mode; struct fuse_conn* i_private; struct file_operations const* i_fop; struct inode_operations const* i_op; int i_ctime; int i_mtime; int i_atime; int i_gid; int i_uid; int i_ino; } ;
struct fuse_conn {scalar_t__ ctl_ndents; struct dentry** ctl_dentry; int group_id; int user_id; } ;
struct file_operations {int dummy; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct inode*) ;
 int FUNC_2 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_3 (struct dentry*,char const*) ;
 int FUNC_4 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_5 () ;
 struct inode* FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,int) ;

__attribute__((used)) static struct dentry *FUNC_8(struct dentry *VAR_2,
       struct fuse_conn *VAR_3,
       const char *VAR_4,
       int VAR_5, int VAR_6,
       const struct inode_operations *VAR_7,
       const struct file_operations *VAR_8)
{
 struct dentry *VAR_9;
 struct inode *VAR_10;

 FUNC_0(VAR_3->ctl_ndents >= VAR_0);
 VAR_9 = FUNC_3(VAR_2, VAR_4);
 if (!VAR_9)
  return ((void*)0);

 VAR_10 = FUNC_6(VAR_1);
 if (!VAR_10) {
  FUNC_4(VAR_9);
  return ((void*)0);
 }

 VAR_10->i_ino = FUNC_5();
 VAR_10->i_mode = VAR_5;
 VAR_10->i_uid = VAR_3->user_id;
 VAR_10->i_gid = VAR_3->group_id;
 VAR_10->i_atime = VAR_10->i_mtime = VAR_10->i_ctime = FUNC_1(VAR_10);

 if (VAR_7)
  VAR_10->i_op = VAR_7;
 VAR_10->i_fop = VAR_8;
 FUNC_7(VAR_10, VAR_6);
 VAR_10->i_private = VAR_3;
 FUNC_2(VAR_9, VAR_10);

 VAR_3->ctl_dentry[VAR_3->ctl_ndents++] = VAR_9;

 return VAR_9;
}
