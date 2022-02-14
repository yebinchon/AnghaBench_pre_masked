
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct file*) ;
 int FUNC_1 (struct inode*) ;
 struct inode* FUNC_2 (struct file*) ;

int FUNC_3(struct file *VAR_0)
{
 int VAR_1;
 struct inode *VAR_2 = FUNC_2(VAR_0);

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 return FUNC_1(VAR_2);
}
