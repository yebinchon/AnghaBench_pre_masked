
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct dentry* dentry; } ;
struct file {int f_mode; TYPE_1__ f_path; } ;
struct dentry {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct file*,int ,int (*) (struct inode*,struct file*)) ;

int FUNC_3(struct file *VAR_1, struct dentry *VAR_2,
  int (*VAR_3)(struct inode *, struct file *))
{
 FUNC_0(VAR_1->f_mode & VAR_0);

 VAR_1->f_path.dentry = VAR_2;
 return FUNC_2(VAR_1, FUNC_1(VAR_2), VAR_3);
}
