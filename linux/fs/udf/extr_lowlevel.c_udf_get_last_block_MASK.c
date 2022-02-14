
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {unsigned long s_blocksize_bits; struct block_device* s_bdev; } ;
struct block_device {int bd_inode; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct block_device*,int ,unsigned long) ;

unsigned long FUNC_2(struct super_block *VAR_1)
{
 struct block_device *VAR_2 = VAR_1->s_bdev;
 unsigned long VAR_3 = 0;





 if (FUNC_1(VAR_2, VAR_0, (unsigned long) &VAR_3) ||
     VAR_3 == 0)
  VAR_3 = FUNC_0(VAR_2->bd_inode) >> VAR_1->s_blocksize_bits;

 if (VAR_3)
  return VAR_3 - 1;
 else
  return 0;
}
