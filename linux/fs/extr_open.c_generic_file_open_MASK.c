
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;

int FUNC_1(struct inode * VAR_3, struct file * VAR_4)
{
 if (!(VAR_4->f_flags & VAR_2) && FUNC_0(VAR_3) > VAR_1)
  return -VAR_0;
 return 0;
}
