
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {scalar_t__ s_maxbytes; } ;
struct inode {scalar_t__ i_size; int i_ctime; int i_mtime; int i_mapping; struct super_block* i_sb; int i_mode; } ;
struct ext4_extent {int ee_block; } ;
struct ext4_ext_path {struct ext4_extent* p_ext; } ;
typedef int loff_t ;
typedef struct ext4_ext_path handle_t ;
typedef unsigned int ext4_lblk_t ;
struct TYPE_2__ {int i_disksize; int i_mmap_sem; int i_data_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_3 (struct ext4_ext_path*) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct ext4_ext_path*) ;
 int VAR_13 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,unsigned int,scalar_t__) ;
 int FUNC_12 (struct ext4_ext_path*) ;
 unsigned int FUNC_13 (struct ext4_extent*) ;
 scalar_t__ FUNC_14 (struct ext4_extent*) ;
 int FUNC_15 (struct inode*,struct ext4_ext_path*,unsigned int,unsigned int,int ) ;
 struct ext4_ext_path* FUNC_16 (struct inode*,unsigned int,int *,int ) ;
 int FUNC_17 (struct super_block*) ;
 int FUNC_18 (struct ext4_ext_path*) ;
 struct ext4_ext_path* FUNC_19 (struct inode*,int ,unsigned int) ;
 int FUNC_20 (struct ext4_ext_path*) ;
 int FUNC_21 (struct ext4_ext_path*,struct inode*) ;
 scalar_t__ FUNC_22 (struct inode*) ;
 int FUNC_23 (struct ext4_ext_path*,struct inode*,struct ext4_ext_path**,unsigned int,int,int) ;
 int FUNC_24 (struct inode*,int ) ;
 int FUNC_25 (struct ext4_ext_path*,struct inode*,int) ;
 unsigned int FUNC_26 (struct inode*) ;
 int FUNC_27 (struct inode*) ;
 int FUNC_28 (int ,int,int ) ;
 int FUNC_29 (struct inode*) ;
 int FUNC_30 (struct inode*) ;
 int FUNC_31 (struct inode*) ;
 int FUNC_32 (struct inode*) ;
 int FUNC_33 (struct ext4_ext_path*) ;
 unsigned int FUNC_34 (int ) ;
 int FUNC_35 (int,int ) ;
 int FUNC_36 (struct inode*,int,int) ;
 int FUNC_37 (struct inode*,int) ;
 int FUNC_38 (int *) ;

int FUNC_39(struct inode *VAR_14, loff_t VAR_15, loff_t VAR_16)
{
 struct super_block *VAR_17 = VAR_14->i_sb;
 handle_t *VAR_18;
 struct ext4_ext_path *VAR_19;
 struct ext4_extent *VAR_20;
 ext4_lblk_t VAR_21, VAR_22, VAR_23 = 0;
 unsigned int VAR_24, VAR_25;
 int VAR_26 = 0, VAR_27, VAR_28 = 0;
 loff_t VAR_29;






 if (!FUNC_24(VAR_14, VAR_9))
  return -VAR_2;


 if (VAR_15 & (FUNC_1(VAR_17) - 1) ||
   VAR_16 & (FUNC_1(VAR_17) - 1))
  return -VAR_1;

 if (!FUNC_6(VAR_14->i_mode))
  return -VAR_2;

 FUNC_36(VAR_14, VAR_15, VAR_16);

 VAR_21 = VAR_15 >> FUNC_0(VAR_17);
 VAR_22 = VAR_16 >> FUNC_0(VAR_17);


 if (FUNC_22(VAR_14)) {
  VAR_26 = FUNC_17(VAR_14->i_sb);
  if (VAR_26)
   return VAR_26;
 }

 FUNC_31(VAR_14);

 if (!FUNC_24(VAR_14, VAR_9)) {
  VAR_26 = -VAR_2;
  goto out_mutex;
 }


 if (VAR_14->i_size + VAR_16 > VAR_14->i_sb->s_maxbytes) {
  VAR_26 = -VAR_0;
  goto out_mutex;
 }


 if (VAR_15 >= FUNC_29(VAR_14)) {
  VAR_26 = -VAR_1;
  goto out_mutex;
 }


 FUNC_30(VAR_14);





 FUNC_8(&FUNC_2(VAR_14)->i_mmap_sem);

 VAR_26 = FUNC_9(VAR_14);
 if (VAR_26)
  goto out_mmap;





 VAR_29 = FUNC_35(VAR_15, VAR_12);

 VAR_26 = FUNC_28(VAR_14->i_mapping, VAR_29,
   VAR_11);
 if (VAR_26)
  goto out_mmap;
 FUNC_37(VAR_14, VAR_29);

 VAR_24 = FUNC_26(VAR_14);
 VAR_18 = FUNC_19(VAR_14, VAR_8, VAR_24);
 if (FUNC_3(VAR_18)) {
  VAR_26 = FUNC_5(VAR_18);
  goto out_mmap;
 }


 VAR_14->i_size += VAR_16;
 FUNC_2(VAR_14)->i_disksize += VAR_16;
 VAR_14->i_mtime = VAR_14->i_ctime = FUNC_7(VAR_14);
 VAR_26 = FUNC_21(VAR_18, VAR_14);
 if (VAR_26)
  goto out_stop;

 FUNC_8(&FUNC_2(VAR_14)->i_data_sem);
 FUNC_10(VAR_14);

 VAR_19 = FUNC_16(VAR_14, VAR_21, ((void*)0), 0);
 if (FUNC_3(VAR_19)) {
  FUNC_38(&FUNC_2(VAR_14)->i_data_sem);
  goto out_stop;
 }

 VAR_27 = FUNC_27(VAR_14);
 VAR_20 = VAR_19[VAR_27].p_ext;
 if (VAR_20) {
  VAR_23 = FUNC_34(VAR_20->ee_block);
  VAR_25 = FUNC_13(VAR_20);





  if ((VAR_21 > VAR_23) &&
    (VAR_21 < (VAR_23 + VAR_25))) {
   if (FUNC_14(VAR_20))
    VAR_28 = VAR_3 |
     VAR_4;
   VAR_26 = FUNC_23(VAR_18, VAR_14, &VAR_19,
     VAR_21, VAR_28,
     VAR_5 |
     VAR_7 |
     VAR_6);
  }

  FUNC_12(VAR_19);
  FUNC_33(VAR_19);
  if (VAR_26 < 0) {
   FUNC_38(&FUNC_2(VAR_14)->i_data_sem);
   goto out_stop;
  }
 } else {
  FUNC_12(VAR_19);
  FUNC_33(VAR_19);
 }

 VAR_26 = FUNC_11(VAR_14, VAR_21,
   VAR_10 - VAR_21);
 if (VAR_26) {
  FUNC_38(&FUNC_2(VAR_14)->i_data_sem);
  goto out_stop;
 }





 VAR_26 = FUNC_15(VAR_14, VAR_18,
  VAR_23 > VAR_21 ? VAR_23 : VAR_21,
  VAR_22, VAR_13);

 FUNC_38(&FUNC_2(VAR_14)->i_data_sem);
 if (FUNC_4(VAR_14))
  FUNC_18(VAR_18);
 if (VAR_26 >= 0)
  FUNC_25(VAR_18, VAR_14, 1);

out_stop:
 FUNC_20(VAR_18);
out_mmap:
 FUNC_38(&FUNC_2(VAR_14)->i_mmap_sem);
out_mutex:
 FUNC_32(VAR_14);
 return VAR_26;
}
