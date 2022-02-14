
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {unsigned long s_blocksize_bits; } ;
struct inode {unsigned long i_blkbits; struct super_block* i_sb; } ;
struct buffer_head {unsigned long b_size; } ;
typedef int sector_t ;


 int FUNC_0 (struct inode*,int ,unsigned long*,struct buffer_head*,int) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, sector_t VAR_1,
    struct buffer_head *VAR_2, int VAR_3)
{
 struct super_block *VAR_4 = VAR_0->i_sb;
 unsigned long VAR_5 = VAR_2->b_size >> VAR_0->i_blkbits;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_1, &VAR_5, VAR_2, VAR_3);
 if (VAR_6)
  return VAR_6;
 VAR_2->b_size = VAR_5 << VAR_4->s_blocksize_bits;
 return 0;
}
