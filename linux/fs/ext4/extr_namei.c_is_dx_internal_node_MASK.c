
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_blocksize; } ;
struct inode {struct super_block* i_sb; } ;
struct ext4_dir_entry {scalar_t__ inode; int rec_len; } ;
typedef scalar_t__ ext4_lblk_t ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct inode*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, ext4_lblk_t VAR_1,
          struct ext4_dir_entry *VAR_2)
{
 struct super_block *VAR_3 = VAR_0->i_sb;

 if (!FUNC_1(VAR_0))
  return 0;
 if (VAR_1 == 0)
  return 1;
 if (VAR_2->inode == 0 &&
     FUNC_0(VAR_2->rec_len, VAR_3->s_blocksize) ==
   VAR_3->s_blocksize)
  return 1;
 return 0;
}
