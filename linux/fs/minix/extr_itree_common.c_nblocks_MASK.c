
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize_bits; int s_blocksize; } ;
typedef int loff_t ;
typedef int block_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static inline unsigned FUNC_0(loff_t VAR_3, struct super_block *VAR_4)
{
 int VAR_5 = VAR_4->s_blocksize_bits - 10;
 unsigned VAR_6, VAR_7, VAR_8 = VAR_2, VAR_9 = VAR_1;
 VAR_6 = (VAR_3 + VAR_4->s_blocksize - 1) >> (VAR_0 + VAR_5);
 VAR_7 = VAR_6;
 while (--VAR_9 && VAR_6 > VAR_8) {
  VAR_6 -= VAR_8;
  VAR_6 += VAR_4->s_blocksize/sizeof(block_t) - 1;
  VAR_6 /= VAR_4->s_blocksize/sizeof(block_t);
  VAR_7 += VAR_6;
  VAR_8 = 1;
 }
 return VAR_7;
}
