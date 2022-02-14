
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_sb; } ;
struct ext4_super_block {int dummy; } ;
struct ext4_inode_info {int i_data_sem; int * i_data; } ;
struct ext4_extent_header {scalar_t__ eh_depth; scalar_t__ eh_entries; } ;
struct ext4_extent {scalar_t__ ee_len; int ee_block; } ;
typedef int handle_t ;
typedef unsigned int ext4_lblk_t ;
typedef unsigned int ext4_fsblk_t ;
struct TYPE_2__ {struct ext4_super_block* s_es; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ext4_inode_info* FUNC_0 (struct inode*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 TYPE_1__* FUNC_1 (int ) ;
 struct ext4_extent* FUNC_2 (struct ext4_extent_header*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (struct ext4_super_block*) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (struct inode*) ;
 unsigned int FUNC_11 (struct ext4_extent*) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (struct inode*,int ,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,struct inode*) ;
 int FUNC_17 (struct inode*,int ) ;
 struct ext4_extent_header* FUNC_18 (struct inode*) ;
 int FUNC_19 (scalar_t__) ;
 unsigned int FUNC_20 (int ) ;
 int FUNC_21 (int *,int ,int) ;
 scalar_t__ FUNC_22 (int ,int ) ;
 int FUNC_23 (int *) ;

int FUNC_24(struct inode *VAR_7)
{
 struct ext4_extent_header *VAR_8;
 struct ext4_super_block *VAR_9 = FUNC_1(VAR_7->i_sb)->s_es;
 struct ext4_inode_info *VAR_10 = FUNC_0(VAR_7);
 struct ext4_extent *VAR_11;
 unsigned int VAR_12, VAR_13;
 ext4_lblk_t VAR_14, VAR_15;
 ext4_fsblk_t VAR_16;
 handle_t *VAR_17;
 int VAR_18;

 if (!FUNC_13(VAR_7->i_sb) ||
     (!FUNC_17(VAR_7, VAR_4)))
  return -VAR_1;

 if (FUNC_12(VAR_7->i_sb))
  return -VAR_2;






 if (FUNC_22(VAR_7->i_sb, VAR_0))
  FUNC_7(VAR_7);

 VAR_17 = FUNC_14(VAR_7, VAR_3, 1);
 if (FUNC_3(VAR_17))
  return FUNC_4(VAR_17);

 FUNC_6(&FUNC_0(VAR_7)->i_data_sem);
 VAR_18 = FUNC_10(VAR_7);
 if (VAR_18)
  goto errout;

 VAR_8 = FUNC_18(VAR_7);
 VAR_11 = FUNC_2(VAR_8);
 if (FUNC_8(VAR_9) > VAR_5 ||
     VAR_8->eh_depth != 0 || FUNC_19(VAR_8->eh_entries) > 1) {
  VAR_18 = -VAR_2;
  goto errout;
 }
 if (VAR_8->eh_entries == 0)
  VAR_16 = VAR_13 = VAR_14 = VAR_15 = 0;
 else {
  VAR_13 = FUNC_19(VAR_11->ee_len);
  VAR_16 = FUNC_11(VAR_11);
  VAR_14 = FUNC_20(VAR_11->ee_block);
  VAR_15 = VAR_14 + VAR_13 - 1;
  if (VAR_15 >= VAR_6) {
   VAR_18 = -VAR_2;
   goto errout;
  }
 }

 FUNC_9(VAR_7, VAR_4);
 FUNC_21(VAR_10->i_data, 0, sizeof(VAR_10->i_data));
 for (VAR_12 = VAR_14; VAR_12 <= VAR_15; VAR_12++)
  VAR_10->i_data[VAR_12] = FUNC_5(VAR_16++);
 FUNC_16(VAR_17, VAR_7);
errout:
 FUNC_15(VAR_17);
 FUNC_23(&FUNC_0(VAR_7)->i_data_sem);
 return VAR_18;
}
