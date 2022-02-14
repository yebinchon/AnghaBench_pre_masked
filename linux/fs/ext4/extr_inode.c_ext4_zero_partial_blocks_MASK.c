
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_blocksize; int s_blocksize_bits; } ;
struct inode {struct address_space* i_mapping; struct super_block* i_sb; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;


 int FUNC_0 (int *,struct address_space*,int,unsigned int) ;

int FUNC_1(handle_t *VAR_0, struct inode *VAR_1,
        loff_t VAR_2, loff_t VAR_3)
{
 struct super_block *VAR_4 = VAR_1->i_sb;
 struct address_space *VAR_5 = VAR_1->i_mapping;
 unsigned VAR_6, VAR_7;
 ext4_fsblk_t VAR_8, VAR_9;
 loff_t VAR_10 = (VAR_2 + VAR_3 - 1);
 int VAR_11 = 0;

 VAR_6 = VAR_2 & (VAR_4->s_blocksize - 1);
 VAR_7 = VAR_10 & (VAR_4->s_blocksize - 1);

 VAR_8 = VAR_2 >> VAR_4->s_blocksize_bits;
 VAR_9 = VAR_10 >> VAR_4->s_blocksize_bits;


 if (VAR_8 == VAR_9 &&
     (VAR_6 || (VAR_7 != VAR_4->s_blocksize - 1))) {
  VAR_11 = FUNC_0(VAR_0, VAR_5,
       VAR_2, VAR_3);
  return VAR_11;
 }

 if (VAR_6) {
  VAR_11 = FUNC_0(VAR_0, VAR_5,
       VAR_2, VAR_4->s_blocksize);
  if (VAR_11)
   return VAR_11;
 }

 if (VAR_7 != VAR_4->s_blocksize - 1)
  VAR_11 = FUNC_0(VAR_0, VAR_5,
       VAR_10 - VAR_7,
       VAR_7 + 1);
 return VAR_11;
}
