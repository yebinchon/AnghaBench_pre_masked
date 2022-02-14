
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct inode {int i_ctime; int i_mtime; int i_mapping; struct super_block* i_sb; int i_mode; } ;
typedef int loff_t ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {int i_disksize; int i_mmap_sem; int i_data_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int VAR_7 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,int,scalar_t__) ;
 int FUNC_12 (struct inode*,int,int) ;
 int FUNC_13 (struct inode*,int *,int,int,int ) ;
 int FUNC_14 (struct super_block*) ;
 int FUNC_15 (int *) ;
 int * FUNC_16 (struct inode*,int ,unsigned int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,struct inode*) ;
 scalar_t__ FUNC_19 (struct inode*) ;
 int FUNC_20 (struct inode*,int ) ;
 int FUNC_21 (int *,struct inode*,int) ;
 unsigned int FUNC_22 (struct inode*) ;
 int FUNC_23 (int ,int,int) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (struct inode*,int) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (struct inode*) ;
 int FUNC_28 (struct inode*) ;
 int FUNC_29 (int,int ) ;
 int FUNC_30 (struct inode*,int,int) ;
 int FUNC_31 (struct inode*,int) ;
 int FUNC_32 (int *) ;

int FUNC_33(struct inode *VAR_8, loff_t VAR_9, loff_t VAR_10)
{
 struct super_block *VAR_11 = VAR_8->i_sb;
 ext4_lblk_t VAR_12, VAR_13;
 handle_t *VAR_14;
 unsigned int VAR_15;
 loff_t VAR_16, VAR_17;
 int VAR_18;






 if (!FUNC_20(VAR_8, VAR_3))
  return -VAR_1;


 if (VAR_9 & (FUNC_1(VAR_11) - 1) ||
     VAR_10 & (FUNC_1(VAR_11) - 1))
  return -VAR_0;

 if (!FUNC_6(VAR_8->i_mode))
  return -VAR_0;

 FUNC_30(VAR_8, VAR_9, VAR_10);

 VAR_12 = VAR_9 >> FUNC_0(VAR_11);
 VAR_13 = (VAR_9 + VAR_10) >> FUNC_0(VAR_11);


 if (FUNC_19(VAR_8)) {
  VAR_18 = FUNC_14(VAR_8->i_sb);
  if (VAR_18)
   return VAR_18;
 }

 FUNC_27(VAR_8);




 if (VAR_9 + VAR_10 >= FUNC_24(VAR_8)) {
  VAR_18 = -VAR_0;
  goto out_mutex;
 }


 if (!FUNC_20(VAR_8, VAR_3)) {
  VAR_18 = -VAR_1;
  goto out_mutex;
 }


 FUNC_26(VAR_8);





 FUNC_8(&FUNC_2(VAR_8)->i_mmap_sem);

 VAR_18 = FUNC_9(VAR_8);
 if (VAR_18)
  goto out_mmap;





 VAR_17 = FUNC_29(VAR_9, VAR_6);




 VAR_18 = FUNC_23(VAR_8->i_mapping, VAR_17, VAR_9);
 if (VAR_18)
  goto out_mmap;





 VAR_18 = FUNC_23(VAR_8->i_mapping, VAR_9 + VAR_10,
        VAR_5);
 if (VAR_18)
  goto out_mmap;
 FUNC_31(VAR_8, VAR_17);

 VAR_15 = FUNC_22(VAR_8);
 VAR_14 = FUNC_16(VAR_8, VAR_2, VAR_15);
 if (FUNC_3(VAR_14)) {
  VAR_18 = FUNC_5(VAR_14);
  goto out_mmap;
 }

 FUNC_8(&FUNC_2(VAR_8)->i_data_sem);
 FUNC_10(VAR_8);

 VAR_18 = FUNC_11(VAR_8, VAR_12,
        VAR_4 - VAR_12);
 if (VAR_18) {
  FUNC_32(&FUNC_2(VAR_8)->i_data_sem);
  goto out_stop;
 }

 VAR_18 = FUNC_12(VAR_8, VAR_12, VAR_13 - 1);
 if (VAR_18) {
  FUNC_32(&FUNC_2(VAR_8)->i_data_sem);
  goto out_stop;
 }
 FUNC_10(VAR_8);

 VAR_18 = FUNC_13(VAR_8, VAR_14, VAR_13,
         VAR_13 - VAR_12, VAR_7);
 if (VAR_18) {
  FUNC_32(&FUNC_2(VAR_8)->i_data_sem);
  goto out_stop;
 }

 VAR_16 = FUNC_24(VAR_8) - VAR_10;
 FUNC_25(VAR_8, VAR_16);
 FUNC_2(VAR_8)->i_disksize = VAR_16;

 FUNC_32(&FUNC_2(VAR_8)->i_data_sem);
 if (FUNC_4(VAR_8))
  FUNC_15(VAR_14);
 VAR_8->i_mtime = VAR_8->i_ctime = FUNC_7(VAR_8);
 FUNC_18(VAR_14, VAR_8);
 FUNC_21(VAR_14, VAR_8, 1);

out_stop:
 FUNC_17(VAR_14);
out_mmap:
 FUNC_32(&FUNC_2(VAR_8)->i_mmap_sem);
out_mutex:
 FUNC_28(VAR_8);
 return VAR_18;
}
