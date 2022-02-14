
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
typedef size_t loff_t ;
struct TYPE_2__ {int s_blocksize; } ;



__attribute__((used)) static int FUNC_0(struct inode *VAR_0, size_t VAR_1, loff_t VAR_2)
{
 int VAR_3 = VAR_0->i_sb->s_blocksize - 1;
 loff_t VAR_4 = VAR_2 + VAR_1;

 if ((VAR_2 & VAR_3) || (VAR_4 & VAR_3))
  return 1;
 return 0;
}
