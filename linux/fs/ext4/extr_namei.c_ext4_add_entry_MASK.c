
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {unsigned int s_blocksize; int s_blocksize_bits; } ;
struct inode {int i_size; struct super_block* i_sb; } ;
struct ext4_sb_info {scalar_t__ s_encoding; } ;
struct ext4_filename {int dummy; } ;
struct ext4_dir_entry_tail {int dummy; } ;
struct ext4_dir_entry_2 {int rec_len; scalar_t__ inode; } ;
struct TYPE_3__ {int len; } ;
struct dentry {TYPE_1__ d_name; int d_parent; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
typedef int ext4_lblk_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ext4_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *,struct ext4_filename*,struct inode*,struct inode*,struct ext4_dir_entry_2*,struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 struct inode* FUNC_6 (int ) ;
 struct buffer_head* FUNC_7 (int *,struct inode*,int*) ;
 struct buffer_head* FUNC_8 (int *,struct inode*,int,int ) ;
 int FUNC_9 (struct inode*,int ) ;
 int FUNC_10 (int *,struct ext4_filename*,struct inode*,struct inode*) ;
 int FUNC_11 (struct ext4_filename*) ;
 int FUNC_12 (struct inode*,TYPE_1__*,int ,struct ext4_filename*) ;
 scalar_t__ FUNC_13 (struct super_block*) ;
 scalar_t__ FUNC_14 (struct inode*) ;
 scalar_t__ FUNC_15 (struct super_block*) ;
 scalar_t__ FUNC_16 (struct ext4_sb_info*) ;
 int FUNC_17 (struct buffer_head*,unsigned int) ;
 int FUNC_18 (int *,struct inode*) ;
 struct buffer_head* FUNC_19 (struct inode*,int,int ) ;
 int FUNC_20 (unsigned int,unsigned int) ;
 int FUNC_21 (struct inode*,int ) ;
 int FUNC_22 (int *,struct ext4_filename*,struct inode*,struct inode*) ;
 scalar_t__ FUNC_23 (struct inode*) ;
 int FUNC_24 (int *,struct ext4_filename*,struct inode*,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_25 (scalar_t__,TYPE_1__*) ;

__attribute__((used)) static int FUNC_26(handle_t *VAR_7, struct dentry *VAR_8,
     struct inode *VAR_9)
{
 struct inode *VAR_10 = FUNC_6(VAR_8->d_parent);
 struct buffer_head *VAR_11 = ((void*)0);
 struct ext4_dir_entry_2 *VAR_12;
 struct super_block *VAR_13;
 struct ext4_sb_info *VAR_14;
 struct ext4_filename VAR_15;
 int VAR_16;
 int VAR_17=0;
 unsigned VAR_18;
 ext4_lblk_t VAR_19, VAR_20;
 int VAR_21 = 0;

 if (FUNC_15(VAR_9->i_sb))
  VAR_21 = sizeof(struct ext4_dir_entry_tail);

 VAR_13 = VAR_10->i_sb;
 VAR_14 = FUNC_0(VAR_13);
 VAR_18 = VAR_13->s_blocksize;
 if (!VAR_8->d_name.len)
  return -VAR_1;







 VAR_16 = FUNC_12(VAR_10, &VAR_8->d_name, 0, &VAR_15);
 if (VAR_16)
  return VAR_16;

 if (FUNC_14(VAR_10)) {
  VAR_16 = FUNC_22(VAR_7, &VAR_15, VAR_10, VAR_9);
  if (VAR_16 < 0)
   goto out;
  if (VAR_16 == 1) {
   VAR_16 = 0;
   goto out;
  }
 }

 if (FUNC_23(VAR_10)) {
  VAR_16 = FUNC_10(VAR_7, &VAR_15, VAR_10, VAR_9);
  if (!VAR_16 || (VAR_16 != VAR_3))
   goto out;
  FUNC_9(VAR_10, VAR_5);
  VAR_17++;
  FUNC_18(VAR_7, VAR_10);
 }
 VAR_20 = VAR_10->i_size >> VAR_13->s_blocksize_bits;
 for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
  VAR_11 = FUNC_19(VAR_10, VAR_19, VAR_0);
  if (VAR_11 == ((void*)0)) {
   VAR_11 = FUNC_8(VAR_7, VAR_10, VAR_19,
     VAR_4);
   goto add_to_new_block;
  }
  if (FUNC_2(VAR_11)) {
   VAR_16 = FUNC_3(VAR_11);
   VAR_11 = ((void*)0);
   goto out;
  }
  VAR_16 = FUNC_4(VAR_7, &VAR_15, VAR_10, VAR_9,
        ((void*)0), VAR_11);
  if (VAR_16 != -VAR_2)
   goto out;

  if (VAR_20 == 1 && !VAR_17 &&
      FUNC_13(VAR_13)) {
   VAR_16 = FUNC_24(VAR_7, &VAR_15, VAR_10,
        VAR_9, VAR_11);
   VAR_11 = ((void*)0);
   goto out;
  }
  FUNC_5(VAR_11);
 }
 VAR_11 = FUNC_7(VAR_7, VAR_10, &VAR_19);
add_to_new_block:
 if (FUNC_2(VAR_11)) {
  VAR_16 = FUNC_3(VAR_11);
  VAR_11 = ((void*)0);
  goto out;
 }
 VAR_12 = (struct ext4_dir_entry_2 *) VAR_11->b_data;
 VAR_12->inode = 0;
 VAR_12->rec_len = FUNC_20(VAR_18 - VAR_21, VAR_18);

 if (VAR_21)
  FUNC_17(VAR_11, VAR_18);

 VAR_16 = FUNC_4(VAR_7, &VAR_15, VAR_10, VAR_9, VAR_12, VAR_11);
out:
 FUNC_11(&VAR_15);
 FUNC_5(VAR_11);
 if (VAR_16 == 0)
  FUNC_21(VAR_9, VAR_6);
 return VAR_16;
}
