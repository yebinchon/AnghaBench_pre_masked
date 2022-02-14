
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct ext4_super_block {int s_reserved_gdt_blocks; } ;
struct ext4_sb_info {int s_itb_per_group; scalar_t__ s_groups_count; TYPE_1__** s_group_desc; struct ext4_super_block* s_es; } ;
struct ext4_new_group_data {scalar_t__ group; scalar_t__ inode_table; scalar_t__ block_bitmap; scalar_t__ blocks_count; scalar_t__ inode_bitmap; } ;
struct ext4_new_flex_group_data {int* bg_flags; int count; struct ext4_new_group_data* groups; } ;
struct buffer_head {int b_data; int b_size; } ;
typedef struct buffer_head handle_t ;
typedef scalar_t__ ext4_grpblk_t ;
typedef scalar_t__ ext4_group_t ;
typedef scalar_t__ ext4_fsblk_t ;
typedef int __u16 ;
struct TYPE_2__ {int b_data; } ;


 int FUNC_0 (struct buffer_head*,char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct ext4_sb_info*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct super_block*) ;
 int VAR_4 ;
 int FUNC_4 (struct super_block*) ;
 int VAR_5 ;
 int FUNC_5 (struct ext4_sb_info*,scalar_t__) ;
 struct ext4_sb_info* FUNC_6 (struct super_block*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 struct buffer_head* FUNC_9 (struct buffer_head*,struct super_block*,scalar_t__) ;
 int FUNC_10 (struct buffer_head*) ;
 scalar_t__ FUNC_11 (struct super_block*,scalar_t__) ;
 unsigned long FUNC_12 (struct super_block*,scalar_t__) ;
 int FUNC_13 (char*,scalar_t__,...) ;
 scalar_t__ FUNC_14 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_15 (struct super_block*,scalar_t__) ;
 int FUNC_16 (struct buffer_head*,int *,struct buffer_head*) ;
 int FUNC_17 (struct super_block*) ;
 int FUNC_18 (struct buffer_head*,struct buffer_head*) ;
 struct buffer_head* FUNC_19 (struct super_block*,int ,int ) ;
 int FUNC_20 (struct buffer_head*) ;
 int FUNC_21 (int ,int,int ) ;
 scalar_t__ FUNC_22 (struct super_block*,scalar_t__) ;
 int FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (struct buffer_head*,int) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,int ,int ) ;
 struct buffer_head* FUNC_27 (struct super_block*,scalar_t__) ;
 int FUNC_28 (struct super_block*,scalar_t__,int,int ) ;
 int FUNC_29 (struct buffer_head*) ;
 int FUNC_30 (struct super_block*,struct buffer_head*,struct ext4_new_flex_group_data*,int ,int ) ;
 scalar_t__ FUNC_31 (int) ;

__attribute__((used)) static int FUNC_32(struct super_block *VAR_8,
    struct ext4_new_flex_group_data *VAR_9)
{
 int VAR_10[] = {1, 1, FUNC_6(VAR_8)->s_itb_per_group};
 ext4_fsblk_t VAR_11;
 ext4_fsblk_t VAR_12;
 struct ext4_sb_info *VAR_13 = FUNC_6(VAR_8);
 struct ext4_super_block *VAR_14 = VAR_13->s_es;
 struct ext4_new_group_data *VAR_15 = VAR_9->groups;
 __u16 *VAR_16 = VAR_9->bg_flags;
 handle_t *VAR_17;
 ext4_group_t VAR_18, VAR_19;
 struct buffer_head *VAR_20 = ((void*)0);
 int VAR_21, VAR_22, VAR_23, VAR_24 = 0, VAR_25;
 int VAR_26;

 FUNC_1(!VAR_9->count || !VAR_15 ||
        VAR_15[0].group != VAR_13->s_groups_count);

 VAR_21 = FUNC_25(VAR_14->s_reserved_gdt_blocks);
 VAR_26 = FUNC_17(VAR_8);


 VAR_17 = FUNC_19(VAR_8, VAR_4, VAR_5);
 if (FUNC_7(VAR_17))
  return FUNC_8(VAR_17);

