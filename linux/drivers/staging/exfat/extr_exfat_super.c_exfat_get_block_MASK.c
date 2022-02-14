
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {unsigned long s_blocksize_bits; } ;
struct inode {unsigned long i_blkbits; struct super_block* i_sb; } ;
struct buffer_head {unsigned long b_size; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {unsigned long mmu_private; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int FUNC_3 (struct inode*,scalar_t__,scalar_t__*,unsigned long*,int*) ;
 int FUNC_4 (struct buffer_head*,struct super_block*,scalar_t__) ;
 unsigned long FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_7(struct inode *VAR_0, sector_t VAR_1,
      struct buffer_head *VAR_2, int VAR_3)
{
 struct super_block *VAR_4 = VAR_0->i_sb;
 unsigned long VAR_5 = VAR_2->b_size >> VAR_0->i_blkbits;
 int VAR_6;
 unsigned long VAR_7;
 sector_t VAR_8;

 FUNC_1(VAR_4);

 VAR_6 = FUNC_3(VAR_0, VAR_1, &VAR_8, &VAR_7, &VAR_3);
 if (VAR_6) {
  FUNC_2(VAR_4);
  return VAR_6;
 }

 if (VAR_8) {
  VAR_5 = FUNC_5(VAR_7, VAR_5);
  if (VAR_3) {
   FUNC_0(VAR_0)->mmu_private += VAR_5 <<
       VAR_4->s_blocksize_bits;
   FUNC_6(VAR_2);
  }
  FUNC_4(VAR_2, VAR_4, VAR_8);
 }

 VAR_2->b_size = VAR_5 << VAR_4->s_blocksize_bits;
 FUNC_2(VAR_4);

 return 0;
}
