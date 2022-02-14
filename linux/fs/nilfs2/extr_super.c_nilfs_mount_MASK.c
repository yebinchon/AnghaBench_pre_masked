
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ bd_fsfreeze_count; int s_mode; int s_flags; int s_root; int s_id; int bd_fsfreeze_mutex; } ;
struct nilfs_super_data {int flags; struct super_block* bdev; scalar_t__ cno; } ;
struct file_system_type {int dummy; } ;
struct dentry {int dummy; } ;
typedef int fmode_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (struct super_block*) ;
 struct dentry* FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct super_block*) ;
 int VAR_5 ;
 int FUNC_3 (struct super_block*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct super_block* FUNC_4 (char const*,int,struct file_system_type*) ;
 int FUNC_5 (struct super_block*,int) ;
 int FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct super_block*) ;
 struct dentry* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct super_block*,scalar_t__,struct dentry**) ;
 int FUNC_12 (struct super_block*,void*,int) ;
 scalar_t__ FUNC_13 (char*,struct nilfs_super_data*) ;
 int FUNC_14 (struct super_block*,int ,char*,char*) ;
 int FUNC_15 (struct super_block*,int*,void*) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct super_block*) ;
 int FUNC_18 (struct super_block*,int ) ;
 struct super_block* FUNC_19 (struct file_system_type*,int ,int ,int,struct super_block*) ;
 int FUNC_20 (int ,int,char*,struct super_block*) ;

__attribute__((used)) static struct dentry *
FUNC_21(struct file_system_type *VAR_11, int VAR_12,
      const char *VAR_13, void *VAR_14)
{
 struct nilfs_super_data VAR_15;
 struct super_block *VAR_16;
 fmode_t VAR_17 = VAR_3 | VAR_2;
 struct dentry *VAR_18;
 int VAR_19, VAR_20 = 0;

 if (!(VAR_12 & VAR_7))
  VAR_17 |= VAR_4;

 VAR_15.bdev = FUNC_4(VAR_13, VAR_17, VAR_11);
 if (FUNC_2(VAR_15.bdev))
  return FUNC_0(VAR_15.bdev);

 VAR_15.cno = 0;
 VAR_15.flags = VAR_12;
 if (FUNC_13((char *)VAR_14, &VAR_15)) {
  VAR_19 = -VAR_1;
  goto failed;
 }






 FUNC_9(&VAR_15.bdev->bd_fsfreeze_mutex);
 if (VAR_15.bdev->bd_fsfreeze_count > 0) {
  FUNC_10(&VAR_15.bdev->bd_fsfreeze_mutex);
  VAR_19 = -VAR_0;
  goto failed;
 }
 VAR_16 = FUNC_19(VAR_11, VAR_10, VAR_9, VAR_12,
   VAR_15.bdev);
 FUNC_10(&VAR_15.bdev->bd_fsfreeze_mutex);
 if (FUNC_2(VAR_16)) {
  VAR_19 = FUNC_3(VAR_16);
  goto failed;
 }

 if (!VAR_16->s_root) {
  VAR_20 = 1;


  VAR_16->s_mode = VAR_17;
  FUNC_20(VAR_16->s_id, sizeof(VAR_16->s_id), "%pg", VAR_15.bdev);
  FUNC_18(VAR_16, FUNC_6(VAR_15.bdev));

  VAR_19 = FUNC_12(VAR_16, VAR_14, VAR_12 & VAR_8 ? 1 : 0);
  if (VAR_19)
   goto failed_super;

  VAR_16->s_flags |= VAR_6;
 } else if (!VAR_15.cno) {
  if (FUNC_16(VAR_16->s_root)) {
   if ((VAR_12 ^ VAR_16->s_flags) & VAR_7) {
    FUNC_14(VAR_16, VAR_5,
       "the device already has a %s mount.",
       FUNC_17(VAR_16) ? "read-only" : "read/write");
    VAR_19 = -VAR_0;
    goto failed_super;
   }
  } else {




   VAR_19 = FUNC_15(VAR_16, &VAR_12, VAR_14);
   if (VAR_19)
    goto failed_super;
  }
 }

 if (VAR_15.cno) {
  VAR_19 = FUNC_11(VAR_16, VAR_15.cno, &VAR_18);
  if (VAR_19)
   goto failed_super;
 } else {
  VAR_18 = FUNC_8(VAR_16->s_root);
 }

 if (!VAR_20)
  FUNC_5(VAR_15.bdev, VAR_17);

 return VAR_18;

 failed_super:
 FUNC_7(VAR_16);

 failed:
 if (!VAR_20)
  FUNC_5(VAR_15.bdev, VAR_17);
 return FUNC_1(VAR_19);
}
