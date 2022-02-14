
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int opencnt; struct inode* rsrc_inode; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_0, struct file *VAR_1)
{


 if (FUNC_1(VAR_0))
  VAR_0 = FUNC_0(VAR_0)->rsrc_inode;
 if (FUNC_2(&FUNC_0(VAR_0)->opencnt)) {
  FUNC_4(VAR_0);
  FUNC_3(VAR_0);




  FUNC_5(VAR_0);
 }
 return 0;
}
