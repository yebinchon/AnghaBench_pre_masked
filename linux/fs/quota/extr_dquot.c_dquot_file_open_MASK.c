
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct file*) ;

int FUNC_2(struct inode *VAR_1, struct file *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (!VAR_3 && (VAR_2->f_mode & VAR_0))
  VAR_3 = FUNC_0(VAR_1);
 return VAR_3;
}
