
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; int s_blocksize; } ;



__attribute__((used)) static int FUNC_0(struct super_block *VAR_0,
      int VAR_1, int VAR_2)
{




 if (((VAR_1 - VAR_2) >> VAR_0->s_blocksize_bits) !=
     ((VAR_1 - 1) >> VAR_0->s_blocksize_bits))
  VAR_1 -= VAR_1 % VAR_0->s_blocksize;

 return VAR_1;
}
