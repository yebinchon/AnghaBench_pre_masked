
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_mode; } ;
struct file {struct dlmfs_filp_private* private_data; } ;
struct dlmfs_inode_private {int ip_lockres; } ;
struct dlmfs_filp_private {int fp_lock_level; } ;


 int FUNC_0 () ;
 struct dlmfs_inode_private* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct dlmfs_filp_private*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1,
         struct file *VAR_2)
{
 int VAR_3;
 struct dlmfs_inode_private *VAR_4 = FUNC_1(VAR_1);
 struct dlmfs_filp_private *VAR_5 = VAR_2->private_data;

 if (FUNC_2(VAR_1->i_mode))
  FUNC_0();

 FUNC_4(0, "close called on inode %lu\n", VAR_1->i_ino);

 if (VAR_5) {
  VAR_3 = VAR_5->fp_lock_level;
  if (VAR_3 != VAR_0)
   FUNC_5(&VAR_4->ip_lockres, VAR_3);

  FUNC_3(VAR_5);
  VAR_2->private_data = ((void*)0);
 }

 return 0;
}
