
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct proc_inode {int sysctl_inodes; struct ctl_table* sysctl_entry; struct ctl_table_header* sysctl; } ;
struct inode {int i_gid; int i_uid; int * i_fop; int * i_op; int i_mode; int i_ctime; int i_atime; int i_mtime; int i_ino; } ;
struct ctl_table_root {int (* set_ownership ) (struct ctl_table_header*,struct ctl_table*,int *,int *) ;} ;
struct ctl_table_header {int count; int inodes; int unregistering; struct ctl_table_root* root; } ;
struct ctl_table {int mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct proc_inode* FUNC_1 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct inode*) ;
 scalar_t__ FUNC_7 (struct ctl_table_header*) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (struct super_block*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ctl_table_header*,struct ctl_table*,int *,int *) ;
 int VAR_10 ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static struct inode *FUNC_14(struct super_block *VAR_11,
  struct ctl_table_header *VAR_12, struct ctl_table *VAR_13)
{
 struct ctl_table_root *VAR_14 = VAR_12->root;
 struct inode *VAR_15;
 struct proc_inode *VAR_16;

 VAR_15 = FUNC_9(VAR_11);
 if (!VAR_15)
  return FUNC_0(-VAR_1);

 VAR_15->i_ino = FUNC_4();

 VAR_16 = FUNC_1(VAR_15);

 FUNC_10(&VAR_10);
 if (FUNC_13(VAR_12->unregistering)) {
  FUNC_11(&VAR_10);
  FUNC_6(VAR_15);
  return FUNC_0(-VAR_0);
 }
 VAR_16->sysctl = VAR_12;
 VAR_16->sysctl_entry = VAR_13;
 FUNC_5(&VAR_16->sysctl_inodes, &VAR_12->inodes);
 VAR_12->count++;
 FUNC_11(&VAR_10);

 VAR_15->i_mtime = VAR_15->i_atime = VAR_15->i_ctime = FUNC_3(VAR_15);
 VAR_15->i_mode = VAR_13->mode;
 if (!FUNC_2(VAR_13->mode)) {
  VAR_15->i_mode |= VAR_5;
  VAR_15->i_op = &VAR_9;
  VAR_15->i_fop = &VAR_8;
 } else {
  VAR_15->i_mode |= VAR_4;
  VAR_15->i_op = &VAR_7;
  VAR_15->i_fop = &VAR_6;
  if (FUNC_7(VAR_12))
   FUNC_8(VAR_15);
 }

 if (VAR_14->set_ownership)
  VAR_14->set_ownership(VAR_12, VAR_13, &VAR_15->i_uid, &VAR_15->i_gid);
 else {
  VAR_15->i_uid = VAR_3;
  VAR_15->i_gid = VAR_2;
 }

 return VAR_15;
}
