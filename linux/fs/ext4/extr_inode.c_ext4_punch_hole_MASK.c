
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct inode {int i_size; int i_ctime; int i_mtime; int i_mode; struct address_space* i_mapping; struct super_block* i_sb; } ;
struct address_space {int dummy; } ;
typedef int loff_t ;
typedef int handle_t ;
typedef int ext4_lblk_t ;
struct TYPE_2__ {int i_mmap_sem; int i_data_sem; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,int ) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*,int,int) ;
 int FUNC_14 (struct inode*,int,int) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 int FUNC_17 (int *,struct inode*,int,int) ;
 int FUNC_18 (struct inode*) ;
 int * FUNC_19 (struct inode*,int ,unsigned int) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,struct inode*) ;
 int FUNC_22 (struct super_block*,int) ;
 scalar_t__ FUNC_23 (struct inode*,int ) ;
 int FUNC_24 (struct inode*,int,int) ;
 int FUNC_25 (int *,struct inode*,int) ;
 unsigned int FUNC_26 (struct inode*) ;
 int FUNC_27 (int *,struct inode*,int,int) ;
 int FUNC_28 (struct address_space*,int,int) ;
 int FUNC_29 (struct inode*) ;
 int FUNC_30 (struct inode*) ;
 int FUNC_31 (struct inode*) ;
 scalar_t__ FUNC_32 (struct address_space*,int ) ;
 int FUNC_33 (int,int) ;
 int FUNC_34 (int,int) ;
 int FUNC_35 (struct inode*,int,int,int ) ;
 int FUNC_36 (struct inode*,int,int) ;
 int FUNC_37 (int *) ;

int FUNC_38(struct inode *VAR_6, loff_t VAR_7, loff_t VAR_8)
{
 struct super_block *VAR_9 = VAR_6->i_sb;
 ext4_lblk_t VAR_10, VAR_11;
 struct address_space *VAR_12 = VAR_6->i_mapping;
 loff_t VAR_13, VAR_14;
 handle_t *VAR_15;
 unsigned int VAR_16;
 int VAR_17 = 0;

 if (!FUNC_5(VAR_6->i_mode))
  return -VAR_0;

 FUNC_35(VAR_6, VAR_7, VAR_8, 0);

 FUNC_10(VAR_6, VAR_3);
 if (FUNC_16(VAR_6)) {
  FUNC_7(&FUNC_1(VAR_6)->i_mmap_sem);
  VAR_17 = FUNC_11(VAR_6);
  FUNC_37(&FUNC_1(VAR_6)->i_mmap_sem);
  if (VAR_17)
   return VAR_17;
 }





 if (FUNC_32(VAR_12, VAR_4)) {
  VAR_17 = FUNC_28(VAR_12, VAR_7,
         VAR_7 + VAR_8 - 1);
  if (VAR_17)
   return VAR_17;
 }

 FUNC_30(VAR_6);


 if (VAR_7 >= VAR_6->i_size)
  goto out_mutex;





 if (VAR_7 + VAR_8 > VAR_6->i_size) {
  VAR_8 = VAR_6->i_size +
     VAR_5 - (VAR_6->i_size & (VAR_5 - 1)) -
     VAR_7;
 }

 if (VAR_7 & (VAR_9->s_blocksize - 1) ||
     (VAR_7 + VAR_8) & (VAR_9->s_blocksize - 1)) {




  VAR_17 = FUNC_18(VAR_6);
  if (VAR_17 < 0)
   goto out_mutex;

 }


 FUNC_29(VAR_6);





 FUNC_7(&FUNC_1(VAR_6)->i_mmap_sem);

 VAR_17 = FUNC_9(VAR_6);
 if (VAR_17)
  goto out_dio;

 VAR_13 = FUNC_34(VAR_7, VAR_9->s_blocksize);
 VAR_14 = FUNC_33((VAR_7 + VAR_8), VAR_9->s_blocksize) - 1;


 if (VAR_14 > VAR_13) {
  VAR_17 = FUNC_24(VAR_6, VAR_7, VAR_8);
  if (VAR_17)
   goto out_dio;
  FUNC_36(VAR_6, VAR_13,
      VAR_14);
 }

 if (FUNC_23(VAR_6, VAR_2))
  VAR_16 = FUNC_26(VAR_6);
 else
  VAR_16 = FUNC_8(VAR_6);
 VAR_15 = FUNC_19(VAR_6, VAR_1, VAR_16);
 if (FUNC_2(VAR_15)) {
  VAR_17 = FUNC_4(VAR_15);
  FUNC_22(VAR_9, VAR_17);
  goto out_dio;
 }

 VAR_17 = FUNC_27(VAR_15, VAR_6, VAR_7,
           VAR_8);
 if (VAR_17)
  goto out_stop;

 VAR_10 = (VAR_7 + VAR_9->s_blocksize - 1) >>
  FUNC_0(VAR_9);
 VAR_11 = (VAR_7 + VAR_8) >> FUNC_0(VAR_9);


 if (VAR_11 > VAR_10) {

  FUNC_7(&FUNC_1(VAR_6)->i_data_sem);
  FUNC_12(VAR_6);

  VAR_17 = FUNC_13(VAR_6, VAR_10,
         VAR_11 - VAR_10);
  if (VAR_17) {
   FUNC_37(&FUNC_1(VAR_6)->i_data_sem);
   goto out_stop;
  }

  if (FUNC_23(VAR_6, VAR_2))
   VAR_17 = FUNC_14(VAR_6, VAR_10,
          VAR_11 - 1);
  else
   VAR_17 = FUNC_17(VAR_15, VAR_6, VAR_10,
          VAR_11);

  FUNC_37(&FUNC_1(VAR_6)->i_data_sem);
 }
 if (FUNC_3(VAR_6))
  FUNC_15(VAR_15);

 VAR_6->i_mtime = VAR_6->i_ctime = FUNC_6(VAR_6);
 FUNC_21(VAR_15, VAR_6);
 if (VAR_17 >= 0)
  FUNC_25(VAR_15, VAR_6, 1);
out_stop:
 FUNC_20(VAR_15);
out_dio:
 FUNC_37(&FUNC_1(VAR_6)->i_mmap_sem);
out_mutex:
 FUNC_31(VAR_6);
 return VAR_17;
}
