
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {unsigned long s_blocksize_bits; } ;
struct inode {unsigned long i_blkbits; struct super_block* i_sb; } ;
struct buffer_head {unsigned long b_size; } ;
typedef scalar_t__ sector_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct inode*,scalar_t__,scalar_t__*,unsigned long*,int,int) ;
 int FUNC_2 (struct buffer_head*,struct super_block*,scalar_t__) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_0, sector_t VAR_1,
  struct buffer_head *VAR_2, int VAR_3)
{
 struct super_block *VAR_4 = VAR_0->i_sb;
 unsigned long VAR_5 = VAR_2->b_size >> VAR_0->i_blkbits;
 int VAR_6;
 sector_t VAR_7;
 unsigned long VAR_8;

 FUNC_0(VAR_3 != 0);

 VAR_6 = FUNC_1(VAR_0, VAR_1, &VAR_7, &VAR_8, VAR_3, 1);
 if (VAR_6)
  return VAR_6;

 if (VAR_7) {
  FUNC_2(VAR_2, VAR_4, VAR_7);
  VAR_5 = FUNC_3(VAR_8, VAR_5);
 }

 VAR_2->b_size = VAR_5 << VAR_4->s_blocksize_bits;

 return 0;
}
