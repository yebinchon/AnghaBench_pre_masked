
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {scalar_t__ i_sb; size_t i_size; int i_mapping; int i_mode; } ;
struct TYPE_3__ {scalar_t__ mnt; } ;
struct file {TYPE_1__ f_path; } ;
struct f2fs_sb_info {int dummy; } ;
typedef size_t loff_t ;
struct TYPE_4__ {int * i_gc_rwsem; } ;


 size_t FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 struct f2fs_sb_info* FUNC_2 (struct inode*) ;
 int FUNC_3 (size_t,int ) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 int FUNC_5 (int ) ;
 size_t VAR_7 ;
 int FUNC_6 (struct inode*,struct inode*,size_t,size_t,size_t,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct f2fs_sb_info*,int) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*,size_t) ;
 int FUNC_12 (struct f2fs_sb_info*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct f2fs_sb_info*) ;
 struct inode* FUNC_15 (struct file*) ;
 int FUNC_16 (int ,size_t,size_t) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct file *VAR_8, loff_t VAR_9,
   struct file *VAR_10, loff_t VAR_11, size_t VAR_12)
{
 struct inode *VAR_13 = FUNC_15(VAR_8);
 struct inode *VAR_14 = FUNC_15(VAR_10);
 struct f2fs_sb_info *VAR_15 = FUNC_2(VAR_13);
 size_t VAR_16 = VAR_12, VAR_17 = 0;
 size_t VAR_18;
 int VAR_19;

 if (VAR_8->f_path.mnt != VAR_10->f_path.mnt ||
    VAR_13->i_sb != VAR_14->i_sb)
  return -VAR_4;

 if (FUNC_20(FUNC_13(VAR_13->i_sb)))
  return -VAR_3;

 if (!FUNC_5(VAR_13->i_mode) || !FUNC_5(VAR_14->i_mode))
  return -VAR_1;

 if (FUNC_4(VAR_13) || FUNC_4(VAR_14))
  return -VAR_2;

 if (VAR_13 == VAR_14) {
  if (VAR_9 == VAR_11)
   return 0;
  if (VAR_11 > VAR_9 && VAR_11 < VAR_9 + VAR_12)
   return -VAR_1;
 }

 FUNC_17(VAR_13);
 if (VAR_13 != VAR_14) {
  VAR_19 = -VAR_0;
  if (!FUNC_18(VAR_14))
   goto out;
 }

 VAR_19 = -VAR_1;
 if (VAR_9 + VAR_12 > VAR_13->i_size || VAR_9 + VAR_12 < VAR_9)
  goto out_unlock;
 if (VAR_12 == 0)
  VAR_16 = VAR_12 = VAR_13->i_size - VAR_9;
 if (VAR_9 + VAR_12 == VAR_13->i_size)
  VAR_12 = FUNC_0(VAR_13->i_size, VAR_5) - VAR_9;
 if (VAR_12 == 0) {
  VAR_19 = 0;
  goto out_unlock;
 }

 VAR_18 = VAR_14->i_size;
 if (VAR_11 + VAR_16 > VAR_14->i_size)
  VAR_17 = VAR_11 + VAR_16;


 if (!FUNC_3(VAR_9, VAR_5) ||
   !FUNC_3(VAR_9 + VAR_12, VAR_5) ||
   !FUNC_3(VAR_11, VAR_5))
  goto out_unlock;

 VAR_19 = FUNC_10(VAR_13);
 if (VAR_19)
  goto out_unlock;

 VAR_19 = FUNC_10(VAR_14);
 if (VAR_19)
  goto out_unlock;


 VAR_19 = FUNC_16(VAR_13->i_mapping,
     VAR_9, VAR_9 + VAR_12);
 if (VAR_19)
  goto out_unlock;

 VAR_19 = FUNC_16(VAR_14->i_mapping,
     VAR_11, VAR_11 + VAR_12);
 if (VAR_19)
  goto out_unlock;

 FUNC_9(VAR_15, 1);

 FUNC_7(&FUNC_1(VAR_13)->i_gc_rwsem[VAR_7]);
 if (VAR_13 != VAR_14) {
  VAR_19 = -VAR_0;
  if (!FUNC_8(&FUNC_1(VAR_14)->i_gc_rwsem[VAR_7]))
   goto out_src;
 }

 FUNC_12(VAR_15);
 VAR_19 = FUNC_6(VAR_13, VAR_14, VAR_9 >> VAR_6,
    VAR_11 >> VAR_6,
    VAR_12 >> VAR_6, 0);

 if (!VAR_19) {
  if (VAR_17)
   FUNC_11(VAR_14, VAR_17);
  else if (VAR_18 != VAR_14->i_size)
   FUNC_11(VAR_14, VAR_18);
 }
 FUNC_14(VAR_15);

 if (VAR_13 != VAR_14)
  FUNC_21(&FUNC_1(VAR_14)->i_gc_rwsem[VAR_7]);
out_src:
 FUNC_21(&FUNC_1(VAR_13)->i_gc_rwsem[VAR_7]);
out_unlock:
 if (VAR_13 != VAR_14)
  FUNC_19(VAR_14);
out:
 FUNC_19(VAR_13);
 return VAR_19;
}
