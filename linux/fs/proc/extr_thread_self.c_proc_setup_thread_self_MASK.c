
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_root; } ;
struct pid_namespace {struct dentry* proc_thread_self; } ;
struct inode {int i_mode; int * i_op; int i_gid; int i_uid; int i_ctime; int i_atime; int i_mtime; int i_ino; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct dentry*,struct inode*) ;
 struct dentry* FUNC_2 (int ,char*) ;
 struct inode* FUNC_3 (int ) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 struct inode* FUNC_7 (struct super_block*) ;
 int FUNC_8 (char*) ;
 struct pid_namespace* FUNC_9 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;

int FUNC_10(struct super_block *VAR_7)
{
 struct inode *VAR_8 = FUNC_3(VAR_7->s_root);
 struct pid_namespace *VAR_9 = FUNC_9(VAR_8);
 struct dentry *VAR_10;
 int VAR_11 = -VAR_0;

 FUNC_5(VAR_8);
 VAR_10 = FUNC_2(VAR_7->s_root, "thread-self");
 if (VAR_10) {
  struct inode *VAR_12 = FUNC_7(VAR_7);
  if (VAR_12) {
   VAR_12->i_ino = VAR_6;
   VAR_12->i_mtime = VAR_12->i_atime = VAR_12->i_ctime = FUNC_0(VAR_12);
   VAR_12->i_mode = VAR_3 | VAR_4;
   VAR_12->i_uid = VAR_2;
   VAR_12->i_gid = VAR_1;
   VAR_12->i_op = &VAR_5;
   FUNC_1(VAR_10, VAR_12);
   VAR_11 = 0;
  } else {
   FUNC_4(VAR_10);
  }
 }
 FUNC_6(VAR_8);

 if (VAR_11)
  FUNC_8("proc_fill_super: can't allocate /proc/thread_self\n");
 else
  VAR_9->proc_thread_self = VAR_10;

 return VAR_11;
}
