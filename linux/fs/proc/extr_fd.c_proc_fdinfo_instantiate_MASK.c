
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct proc_inode {int fd; } ;
struct inode {int * i_fop; } ;
struct fd_data {int fd; } ;
struct dentry {int d_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct proc_inode* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct dentry*,int *) ;
 struct dentry* FUNC_3 (struct inode*,struct dentry*) ;
 int VAR_3 ;
 struct inode* FUNC_4 (int ,struct task_struct*,int) ;
 int VAR_4 ;
 int FUNC_5 (struct task_struct*,struct inode*,int ) ;

__attribute__((used)) static struct dentry *FUNC_6(struct dentry *VAR_5,
 struct task_struct *VAR_6, const void *VAR_7)
{
 const struct fd_data *VAR_8 = VAR_7;
 struct proc_inode *VAR_9;
 struct inode *VAR_10;

 VAR_10 = FUNC_4(VAR_5->d_sb, VAR_6, VAR_1 | VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_1(VAR_10);
 VAR_9->fd = VAR_8->fd;

 VAR_10->i_fop = &VAR_3;
 FUNC_5(VAR_6, VAR_10, 0);

 FUNC_2(VAR_5, &VAR_4);
 return FUNC_3(VAR_10, VAR_5);
}
