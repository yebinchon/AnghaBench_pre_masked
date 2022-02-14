
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; unsigned int __i_nlink; TYPE_1__* i_sb; } ;
struct TYPE_2__ {int s_remove_count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct inode*) ;

void FUNC_2(struct inode *VAR_0, unsigned int VAR_1)
{
 if (!VAR_1) {
  FUNC_1(VAR_0);
 } else {

  if (VAR_0->i_nlink == 0)
   FUNC_0(&VAR_0->i_sb->s_remove_count);

  VAR_0->__i_nlink = VAR_1;
 }
}
