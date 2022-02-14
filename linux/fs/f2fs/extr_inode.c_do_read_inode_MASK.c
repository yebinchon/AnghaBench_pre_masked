
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {void* tv_nsec; void* tv_sec; } ;
struct inode {TYPE_1__ i_mtime; TYPE_1__ i_ctime; TYPE_1__ i_atime; void* i_size; int i_ino; void* i_mode; void* i_generation; int i_blocks; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_inode_info {int i_flags; TYPE_1__ i_crtime; TYPE_1__* i_disk_time; void* i_extra_isize; int i_projid; void* last_disk_size; void* i_inline_xattr_size; int i_dir_level; void* i_pino; int i_advise; scalar_t__ flags; void* i_xattr_nid; void** i_gc_failures; void* i_current_depth; } ;
struct f2fs_inode {int i_crtime_nsec; int i_crtime; int i_projid; int i_inline_xattr_size; int i_extra_isize; int i_ext; int i_dir_level; int i_pino; int i_advise; int i_flags; int i_xattr_nid; int i_gc_failures; int i_current_depth; int i_generation; int i_mtime_nsec; int i_ctime_nsec; int i_atime_nsec; int i_mtime; int i_ctime; int i_atime; int i_blocks; int i_size; int i_links; int i_gid; int i_uid; int i_mode; } ;
typedef scalar_t__ projid_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct f2fs_inode*,void*,scalar_t__) ;
 struct f2fs_inode_info* FUNC_1 (struct inode*) ;
 struct f2fs_inode* FUNC_2 (struct page*) ;
 struct f2fs_sb_info* FUNC_3 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (void*) ;
 int FUNC_9 (struct inode*,struct f2fs_inode*) ;
 int FUNC_10 (struct inode*,struct page*) ;
 int FUNC_11 (struct f2fs_sb_info*,struct f2fs_inode*) ;
 scalar_t__ FUNC_12 (struct f2fs_sb_info*,int ) ;
 int FUNC_13 (struct inode*) ;
 struct page* FUNC_14 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_15 (struct inode*) ;
 scalar_t__ FUNC_16 (struct inode*) ;
 scalar_t__ FUNC_17 (struct inode*) ;
 scalar_t__ FUNC_18 (struct inode*) ;
 scalar_t__ FUNC_19 (struct inode*,int *) ;
 int FUNC_20 (struct f2fs_sb_info*,int ) ;
 int FUNC_21 (struct page*,int) ;
 scalar_t__ FUNC_22 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_23 (struct f2fs_sb_info*) ;
 scalar_t__ FUNC_24 (struct f2fs_sb_info*) ;
 int FUNC_25 (struct inode*,struct f2fs_inode*) ;
 scalar_t__ VAR_8 ;
 int FUNC_26 (struct inode*,void*) ;
 int FUNC_27 (struct inode*,void*) ;
 int VAR_9 ;
 int FUNC_28 (struct page*) ;
 void* FUNC_29 (int ) ;
 void* FUNC_30 (int ) ;
 void* FUNC_31 (int ) ;
 int FUNC_32 (int *,scalar_t__) ;
 int FUNC_33 (struct inode*,struct page*) ;
 int FUNC_34 (struct page*,int) ;
 int FUNC_35 (struct inode*,int ) ;
 int FUNC_36 (struct inode*,void*) ;
 int FUNC_37 (struct page*) ;
 int FUNC_38 (struct inode*) ;
 int FUNC_39 (struct inode*) ;
 int FUNC_40 (struct inode*) ;

