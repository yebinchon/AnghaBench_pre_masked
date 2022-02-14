
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct proc_inode {int op; } ;
struct pid_entry {int op; scalar_t__ fop; scalar_t__ iop; int mode; } ;
struct inode {scalar_t__ i_fop; scalar_t__ i_op; int i_mode; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct proc_inode* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*,int *) ;
 struct dentry* FUNC_4 (struct inode*,struct dentry*) ;
 int VAR_1 ;
 int FUNC_5 (struct task_struct*,struct inode*) ;
 struct inode* FUNC_6 (int ,struct task_struct*,int ) ;
 int FUNC_7 (struct inode*,int) ;

__attribute__((used)) static struct dentry *FUNC_8(struct dentry *VAR_2,
 struct task_struct *VAR_3, const void *VAR_4)
{
 const struct pid_entry *VAR_5 = VAR_4;
 struct inode *VAR_6;
 struct proc_inode *VAR_7;

 VAR_6 = FUNC_6(VAR_2->d_sb, VAR_3, VAR_5->mode);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_7 = FUNC_1(VAR_6);
 if (FUNC_2(VAR_6->i_mode))
  FUNC_7(VAR_6, 2);
 if (VAR_5->iop)
  VAR_6->i_op = VAR_5->iop;
 if (VAR_5->fop)
  VAR_6->i_fop = VAR_5->fop;
 VAR_7->op = VAR_5->op;
 FUNC_5(VAR_3, VAR_6);
 FUNC_3(VAR_2, &VAR_1);
 return FUNC_4(VAR_6, VAR_2);
}
