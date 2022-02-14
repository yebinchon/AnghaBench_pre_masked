
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_count; } ;
struct TYPE_4__ {int i_work; } ;
struct TYPE_3__ {int inode_wq; } ;


 scalar_t__ FUNC_0 (int *,int,int) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

void FUNC_4(struct inode *VAR_0)
{
 if (!VAR_0)
  return;
 for (;;) {
  if (FUNC_0(&VAR_0->i_count, -1, 1))
   break;
  if (FUNC_3(FUNC_2(VAR_0)->inode_wq,
          &FUNC_1(VAR_0)->i_work))
   break;

 }
}
