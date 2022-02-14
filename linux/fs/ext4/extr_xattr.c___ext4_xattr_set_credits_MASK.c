
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {size_t s_blocksize; size_t s_blocksize_bits; } ;
struct inode {int dummy; } ;
struct ext4_xattr_entry {scalar_t__ e_value_inum; } ;
struct buffer_head {int dummy; } ;


 struct ext4_xattr_entry* FUNC_0 (struct buffer_head*) ;
 scalar_t__ FUNC_1 (struct super_block*) ;
 struct ext4_xattr_entry* FUNC_2 (struct ext4_xattr_entry*) ;
 int FUNC_3 (struct ext4_xattr_entry*) ;
 int VAR_0 ;
 int FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 scalar_t__ FUNC_6 (struct inode*) ;

int FUNC_7(struct super_block *VAR_1, struct inode *VAR_2,
        struct buffer_head *VAR_3, size_t VAR_4,
        bool VAR_5)
{
 int VAR_6;
 int VAR_7;
 VAR_6 = 7;


 VAR_6 += FUNC_1(VAR_1);





 if (VAR_2 && FUNC_5(VAR_2))
  VAR_6 += FUNC_6(VAR_2) + 1;


 if (!FUNC_4(VAR_1))
  return VAR_6;


 VAR_6 += 4;


 VAR_7 = (VAR_4 + VAR_1->s_blocksize - 1) >> VAR_1->s_blocksize_bits;


 VAR_7 += 1;


 VAR_6 += VAR_7 * 2;


 VAR_6 += VAR_7;

 if (!VAR_5) {



  VAR_6 += 4;


  VAR_7 = VAR_0 >> VAR_1->s_blocksize_bits;




  VAR_7 += 1;


  VAR_6 += VAR_7 * 2;
 }




 if (VAR_3) {
  struct ext4_xattr_entry *VAR_8 = FUNC_0(VAR_3);

  for (; !FUNC_3(VAR_8); VAR_8 = FUNC_2(VAR_8))
   if (VAR_8->e_value_inum)

    VAR_6 += 1;
 }
 return VAR_6;
}
