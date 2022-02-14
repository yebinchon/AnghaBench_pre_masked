
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,struct file*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct file *VAR_2)
{
 VAR_2->f_mode |= VAR_0;
 return FUNC_0(VAR_1, VAR_2);
}
