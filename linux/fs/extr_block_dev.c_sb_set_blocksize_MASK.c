
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; int s_blocksize_bits; int s_bdev; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int) ;

int FUNC_2(struct super_block *VAR_0, int VAR_1)
{
 if (FUNC_1(VAR_0->s_bdev, VAR_1))
  return 0;


 VAR_0->s_blocksize = VAR_1;
 VAR_0->s_blocksize_bits = FUNC_0(VAR_1);
 return VAR_0->s_blocksize;
}
