
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_flags; } ;
struct TYPE_2__ {int opencnt; struct inode* rsrc_inode; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct inode*) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 if (FUNC_1(VAR_3))
  VAR_3 = FUNC_0(VAR_3)->rsrc_inode;
 if (!(VAR_4->f_flags & VAR_2) && FUNC_3(VAR_3) > VAR_1)
  return -VAR_0;
 FUNC_2(&FUNC_0(VAR_3)->opencnt);
 return 0;
}