__attribute__((used)) static int FUNC_41(struct inode *VAR_10)
{
 struct f2fs_sb_info *VAR_11 = FUNC_3(VAR_10);
 struct f2fs_inode_info *VAR_12 = FUNC_1(VAR_10);
 struct page *VAR_13;
 struct f2fs_inode *VAR_14;
 projid_t VAR_15;
 int VAR_16;


 if (FUNC_12(VAR_11, VAR_10->i_ino))
  return -VAR_2;

 VAR_13 = FUNC_14(VAR_11, VAR_10->i_ino);
 if (FUNC_4(VAR_13))
  return FUNC_5(VAR_13);

 VAR_14 = FUNC_2(VAR_13);

 VAR_10->i_mode = FUNC_29(VAR_14->i_mode);
 FUNC_27(VAR_10, FUNC_30(VAR_14->i_uid));
 FUNC_26(VAR_10, FUNC_30(VAR_14->i_gid));
 FUNC_36(VAR_10, FUNC_30(VAR_14->i_links));
 VAR_10->i_size = FUNC_31(VAR_14->i_size);
 VAR_10->i_blocks = FUNC_6(FUNC_31(VAR_14->i_blocks) - 1);

 VAR_10->i_atime.tv_sec = FUNC_31(VAR_14->i_atime);
 VAR_10->i_ctime.tv_sec = FUNC_31(VAR_14->i_ctime);
 VAR_10->i_mtime.tv_sec = FUNC_31(VAR_14->i_mtime);
 VAR_10->i_atime.tv_nsec = FUNC_30(VAR_14->i_atime_nsec);
 VAR_10->i_ctime.tv_nsec = FUNC_30(VAR_14->i_ctime_nsec);
 VAR_10->i_mtime.tv_nsec = FUNC_30(VAR_14->i_mtime_nsec);
 VAR_10->i_generation = FUNC_30(VAR_14->i_generation);
 if (FUNC_7(VAR_10->i_mode))
  VAR_12->i_current_depth = FUNC_30(VAR_14->i_current_depth);
 else if (FUNC_8(VAR_10->i_mode))
  VAR_12->i_gc_failures[VAR_7] =
     FUNC_29(VAR_14->i_gc_failures);
 VAR_12->i_xattr_nid = FUNC_30(VAR_14->i_xattr_nid);
 VAR_12->i_flags = FUNC_30(VAR_14->i_flags);
 if (FUNC_8(VAR_10->i_mode))
  VAR_12->i_flags &= ~VAR_4;
 VAR_12->flags = 0;
 VAR_12->i_advise = VAR_14->i_advise;
 VAR_12->i_pino = FUNC_30(VAR_14->i_pino);
 VAR_12->i_dir_level = VAR_14->i_dir_level;

 if (FUNC_19(VAR_10, &VAR_14->i_ext))
  FUNC_37(VAR_13);

 FUNC_25(VAR_10, VAR_14);

 VAR_12->i_extra_isize = FUNC_15(VAR_10) ?
     FUNC_29(VAR_14->i_extra_isize) : 0;

 if (FUNC_22(VAR_11)) {
  VAR_12->i_inline_xattr_size = FUNC_29(VAR_14->i_inline_xattr_size);
 } else if (FUNC_18(VAR_10) ||
    FUNC_17(VAR_10)) {
  VAR_12->i_inline_xattr_size = VAR_0;
 } else {







  VAR_12->i_inline_xattr_size = 0;
 }

 if (!FUNC_33(VAR_10, VAR_13)) {
  FUNC_21(VAR_13, 1);
  return -VAR_1;
 }


 if (FUNC_16(VAR_10) && !FUNC_13(VAR_10))
  FUNC_10(VAR_10, VAR_13);


 if (!FUNC_7(VAR_10->i_mode) && !FUNC_28(VAR_13)) {
  FUNC_34(VAR_13, 0);
  FUNC_37(VAR_13);
 }


 FUNC_9(VAR_10, VAR_14);

 if (FUNC_8(VAR_10->i_mode)) {
  VAR_16 = FUNC_11(VAR_11, VAR_14);
  if (VAR_16 < 0) {
   FUNC_21(VAR_13, 1);
   return VAR_16;
  }
  if (!VAR_16)
   FUNC_35(VAR_10, VAR_5);
 }

 if (!FUNC_20(VAR_11, VAR_10->i_ino))
  VAR_12->last_disk_size = VAR_10->i_size;

 if (VAR_12->i_flags & VAR_4)
  FUNC_35(VAR_10, VAR_6);

 if (FUNC_15(VAR_10) && FUNC_24(VAR_11) &&
   FUNC_0(VAR_14, VAR_12->i_extra_isize, VAR_15))
  VAR_15 = (projid_t)FUNC_30(VAR_14->i_projid);
 else
  VAR_15 = VAR_3;
 VAR_12->i_projid = FUNC_32(&VAR_9, VAR_15);

 if (FUNC_15(VAR_10) && FUNC_23(VAR_11) &&
   FUNC_0(VAR_14, VAR_12->i_extra_isize, VAR_8)) {
  VAR_12->i_crtime.tv_sec = FUNC_31(VAR_14->i_crtime);
  VAR_12->i_crtime.tv_nsec = FUNC_30(VAR_14->i_crtime_nsec);
 }

 FUNC_1(VAR_10)->i_disk_time[0] = VAR_10->i_atime;
 FUNC_1(VAR_10)->i_disk_time[1] = VAR_10->i_ctime;
 FUNC_1(VAR_10)->i_disk_time[2] = VAR_10->i_mtime;
 FUNC_1(VAR_10)->i_disk_time[3] = FUNC_1(VAR_10)->i_crtime;
 FUNC_21(VAR_13, 1);

 FUNC_40(VAR_10);
 FUNC_39(VAR_10);
 FUNC_38(VAR_10);

 return 0;
}
