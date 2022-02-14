
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int busy; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,void*) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_3, struct file *VAR_4)
{
 FUNC_0(&VAR_2);
 if (FUNC_2(0, (void *)&VAR_1.busy) != 0) {
  FUNC_1(&VAR_2);
  return -VAR_0;
 }

 FUNC_1(&VAR_2);
 return 0;
}
