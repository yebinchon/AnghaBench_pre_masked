
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_blocks; int i_blkbits; } ;
struct ext4_super_block {int s_first_meta_bg; scalar_t__ s_reserved_gdt_blocks; } ;
struct ext4_sb_info {int s_cluster_bits; int s_groups_count; struct ext4_super_block* s_es; int s_sbh; } ;
struct ext4_inode_info {scalar_t__* i_data; } ;
typedef int handle_t ;
typedef int ext4_fsblk_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ext4_inode_info* FUNC_1 (struct inode*) ;
 int VAR_6 ;
 struct ext4_sb_info* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*,char*) ;
 int FUNC_8 (int *,struct inode*,int *,int ,int,int) ;
 int FUNC_9 (int *,struct super_block*) ;
 int FUNC_10 (int *,int ) ;
 int * FUNC_11 (struct super_block*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,struct inode*) ;
 int FUNC_14 (struct super_block*,int ,char*) ;
 int FUNC_15 (struct super_block*) ;
 int FUNC_16 (struct super_block*,int) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (struct super_block*,int ) ;

__attribute__((used)) static int FUNC_19(struct super_block *VAR_8, struct inode *VAR_9)
{
 handle_t *VAR_10;
 struct ext4_sb_info *VAR_11 = FUNC_2(VAR_8);
 struct ext4_super_block *VAR_12 = VAR_11->s_es;
 struct ext4_inode_info *VAR_13 = FUNC_1(VAR_9);
 ext4_fsblk_t VAR_14;
 int VAR_15, VAR_16, VAR_17 = 0;
 int VAR_18 = 1;

 FUNC_14(VAR_8, VAR_7, "Converting file system to meta_bg");
 if (VAR_9) {
  if (VAR_12->s_reserved_gdt_blocks) {
   FUNC_7(VAR_8, "Unexpected non-zero "
       "s_reserved_gdt_blocks");
   return -VAR_1;
  }


  if (VAR_9->i_blocks != 1 << (VAR_9->i_blkbits -
          (9 - VAR_11->s_cluster_bits)))
   goto invalid_resize_inode;
  for (VAR_15 = 0; VAR_15 < VAR_6; VAR_15++) {
   if (VAR_15 == VAR_2) {
    if (VAR_13->i_data[VAR_15])
     continue;
    else
     goto invalid_resize_inode;
   }
   if (VAR_13->i_data[VAR_15])
    goto invalid_resize_inode;
  }
  VAR_18 += 3;
 }

 VAR_10 = FUNC_11(VAR_8, VAR_5, VAR_18);
 if (FUNC_3(VAR_10))
  return FUNC_4(VAR_10);

 FUNC_0(VAR_11->s_sbh, "get_write_access");
 VAR_17 = FUNC_10(VAR_10, VAR_11->s_sbh);
 if (VAR_17)
  goto errout;

 FUNC_6(VAR_8);
 FUNC_15(VAR_8);
 VAR_11->s_es->s_first_meta_bg =
  FUNC_5(FUNC_18(VAR_8, VAR_11->s_groups_count));

 VAR_17 = FUNC_9(VAR_10, VAR_8);
 if (VAR_17) {
  FUNC_16(VAR_8, VAR_17);
  goto errout;
 }

 if (VAR_9) {
  VAR_14 = FUNC_17(VAR_13->i_data[VAR_2]);
  FUNC_8(VAR_10, VAR_9, ((void*)0), VAR_14, 1,
     VAR_4 |
     VAR_3);
  VAR_13->i_data[VAR_2] = 0;
  VAR_9->i_blocks = 0;

  VAR_17 = FUNC_13(VAR_10, VAR_9);
  if (VAR_17)
   FUNC_16(VAR_8, VAR_17);
 }

errout:
 VAR_16 = FUNC_12(VAR_10);
 if (!VAR_17)
  VAR_17 = VAR_16;
 return VAR_16;

invalid_resize_inode:
 FUNC_7(VAR_8, "corrupted/inconsistent resize inode");
 return -VAR_0;
}
