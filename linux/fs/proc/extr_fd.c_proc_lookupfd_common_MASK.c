
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct inode {int dummy; } ;
struct fd_data {unsigned int fd; int mode; } ;
struct dentry {int d_name; } ;
typedef struct dentry* (* instantiate_t ) (struct dentry*,struct task_struct*,struct fd_data*) ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct task_struct* FUNC_1 (struct inode*) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (struct task_struct*,unsigned int,int *) ;

__attribute__((used)) static struct dentry *FUNC_5(struct inode *VAR_1,
        struct dentry *VAR_2,
        instantiate_t VAR_3)
{
 struct task_struct *VAR_4 = FUNC_1(VAR_1);
 struct fd_data VAR_5 = {.fd = FUNC_2(&VAR_2->d_name)};
 struct dentry *VAR_6 = FUNC_0(-VAR_0);

 if (!VAR_4)
  goto out_no_task;
 if (VAR_5.fd == ~0U)
  goto out;
 if (!FUNC_4(VAR_4, VAR_5.fd, &VAR_5.mode))
  goto out;

 VAR_6 = VAR_3(VAR_2, VAR_4, &VAR_5);
out:
 FUNC_3(VAR_4);
out_no_task:
 return VAR_6;
}
