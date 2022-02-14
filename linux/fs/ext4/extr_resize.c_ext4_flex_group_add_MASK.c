
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct ext4_super_block {int s_reserved_gdt_blocks; } ;
struct ext4_sb_info {int s_groups_count; struct buffer_head** s_group_desc; TYPE_2__* s_sbh; struct ext4_super_block* s_es; } ;
struct ext4_new_flex_group_data {int count; TYPE_1__* groups; int bg_flags; } ;
struct buffer_head {scalar_t__ b_blocknr; char* b_data; int b_size; } ;
typedef scalar_t__ sector_t ;
typedef int handle_t ;
typedef int ext4_grpblk_t ;
typedef int ext4_group_t ;
typedef int ext4_fsblk_t ;
struct TYPE_5__ {scalar_t__ b_blocknr; } ;
struct TYPE_4__ {int group; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct super_block*) ;
 int VAR_0 ;
 struct ext4_sb_info* FUNC_4 (struct super_block*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct super_block*,int,struct inode*,int) ;
 int FUNC_8 (struct ext4_super_block*) ;
 int FUNC_9 (struct super_block*,int ,int*,int*) ;
 int FUNC_10 (int *,struct super_block*) ;
 int FUNC_11 (struct super_block*) ;
 int FUNC_12 (int *,TYPE_2__*) ;
 int * FUNC_13 (struct super_block*,int ,int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,struct super_block*,struct ext4_new_flex_group_data*) ;
 int FUNC_16 (struct super_block*,struct ext4_new_flex_group_data*) ;
 unsigned int FUNC_17 (int ) ;
 int FUNC_18 (struct super_block*,struct ext4_new_flex_group_data*) ;
 int FUNC_19 (struct super_block*,scalar_t__,char*,int,int) ;

__attribute__((used)) static int FUNC_20(struct super_block *VAR_1,
          struct inode *VAR_2,
          struct ext4_new_flex_group_data *VAR_3)
{
 struct ext4_sb_info *VAR_4 = FUNC_4(VAR_1);
 struct ext4_super_block *VAR_5 = VAR_4->s_es;
 ext4_fsblk_t VAR_6;
 ext4_grpblk_t VAR_7;
 ext4_group_t VAR_8;
 handle_t *VAR_9;
 unsigned VAR_10;
 int VAR_11 = 0, VAR_12 = 0, VAR_13;

 FUNC_1(!VAR_3->count || !VAR_3->groups || !VAR_3->bg_flags);

 VAR_10 = FUNC_17(VAR_5->s_reserved_gdt_blocks);
 VAR_6 = FUNC_8(VAR_5);
 FUNC_9(VAR_1, VAR_6, &VAR_8, &VAR_7);
 FUNC_1(VAR_7);

 VAR_11 = FUNC_18(VAR_1, VAR_3);
 if (VAR_11)
  goto exit;







 VAR_13 = 3;

 VAR_13 += 1 + FUNC_2(VAR_3->count, FUNC_3(VAR_1));
 VAR_13 += VAR_10;
 VAR_9 = FUNC_13(VAR_1, VAR_0, VAR_13);
 if (FUNC_5(VAR_9)) {
  VAR_11 = FUNC_6(VAR_9);
  goto exit;
 }

 FUNC_0(VAR_4->s_sbh, "get_write_access");
 VAR_11 = FUNC_12(VAR_9, VAR_4->s_sbh);
 if (VAR_11)
  goto exit_journal;

 VAR_8 = VAR_3->groups[0].group;
 FUNC_1(VAR_8 != VAR_4->s_groups_count);
 VAR_11 = FUNC_7(VAR_9, VAR_1, VAR_8,
    VAR_2, VAR_3->count);
 if (VAR_11)
  goto exit_journal;

 VAR_11 = FUNC_15(VAR_9, VAR_1, VAR_3);
 if (VAR_11)
  goto exit_journal;

 FUNC_16(VAR_1, VAR_3);

 VAR_11 = FUNC_10(VAR_9, VAR_1);

exit_journal:
 VAR_12 = FUNC_14(VAR_9);
 if (!VAR_11)
  VAR_11 = VAR_12;

 if (!VAR_11) {
  int VAR_14 = VAR_8 / FUNC_3(VAR_1);
  int VAR_15 = ((VAR_8 + VAR_3->count - 1) /
       FUNC_3(VAR_1));
  int VAR_16 = FUNC_11(VAR_1);
  sector_t VAR_17 = 0;

  FUNC_19(VAR_1, VAR_4->s_sbh->b_blocknr, (char *)VAR_5,
          sizeof(struct ext4_super_block), 0);
  for (; VAR_14 <= VAR_15; VAR_14++) {
   struct buffer_head *VAR_18;

   VAR_18 = VAR_4->s_group_desc[VAR_14];
   if (VAR_17 == VAR_18->b_blocknr)
    continue;
   FUNC_19(VAR_1, VAR_18->b_blocknr, VAR_18->b_data,
           VAR_18->b_size, VAR_16);
   VAR_17 = VAR_18->b_blocknr;
  }
 }
exit:
 return VAR_11;
}
