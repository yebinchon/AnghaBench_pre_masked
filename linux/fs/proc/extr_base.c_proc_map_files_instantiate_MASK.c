
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int proc_get_link; } ;
struct proc_inode {TYPE_1__ op; } ;
struct inode {int i_size; int * i_op; } ;
struct dentry {int d_sb; } ;
typedef int fmode_t ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct proc_inode* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct dentry*,int *) ;
 struct dentry* FUNC_3 (struct inode*,struct dentry*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct inode* FUNC_4 (int ,struct task_struct*,int) ;
 int VAR_8 ;

__attribute__((used)) static struct dentry *
FUNC_5(struct dentry *VAR_9,
      struct task_struct *VAR_10, const void *VAR_11)
{
 fmode_t VAR_12 = (fmode_t)(unsigned long)VAR_11;
 struct proc_inode *VAR_13;
 struct inode *VAR_14;

 VAR_14 = FUNC_4(VAR_9->d_sb, VAR_10, VAR_3 |
        ((VAR_12 & VAR_1 ) ? VAR_4 : 0) |
        ((VAR_12 & VAR_2) ? VAR_5 : 0));
 if (!VAR_14)
  return FUNC_0(-VAR_0);

 VAR_13 = FUNC_1(VAR_14);
 VAR_13->op.proc_get_link = VAR_6;

 VAR_14->i_op = &VAR_7;
 VAR_14->i_size = 64;

 FUNC_2(VAR_9, &VAR_8);
 return FUNC_3(VAR_14, VAR_9);
}
