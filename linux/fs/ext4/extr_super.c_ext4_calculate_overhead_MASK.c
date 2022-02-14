
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {unsigned int s_blocksize_bits; } ;
struct inode {unsigned int i_size; } ;
struct ext4_super_block {int s_first_data_block; int s_journal_inum; } ;
struct ext4_sb_info {int s_overhead; TYPE_1__* s_journal; int journal_bdev; struct ext4_super_block* s_es; } ;
typedef scalar_t__ ext4_group_t ;
typedef int ext4_fsblk_t ;
struct TYPE_2__ {unsigned int j_maxlen; } ;


 int VAR_0 ;
 int FUNC_0 (struct ext4_sb_info*,unsigned int) ;
 scalar_t__ FUNC_1 (struct ext4_sb_info*,unsigned int) ;
 struct ext4_sb_info* FUNC_2 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (struct super_block*,scalar_t__,char*) ;
 scalar_t__ FUNC_5 (struct super_block*) ;
 struct inode* FUNC_6 (struct super_block*,unsigned int) ;
 scalar_t__ FUNC_7 (struct super_block*) ;
 int FUNC_8 (struct super_block*,int ,char*) ;
 int FUNC_9 (unsigned long) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct inode*) ;
 unsigned int FUNC_12 (int ) ;
 int FUNC_13 (char*,int ,int ) ;
 int FUNC_14 () ;

int FUNC_15(struct super_block *VAR_4)
{
 struct ext4_sb_info *VAR_5 = FUNC_2(VAR_4);
 struct ext4_super_block *VAR_6 = VAR_5->s_es;
 struct inode *VAR_7;
 unsigned int VAR_8, VAR_9 = FUNC_12(VAR_6->s_journal_inum);
 ext4_group_t VAR_10, VAR_11 = FUNC_5(VAR_4);
 ext4_fsblk_t VAR_12 = 0;
 char *VAR_13 = (char *) FUNC_10(VAR_1);

 if (!VAR_13)
  return -VAR_0;
 VAR_12 = FUNC_0(VAR_5, FUNC_12(VAR_6->s_first_data_block));




 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  int VAR_14;

  VAR_14 = FUNC_4(VAR_4, VAR_10, VAR_13);
  VAR_12 += VAR_14;
  if (VAR_14)
   FUNC_13(VAR_13, 0, VAR_3);
  FUNC_3();
 }





 if (VAR_5->s_journal && !VAR_5->journal_bdev)
  VAR_12 += FUNC_1(VAR_5, VAR_5->s_journal->j_maxlen);
 else if (FUNC_7(VAR_4) && !VAR_5->s_journal) {
  VAR_7 = FUNC_6(VAR_4, VAR_9);
  if (VAR_7) {
   VAR_8 = VAR_7->i_size >> VAR_4->s_blocksize_bits;
   VAR_12 += FUNC_1(VAR_5, VAR_8);
   FUNC_11(VAR_7);
  } else {
   FUNC_8(VAR_4, VAR_2, "can't get journal size");
  }
 }
 VAR_5->s_overhead = VAR_12;
 FUNC_14();
 FUNC_9((unsigned long) VAR_13);
 return 0;
}
