
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {TYPE_1__* i_sb; } ;
typedef int sector_t ;
struct TYPE_2__ {int s_blocksize_bits; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, sector_t VAR_2)
{

 if (FUNC_0(VAR_1) != VAR_0 ||

     VAR_2 < (1 << (31 - VAR_1->i_sb->s_blocksize_bits)))
  return 1;

 return 0;
}
