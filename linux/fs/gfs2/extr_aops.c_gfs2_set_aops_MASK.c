
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_mapping; } ;
struct TYPE_2__ {int * a_ops; } ;


 int FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;

void FUNC_2(struct inode *VAR_2)
{
 if (FUNC_1(FUNC_0(VAR_2)))
  VAR_2->i_mapping->a_ops = &VAR_1;
 else
  VAR_2->i_mapping->a_ops = &VAR_0;
}
