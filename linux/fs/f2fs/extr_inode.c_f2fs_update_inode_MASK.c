
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_3__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct inode {scalar_t__ i_nlink; scalar_t__ i_generation; TYPE_1__ i_mtime; TYPE_1__ i_ctime; TYPE_1__ i_atime; int i_mode; int i_blocks; } ;
struct f2fs_inode {void* i_crtime_nsec; void* i_crtime; void* i_projid; void* i_inline_xattr_size; void* i_extra_isize; int i_dir_level; void* i_generation; void* i_pino; void* i_flags; void* i_xattr_nid; void* i_gc_failures; void* i_current_depth; void* i_mtime_nsec; void* i_ctime_nsec; void* i_atime_nsec; void* i_mtime; void* i_ctime; void* i_atime; int i_ext; void* i_blocks; void* i_size; void* i_links; void* i_gid; void* i_uid; int i_advise; void* i_mode; } ;
struct extent_tree {int lock; int largest; } ;
typedef scalar_t__ projid_t ;
struct TYPE_4__ {scalar_t__ i_current_depth; scalar_t__ i_xattr_nid; scalar_t__ i_flags; scalar_t__ i_pino; TYPE_1__ i_crtime; TYPE_1__* i_disk_time; int i_extra_isize; int i_projid; int i_inline_xattr_size; int i_dir_level; int * i_gc_failures; int i_advise; struct extent_tree* extent_tree; } ;


 scalar_t__ FUNC_0 (struct f2fs_inode*,int ,int ) ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 struct f2fs_inode* FUNC_2 (struct page*) ;
 int FUNC_3 (struct inode*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct inode*,struct f2fs_inode*) ;
 int FUNC_8 (struct page*) ;
 void* FUNC_9 (int ) ;
 void* FUNC_10 (scalar_t__) ;
 void* FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 int FUNC_13 (int ,struct page*) ;
 int FUNC_14 (struct inode*) ;
 scalar_t__ FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ) ;
 int FUNC_18 (struct page*,int ,int,int) ;
 scalar_t__ FUNC_19 (int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_20 (struct inode*) ;
 int VAR_3 ;
 scalar_t__ FUNC_21 (struct inode*) ;
 scalar_t__ FUNC_22 (struct inode*) ;
 int VAR_4 ;
 int FUNC_23 (int *,int ,int) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct page*) ;
 int FUNC_27 (int *,int *) ;
 int FUNC_28 (struct inode*,struct f2fs_inode*) ;

void FUNC_29(struct inode *VAR_5, struct page *VAR_6)
{
 struct f2fs_inode *VAR_7;
 struct extent_tree *VAR_8 = FUNC_1(VAR_5)->extent_tree;

 FUNC_18(VAR_6, VAR_1, 1, 1);
 FUNC_26(VAR_6);

 FUNC_14(VAR_5);

 VAR_7 = FUNC_2(VAR_6);

 VAR_7->i_mode = FUNC_9(VAR_5->i_mode);
 VAR_7->i_advise = FUNC_1(VAR_5)->i_advise;
 VAR_7->i_uid = FUNC_10(FUNC_22(VAR_5));
 VAR_7->i_gid = FUNC_10(FUNC_20(VAR_5));
 VAR_7->i_links = FUNC_10(VAR_5->i_nlink);
 VAR_7->i_size = FUNC_11(FUNC_21(VAR_5));
 VAR_7->i_blocks = FUNC_11(FUNC_4(VAR_5->i_blocks) + 1);

 if (VAR_8) {
  FUNC_24(&VAR_8->lock);
  FUNC_27(&VAR_8->largest, &VAR_7->i_ext);
  FUNC_25(&VAR_8->lock);
 } else {
  FUNC_23(&VAR_7->i_ext, 0, sizeof(VAR_7->i_ext));
 }
 FUNC_28(VAR_5, VAR_7);

 VAR_7->i_atime = FUNC_11(VAR_5->i_atime.tv_sec);
 VAR_7->i_ctime = FUNC_11(VAR_5->i_ctime.tv_sec);
 VAR_7->i_mtime = FUNC_11(VAR_5->i_mtime.tv_sec);
 VAR_7->i_atime_nsec = FUNC_10(VAR_5->i_atime.tv_nsec);
 VAR_7->i_ctime_nsec = FUNC_10(VAR_5->i_ctime.tv_nsec);
 VAR_7->i_mtime_nsec = FUNC_10(VAR_5->i_mtime.tv_nsec);
 if (FUNC_5(VAR_5->i_mode))
  VAR_7->i_current_depth =
   FUNC_10(FUNC_1(VAR_5)->i_current_depth);
 else if (FUNC_6(VAR_5->i_mode))
  VAR_7->i_gc_failures =
   FUNC_9(FUNC_1(VAR_5)->i_gc_failures[VAR_0]);
 VAR_7->i_xattr_nid = FUNC_10(FUNC_1(VAR_5)->i_xattr_nid);
 VAR_7->i_flags = FUNC_10(FUNC_1(VAR_5)->i_flags);
 VAR_7->i_pino = FUNC_10(FUNC_1(VAR_5)->i_pino);
 VAR_7->i_generation = FUNC_10(VAR_5->i_generation);
 VAR_7->i_dir_level = FUNC_1(VAR_5)->i_dir_level;

 if (FUNC_12(VAR_5)) {
  VAR_7->i_extra_isize = FUNC_9(FUNC_1(VAR_5)->i_extra_isize);

  if (FUNC_15(FUNC_3(VAR_5)))
   VAR_7->i_inline_xattr_size =
    FUNC_9(FUNC_1(VAR_5)->i_inline_xattr_size);

  if (FUNC_17(FUNC_3(VAR_5)) &&
   FUNC_0(VAR_7, FUNC_1(VAR_5)->i_extra_isize,
        VAR_3)) {
   projid_t VAR_9;

   VAR_9 = FUNC_19(&VAR_4,
      FUNC_1(VAR_5)->i_projid);
   VAR_7->i_projid = FUNC_10(VAR_9);
  }

  if (FUNC_16(FUNC_3(VAR_5)) &&
   FUNC_0(VAR_7, FUNC_1(VAR_5)->i_extra_isize,
        VAR_2)) {
   VAR_7->i_crtime =
    FUNC_11(FUNC_1(VAR_5)->i_crtime.tv_sec);
   VAR_7->i_crtime_nsec =
    FUNC_10(FUNC_1(VAR_5)->i_crtime.tv_nsec);
  }
 }

 FUNC_7(VAR_5, VAR_7);


 if (VAR_5->i_nlink == 0)
  FUNC_8(VAR_6);

 FUNC_1(VAR_5)->i_disk_time[0] = VAR_5->i_atime;
 FUNC_1(VAR_5)->i_disk_time[1] = VAR_5->i_ctime;
 FUNC_1(VAR_5)->i_disk_time[2] = VAR_5->i_mtime;
 FUNC_1(VAR_5)->i_disk_time[3] = FUNC_1(VAR_5)->i_crtime;




}
