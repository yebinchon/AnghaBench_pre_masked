
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; scalar_t__ __i_nlink; scalar_t__ i_nlink; } ;
struct TYPE_2__ {int s_remove_count; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct inode *VAR_0)
{
 if (VAR_0->i_nlink) {
  VAR_0->__i_nlink = 0;
  FUNC_0(&VAR_0->i_sb->s_remove_count);
 }
}
