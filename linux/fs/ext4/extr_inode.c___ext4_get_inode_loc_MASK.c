
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_ino; struct super_block* i_sb; } ;
struct ext4_iloc {int block_group; int offset; struct buffer_head* bh; } ;
struct ext4_group_desc {int dummy; } ;
struct buffer_head {int b_end_io; int b_size; int b_data; } ;
struct blk_plug {int dummy; } ;
typedef unsigned int ext4_fsblk_t ;
typedef unsigned int __u32 ;
struct TYPE_4__ {int s_inodes_per_block; unsigned int s_inode_readahead_blks; TYPE_1__* s_es; } ;
struct TYPE_3__ {int s_inodes_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*,unsigned int,char*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;
 int VAR_3 ;
 TYPE_2__* FUNC_3 (struct super_block*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct blk_plug*) ;
 int FUNC_5 (struct blk_plug*) ;
 int FUNC_6 (struct buffer_head*) ;
 scalar_t__ FUNC_7 (struct buffer_head*) ;
 scalar_t__ FUNC_8 (struct buffer_head*) ;
 int VAR_7 ;
 struct ext4_group_desc* FUNC_9 (struct super_block*,int,int *) ;
 scalar_t__ FUNC_10 (struct super_block*) ;
 unsigned int FUNC_11 (struct super_block*,struct ext4_group_desc*) ;
 unsigned int FUNC_12 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_13 (struct super_block*,struct ext4_group_desc*) ;
 scalar_t__ FUNC_14 (int,int ) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct buffer_head*) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (struct super_block*,int ) ;
 struct buffer_head* FUNC_20 (struct super_block*,unsigned int) ;
 int FUNC_21 (struct buffer_head*) ;
 int FUNC_22 (int ,int,struct buffer_head*) ;
 int FUNC_23 (struct inode*) ;
 scalar_t__ FUNC_24 (int) ;
 int FUNC_25 (struct buffer_head*) ;
 int FUNC_26 (struct buffer_head*) ;

__attribute__((used)) static int FUNC_27(struct inode *VAR_8,
    struct ext4_iloc *VAR_9, int VAR_10)
{
 struct ext4_group_desc *VAR_11;
 struct buffer_head *VAR_12;
 struct super_block *VAR_13 = VAR_8->i_sb;
 ext4_fsblk_t VAR_14;
 struct blk_plug VAR_15;
 int VAR_16, VAR_17;

 VAR_9->bh = ((void*)0);
 if (VAR_8->i_ino < VAR_3 ||
     VAR_8->i_ino > FUNC_16(FUNC_3(VAR_13)->s_es->s_inodes_count))
  return -VAR_0;

 VAR_9->block_group = (VAR_8->i_ino - 1) / FUNC_1(VAR_13);
 VAR_11 = FUNC_9(VAR_13, VAR_9->block_group, ((void*)0));
 if (!VAR_11)
  return -VAR_1;




 VAR_16 = FUNC_3(VAR_13)->s_inodes_per_block;
 VAR_17 = ((VAR_8->i_ino - 1) %
   FUNC_1(VAR_13));
 VAR_14 = FUNC_12(VAR_13, VAR_11) + (VAR_17 / VAR_16);
 VAR_9->offset = (VAR_17 % VAR_16) * FUNC_2(VAR_13);

 VAR_12 = FUNC_20(VAR_13, VAR_14);
 if (FUNC_24(!VAR_12))
  return -VAR_2;
 if (!FUNC_7(VAR_12)) {
  FUNC_17(VAR_12);







  if (FUNC_8(VAR_12) && !FUNC_7(VAR_12))
   FUNC_21(VAR_12);

  if (FUNC_7(VAR_12)) {

   FUNC_25(VAR_12);
   goto has_buffer;
  }






  if (VAR_10) {
   struct buffer_head *VAR_18;
   int VAR_19, VAR_20;

   VAR_20 = VAR_17 & ~(VAR_16 - 1);


   VAR_18 = FUNC_20(VAR_13, FUNC_11(VAR_13, VAR_11));
   if (FUNC_24(!VAR_18))
    goto make_io;






   if (!FUNC_7(VAR_18)) {
    FUNC_6(VAR_18);
    goto make_io;
   }
   for (VAR_19 = VAR_20; VAR_19 < VAR_20 + VAR_16; VAR_19++) {
    if (VAR_19 == VAR_17)
     continue;
    if (FUNC_14(VAR_19, VAR_18->b_data))
     break;
   }
   FUNC_6(VAR_18);
   if (VAR_19 == VAR_20 + VAR_16) {

    FUNC_18(VAR_12->b_data, 0, VAR_12->b_size);
    FUNC_21(VAR_12);
    FUNC_25(VAR_12);
    goto has_buffer;
   }
  }

make_io:




  FUNC_5(&VAR_15);
  if (FUNC_3(VAR_13)->s_inode_readahead_blks) {
   ext4_fsblk_t VAR_21, VAR_22, VAR_23;
   unsigned VAR_24;
   __u32 VAR_25 = FUNC_3(VAR_13)->s_inode_readahead_blks;

   VAR_23 = FUNC_12(VAR_13, VAR_11);

   VAR_21 = VAR_14 & ~((ext4_fsblk_t) VAR_25 - 1);
   if (VAR_23 > VAR_21)
    VAR_21 = VAR_23;
   VAR_22 = VAR_21 + VAR_25;
   VAR_24 = FUNC_1(VAR_13);
   if (FUNC_10(VAR_13))
    VAR_24 -= FUNC_13(VAR_13, VAR_11);
   VAR_23 += VAR_24 / VAR_16;
   if (VAR_22 > VAR_23)
    VAR_22 = VAR_23;
   while (VAR_21 <= VAR_22)
    FUNC_19(VAR_13, VAR_21++);
  }






  FUNC_23(VAR_8);
  FUNC_15(VAR_12);
  VAR_12->b_end_io = VAR_7;
  FUNC_22(VAR_5, VAR_4 | VAR_6, VAR_12);
  FUNC_4(&VAR_15);
  FUNC_26(VAR_12);
  if (!FUNC_7(VAR_12)) {
   FUNC_0(VAR_8, VAR_14,
            "unable to read itable block");
   FUNC_6(VAR_12);
   return -VAR_1;
  }
 }
has_buffer:
 VAR_9->bh = VAR_12;
 return 0;
}
