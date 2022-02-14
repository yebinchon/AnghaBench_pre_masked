
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
typedef int fl_owner_t ;
struct TYPE_2__ {scalar_t__ inmem_task; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 struct inode* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, fl_owner_t VAR_2)
{
 struct inode *VAR_3 = FUNC_3(VAR_1);







 if (FUNC_2(VAR_3) &&
   FUNC_0(VAR_3)->inmem_task == VAR_0)
  FUNC_1(VAR_3);
 return 0;
}
