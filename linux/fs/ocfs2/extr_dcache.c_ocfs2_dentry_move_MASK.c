
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct inode {int i_sb; } ;
struct dentry {int * d_fsdata; } ;
struct TYPE_2__ {int ip_blkno; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 struct ocfs2_super* FUNC_1 (int ) ;
 struct inode* FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*,struct dentry*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct dentry*,struct inode*,int ) ;
 int FUNC_6 (struct ocfs2_super*,int *) ;

void FUNC_7(struct dentry *VAR_0, struct dentry *VAR_1,
         struct inode *VAR_2, struct inode *VAR_3)
{
 int VAR_4;
 struct ocfs2_super *VAR_5 = FUNC_1(VAR_2->i_sb);
 struct inode *VAR_6 = FUNC_2(VAR_0);







 if (VAR_2 == VAR_3)
  goto out_move;

 FUNC_6(VAR_5, VAR_0->d_fsdata);

 VAR_0->d_fsdata = ((void*)0);
 VAR_4 = FUNC_5(VAR_0, VAR_6, FUNC_0(VAR_3)->ip_blkno);
 if (VAR_4)
  FUNC_4(VAR_4);

out_move:
 FUNC_3(VAR_0, VAR_1);
}
