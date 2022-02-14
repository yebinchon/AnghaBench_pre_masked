
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
struct super_block {int dummy; } ;
struct inode {int * i_fop; int * i_op; int i_ctime; int i_mtime; int i_atime; int i_ino; struct super_block* i_sb; } ;
struct dlmfs_inode_private {int ip_parent; int ip_lockres; int ip_conn; } ;
struct dentry {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 struct dlmfs_inode_private* FUNC_2 (struct inode*) ;
 int VAR_0 ;

 int VAR_1 ;

 int FUNC_3 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (struct inode*,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct inode*,struct inode*,int) ;
 struct inode* FUNC_9 (struct super_block*) ;
 int VAR_5 ;
 int FUNC_10 (int *,struct dentry*) ;

__attribute__((used)) static struct inode *FUNC_11(struct inode *VAR_6,
         struct dentry *VAR_7,
         umode_t VAR_8)
{
 struct super_block *VAR_9 = VAR_6->i_sb;
 struct inode * VAR_10 = FUNC_9(VAR_9);
 struct dlmfs_inode_private *VAR_11;

 if (!VAR_10)
  return ((void*)0);

 VAR_10->i_ino = FUNC_4();
 FUNC_8(VAR_10, VAR_6, VAR_8);
 VAR_10->i_atime = VAR_10->i_mtime = VAR_10->i_ctime = FUNC_3(VAR_10);

 VAR_11 = FUNC_2(VAR_10);
 VAR_11->ip_conn = FUNC_2(VAR_6)->ip_conn;

 switch (VAR_8 & VAR_1) {
 default:


  FUNC_0();
  break;
 case 128:
  VAR_10->i_op = &VAR_3;
  VAR_10->i_fop = &VAR_4;

  FUNC_5(VAR_10, VAR_0);

  FUNC_10(&VAR_11->ip_lockres, VAR_7);





  VAR_11->ip_parent = FUNC_6(VAR_6);
  FUNC_1(!VAR_11->ip_parent);
  break;
 case 129:
  VAR_10->i_op = &VAR_2;
  VAR_10->i_fop = &VAR_5;



  FUNC_7(VAR_10);
  break;
 }
 return VAR_10;
}
