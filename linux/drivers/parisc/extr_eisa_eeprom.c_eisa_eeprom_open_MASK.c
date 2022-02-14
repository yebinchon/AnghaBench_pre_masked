
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct inode *VAR_2, struct file *VAR_3)
{
 if (VAR_3->f_mode & VAR_1)
  return -VAR_0;

 return 0;
}
