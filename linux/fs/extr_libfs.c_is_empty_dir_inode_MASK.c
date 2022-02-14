
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int * i_op; int * i_fop; } ;


 int VAR_0 ;
 int VAR_1 ;

bool FUNC_0(struct inode *VAR_2)
{
 return (VAR_2->i_fop == &VAR_1) &&
  (VAR_2->i_op == &VAR_0);
}
