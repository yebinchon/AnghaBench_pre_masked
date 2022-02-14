
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct writeback_control {scalar_t__ for_reclaim; } ;
struct page {int index; TYPE_1__* mapping; } ;
struct inode {int i_mode; int i_ino; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_io_info {int submitted; int io_type; int need_lock; int * last_block; struct bio** bio; struct writeback_control* io_wbc; int * encrypted_page; struct page* page; int old_blkaddr; int op_flags; int op; int type; int ino; struct f2fs_sb_info* sbi; } ;
struct bio {int dummy; } ;
typedef int sector_t ;
typedef int pgoff_t ;
typedef int loff_t ;
typedef enum iostat_type { ____Placeholder_iostat_type } iostat_type ;
struct TYPE_4__ {int last_disk_size; int cp_task; int i_sem; } ;
struct TYPE_3__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 struct f2fs_sb_info* FUNC_2 (struct inode*) ;
 int VAR_6 ;
 int FUNC_3 (struct inode*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned long long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct inode*,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct f2fs_sb_info*,int ) ;
 int FUNC_9 (struct f2fs_sb_info*,int) ;
 int FUNC_10 (struct f2fs_sb_info*) ;
 int FUNC_11 (struct f2fs_io_info*) ;
 scalar_t__ FUNC_12 (struct inode*) ;
 scalar_t__ FUNC_13 (struct inode*) ;
 scalar_t__ FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct f2fs_sb_info*,struct bio**,struct page*) ;
 int FUNC_17 (struct f2fs_sb_info*,int ) ;
 int FUNC_18 (struct f2fs_sb_info*,int *,struct page*,int ,int ) ;
 scalar_t__ FUNC_19 (struct inode*) ;
 int FUNC_20 (struct inode*,struct page*) ;
 int FUNC_21 (struct inode*) ;
 scalar_t__ FUNC_22 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (struct inode*) ;
 int FUNC_25 (struct f2fs_sb_info*,int ) ;
 int FUNC_26 (TYPE_1__*,int ) ;
 int FUNC_27 (struct writeback_control*,struct page*) ;
 int FUNC_28 (struct inode*,int ) ;
 int FUNC_29 (struct page*,int ) ;
 scalar_t__ FUNC_30 (int ) ;
 int FUNC_31 (struct page*) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (struct writeback_control*) ;
 int FUNC_34 (struct page*,unsigned int,int) ;

__attribute__((used)) static int FUNC_35(struct page *VAR_15, bool *VAR_16,
    struct bio **VAR_17,
    sector_t *VAR_18,
    struct writeback_control *VAR_19,
    enum iostat_type VAR_20)
{
 struct inode *VAR_21 = VAR_15->mapping->host;
 struct f2fs_sb_info *VAR_22 = FUNC_2(VAR_21);
 loff_t VAR_23 = FUNC_23(VAR_21);
 const pgoff_t VAR_24 = ((unsigned long long) VAR_23)
       >> VAR_11;
 loff_t VAR_25 = (VAR_15->index + 1) << VAR_11;
 unsigned VAR_26 = 0;
 bool VAR_27 = 0;
 int VAR_28 = 0;
 struct f2fs_io_info VAR_29 = {
  .sbi = VAR_22,
  .ino = VAR_21->i_ino,
  .type = VAR_2,
  .op = VAR_13,
  .op_flags = FUNC_33(VAR_19),
  .old_blkaddr = VAR_10,
  .page = VAR_15,
  .encrypted_page = ((void*)0),
  .submitted = 0,
  .need_lock = VAR_9,
  .io_type = VAR_20,
  .io_wbc = VAR_19,
  .bio = VAR_17,
  .last_block = VAR_18,
 };

 FUNC_29(VAR_15, VAR_2);


 if (FUNC_30(FUNC_10(VAR_22))) {
  FUNC_26(VAR_15->mapping, -VAR_4);




  if (FUNC_4(VAR_21->i_mode))
   goto redirty_out;
  goto out;
 }

 if (FUNC_30(FUNC_25(VAR_22, VAR_14)))
  goto redirty_out;

 if (VAR_15->index < VAR_24 || FUNC_19(VAR_21))
  goto write;





 VAR_26 = VAR_23 & (VAR_12 - 1);
 if ((VAR_15->index >= VAR_24 + 1) || !VAR_26)
  goto out;

 FUNC_34(VAR_15, VAR_26, VAR_12);
write:
 if (FUNC_13(VAR_21))
  goto out;

 if (FUNC_14(VAR_21) && (!VAR_15->index ||
   (!VAR_19->for_reclaim &&
   FUNC_8(VAR_22, VAR_1))))
  goto redirty_out;


 if (FUNC_4(VAR_21->i_mode)) {
  VAR_29.need_lock = VAR_7;
  VAR_28 = FUNC_11(&VAR_29);
  goto done;
 }

 if (!VAR_19->for_reclaim)
  VAR_27 = 1;
 else if (FUNC_22(VAR_22, 0, 0))
  goto redirty_out;
 else
  FUNC_28(VAR_21, VAR_6);

 VAR_28 = -VAR_3;
 if (FUNC_12(VAR_21)) {
  VAR_28 = FUNC_20(VAR_21, VAR_15);
  if (!VAR_28)
   goto out;
 }

 if (VAR_28 == -VAR_3) {
  VAR_28 = FUNC_11(&VAR_29);
  if (VAR_28 == -VAR_3) {
   VAR_29.need_lock = VAR_8;
   VAR_28 = FUNC_11(&VAR_29);
  }
 }

 if (VAR_28) {
  FUNC_21(VAR_21);
 } else {
  FUNC_7(&FUNC_1(VAR_21)->i_sem);
  if (FUNC_1(VAR_21)->last_disk_size < VAR_25)
   FUNC_1(VAR_21)->last_disk_size = VAR_25;
  FUNC_32(&FUNC_1(VAR_21)->i_sem);
 }

done:
 if (VAR_28 && VAR_28 != -VAR_5)
  goto redirty_out;

out:
 FUNC_24(VAR_21);
 if (VAR_28) {
  FUNC_0(VAR_15);
  FUNC_5(VAR_15);
 }

 if (VAR_19->for_reclaim) {
  FUNC_18(VAR_22, ((void*)0), VAR_15, 0, VAR_2);
  FUNC_6(VAR_21, VAR_6);
  FUNC_15(VAR_21);
  VAR_16 = ((void*)0);
 }

 FUNC_31(VAR_15);
 if (!FUNC_4(VAR_21->i_mode) && !FUNC_3(VAR_21) &&
     !FUNC_1(VAR_21)->cp_task) {
  FUNC_16(VAR_22, VAR_17, VAR_15);
  FUNC_9(VAR_22, VAR_27);
 }

 if (FUNC_30(FUNC_10(VAR_22))) {
  FUNC_16(VAR_22, VAR_17, VAR_15);
  FUNC_17(VAR_22, VAR_2);
  VAR_16 = ((void*)0);
 }

 if (VAR_16)
  *VAR_16 = VAR_29.submitted;

 return 0;

redirty_out:
 FUNC_27(VAR_19, VAR_15);






 if (!VAR_28 || VAR_19->for_reclaim)
  return VAR_0;
 FUNC_31(VAR_15);
 return VAR_28;
}