 VAR_18 = VAR_15[0].group;
 for (VAR_22 = 0; VAR_22 < VAR_9->count; VAR_22++, VAR_18++) {
  unsigned long VAR_27;
  ext4_grpblk_t VAR_28;

  VAR_27 = FUNC_12(VAR_8, VAR_18);
  VAR_11 = FUNC_14(VAR_8, VAR_18);

  if (VAR_26 == 0 && !FUNC_11(VAR_8, VAR_18))
   goto handle_itb;

  if (VAR_26 == 1) {
   ext4_group_t VAR_29;
   VAR_29 = FUNC_22(VAR_8, VAR_18);
   if (VAR_29 != VAR_18 + 1 &&
       VAR_29 != VAR_18 + FUNC_3(VAR_8) - 1)
    goto handle_itb;
  }

  VAR_12 = VAR_11 + FUNC_11(VAR_8, VAR_18);

  for (VAR_23 = 0; VAR_23 < VAR_27; VAR_23++, VAR_12++) {
   struct buffer_head *VAR_30;

   FUNC_13("update backup group %#04llx\n", VAR_12);
   VAR_24 = FUNC_24(VAR_17, 1);
   if (VAR_24)
    goto out;

   VAR_30 = FUNC_27(VAR_8, VAR_12);
   if (FUNC_31(!VAR_30)) {
    VAR_24 = -VAR_0;
    goto out;
   }

   FUNC_0(VAR_30, "get_write_access");
   VAR_24 = FUNC_18(VAR_17, VAR_30);
   if (VAR_24) {
    FUNC_10(VAR_30);
    goto out;
   }
   FUNC_26(VAR_30->b_data, VAR_13->s_group_desc[VAR_23]->b_data,
          VAR_30->b_size);
   FUNC_29(VAR_30);

   VAR_24 = FUNC_16(VAR_17, ((void*)0), VAR_30);
   if (FUNC_31(VAR_24)) {
    FUNC_10(VAR_30);
    goto out;
   }
   FUNC_10(VAR_30);
  }




  if (FUNC_11(VAR_8, VAR_18)) {
   VAR_24 = FUNC_28(VAR_8, VAR_27 + VAR_11 + 1,
     VAR_21, VAR_6);
   if (VAR_24)
    goto out;
  }

handle_itb:

  if (!(VAR_16[VAR_22] & VAR_3))
   goto handle_bb;


  VAR_12 = VAR_15[VAR_22].inode_table;
  FUNC_13("clear inode table blocks %#04llx -> %#04lx\n",
      VAR_12, VAR_13->s_itb_per_group);
  VAR_24 = FUNC_28(VAR_8, VAR_12, VAR_13->s_itb_per_group,
           VAR_6);
  if (VAR_24)
   goto out;

handle_bb:
  if (VAR_16[VAR_22] & VAR_1)
   goto handle_ib;


  VAR_12 = VAR_15[VAR_22].block_bitmap;
  VAR_24 = FUNC_24(VAR_17, 1);
  if (VAR_24)
   goto out;

  VAR_20 = FUNC_9(VAR_17, VAR_8, VAR_12);
  if (FUNC_7(VAR_20)) {
   VAR_24 = FUNC_8(VAR_20);
   goto out;
  }
  VAR_28 = FUNC_15(VAR_8, VAR_18);
  if (VAR_28 != 0) {
   FUNC_13("mark backup superblock %#04llx (+0)\n",
       VAR_11);
   FUNC_23(VAR_20->b_data, 0,
          FUNC_5(VAR_13, VAR_28));
  }
  FUNC_21(FUNC_2(VAR_13, VAR_15[VAR_22].blocks_count),
         VAR_8->s_blocksize * 8, VAR_20->b_data);
  VAR_24 = FUNC_16(VAR_17, ((void*)0), VAR_20);
  FUNC_10(VAR_20);
  if (VAR_24)
   goto out;

handle_ib:
  if (VAR_16[VAR_22] & VAR_2)
   continue;


  VAR_12 = VAR_15[VAR_22].inode_bitmap;
  VAR_24 = FUNC_24(VAR_17, 1);
  if (VAR_24)
   goto out;

  VAR_20 = FUNC_9(VAR_17, VAR_8, VAR_12);
  if (FUNC_7(VAR_20)) {
   VAR_24 = FUNC_8(VAR_20);
   goto out;
  }

  FUNC_21(FUNC_4(VAR_8),
         VAR_8->s_blocksize * 8, VAR_20->b_data);
  VAR_24 = FUNC_16(VAR_17, ((void*)0), VAR_20);
  FUNC_10(VAR_20);
  if (VAR_24)
   goto out;
 }


 for (VAR_23 = 0; VAR_23 < VAR_7; VAR_23++) {
  VAR_19 = VAR_10[VAR_23];
  VAR_11 = (&VAR_15[0].block_bitmap)[VAR_23];
  VAR_12 = VAR_11;
  for (VAR_22 = 1; VAR_22 < VAR_9->count; VAR_22++) {
   VAR_12 += VAR_10[VAR_23];
   if (VAR_12 == (&VAR_15[VAR_22].block_bitmap)[VAR_23]) {
    VAR_19 += VAR_10[VAR_23];
    continue;
   }
   VAR_24 = FUNC_30(VAR_8, VAR_17,
            VAR_9,
            FUNC_2(VAR_13, VAR_11),
            FUNC_2(VAR_13,
              VAR_11 + VAR_19
              - 1));
   if (VAR_24)
    goto out;
   VAR_19 = VAR_10[VAR_23];
   VAR_11 = (&VAR_15[VAR_22].block_bitmap)[VAR_23];
   VAR_12 = VAR_11;
  }

  if (VAR_19) {
   VAR_24 = FUNC_30(VAR_8, VAR_17,
            VAR_9,
            FUNC_2(VAR_13, VAR_11),
            FUNC_2(VAR_13,
              VAR_11 + VAR_19
              - 1));
   if (VAR_24)
    goto out;
  }
 }

out:
 VAR_25 = FUNC_20(VAR_17);
 if (VAR_25 && !VAR_24)
  VAR_24 = VAR_25;

 return VAR_24;
}
