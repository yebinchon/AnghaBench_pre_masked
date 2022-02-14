
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct inode {int i_flags; int * i_fop; int * i_op; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct dentry*,int *) ;
 struct dentry* FUNC_2 (struct inode*,struct dentry*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct task_struct*,struct inode*) ;
 struct inode* FUNC_4 (int ,struct task_struct*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct inode*,int ) ;

__attribute__((used)) static struct dentry *FUNC_6(struct dentry * VAR_9,
       struct task_struct *VAR_10, const void *VAR_11)
{
 struct inode *VAR_12;

 VAR_12 = FUNC_4(VAR_9->d_sb, VAR_10, VAR_1 | VAR_3 | VAR_4);
 if (!VAR_12)
  return FUNC_0(-VAR_0);

 VAR_12->i_op = &VAR_7;
 VAR_12->i_fop = &VAR_8;
 VAR_12->i_flags|=VAR_2;

 FUNC_5(VAR_12, VAR_5);
 FUNC_3(VAR_10, VAR_12);

 FUNC_1(VAR_9, &VAR_6);
 return FUNC_2(VAR_12, VAR_9);
}
