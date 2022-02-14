
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_0(struct inode *VAR_5, struct file *VAR_6)
{
 VAR_6->f_mode &= ~(VAR_1 | VAR_2 | VAR_3 | VAR_0);
 VAR_6->f_mode |= VAR_4;
 return 0;
}
