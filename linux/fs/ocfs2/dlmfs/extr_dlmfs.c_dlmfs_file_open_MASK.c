
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_ino; int i_mode; } ;
struct file {struct dlmfs_filp_private* private_data; int f_flags; } ;
struct dlmfs_inode_private {int ip_lockres; } ;
struct dlmfs_filp_private {int fp_lock_level; } ;


 int FUNC_0 () ;
 struct dlmfs_inode_private* FUNC_1 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int*) ;
 int FUNC_4 (struct dlmfs_filp_private*) ;
 struct dlmfs_filp_private* FUNC_5 (int,int ) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int *,int,int) ;

__attribute__((used)) static int FUNC_8(struct inode *VAR_6,
      struct file *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 struct dlmfs_filp_private *VAR_11 = ((void*)0);
 struct dlmfs_inode_private *VAR_12;

 if (FUNC_2(VAR_6->i_mode))
  FUNC_0();

 FUNC_6(0, "open called on inode %lu, flags 0x%x\n", VAR_6->i_ino,
  VAR_7->f_flags);

 VAR_8 = FUNC_3(VAR_7->f_flags, &VAR_9, &VAR_10);
 if (VAR_8 < 0)
  goto bail;



 VAR_7->f_flags &= ~VAR_5;

 VAR_11 = FUNC_5(sizeof(*VAR_11), VAR_4);
 if (!VAR_11) {
  VAR_8 = -VAR_2;
  goto bail;
 }
 VAR_11->fp_lock_level = VAR_9;

 VAR_12 = FUNC_1(VAR_6);

 VAR_8 = FUNC_7(&VAR_12->ip_lockres, VAR_9, VAR_10);
 if (VAR_8 < 0) {




  if (VAR_10 & VAR_0 && VAR_8 == -VAR_1)
   VAR_8 = -VAR_3;
  FUNC_4(VAR_11);
  goto bail;
 }

 VAR_7->private_data = VAR_11;
bail:
 return VAR_8;
}
