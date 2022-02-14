
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {scalar_t__ sync_mode; scalar_t__ for_reclaim; } ;
struct page {scalar_t__ index; } ;
struct node_info {scalar_t__ blk_addr; } ;
struct f2fs_sb_info {int node_write; } ;
struct f2fs_io_info {int op_flags; int submitted; int io_type; scalar_t__ old_blkaddr; int new_blkaddr; struct writeback_control* io_wbc; int * encrypted_page; struct page* page; int op; int type; int ino; struct f2fs_sb_info* sbi; } ;
typedef scalar_t__ nid_t ;
typedef enum iostat_type { ____Placeholder_iostat_type } iostat_type ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct f2fs_sb_info* FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct f2fs_sb_info*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (struct f2fs_sb_info*,struct page*) ;
 int FUNC_9 (struct f2fs_sb_info*,int) ;
 int FUNC_10 (struct f2fs_sb_info*,int) ;
 int FUNC_11 (struct f2fs_sb_info*) ;
 int FUNC_12 (scalar_t__,struct f2fs_io_info*) ;
 scalar_t__ FUNC_13 (struct f2fs_sb_info*,scalar_t__,struct node_info*) ;
 scalar_t__ FUNC_14 (struct f2fs_sb_info*,struct page*) ;
 int FUNC_15 (struct f2fs_sb_info*,scalar_t__,int ) ;
 int FUNC_16 (struct f2fs_sb_info*,int ) ;
 int FUNC_17 (struct f2fs_sb_info*,int *,struct page*,int ,int ) ;
 int FUNC_18 (struct page*) ;
 scalar_t__ FUNC_19 (struct page*) ;
 int FUNC_20 (struct page*) ;
 int FUNC_21 (struct f2fs_sb_info*,int ) ;
 scalar_t__ FUNC_22 (struct page*) ;
 int FUNC_23 (struct writeback_control*,struct page*) ;
 int FUNC_24 (struct f2fs_sb_info*,struct node_info*,int ,int ) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (struct f2fs_sb_info*,int ) ;
 int FUNC_27 (struct page*,int ) ;
 scalar_t__ FUNC_28 (int) ;
 int FUNC_29 (struct page*) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (struct writeback_control*) ;

__attribute__((used)) static int FUNC_32(struct page *VAR_12, bool VAR_13, bool *VAR_14,
    struct writeback_control *VAR_15, bool VAR_16,
    enum iostat_type VAR_17, unsigned int *VAR_18)
{
 struct f2fs_sb_info *VAR_19 = FUNC_2(VAR_12);
 nid_t VAR_20;
 struct node_info VAR_21;
 struct f2fs_io_info VAR_22 = {
  .sbi = VAR_19,
  .ino = FUNC_18(VAR_12),
  .type = VAR_4,
  .op = VAR_7,
  .op_flags = FUNC_31(VAR_15),
  .page = VAR_12,
  .encrypted_page = ((void*)0),
  .submitted = 0,
  .io_type = VAR_17,
  .io_wbc = VAR_15,
 };
 unsigned int VAR_23;

 FUNC_27(VAR_12, VAR_4);

 if (FUNC_28(FUNC_11(VAR_19)))
  goto redirty_out;

 if (FUNC_28(FUNC_21(VAR_19, VAR_10)))
  goto redirty_out;

 if (!FUNC_21(VAR_19, VAR_9) &&
   VAR_15->sync_mode == VAR_11 &&
   FUNC_3(VAR_12) && FUNC_19(VAR_12))
  goto redirty_out;


 VAR_20 = FUNC_22(VAR_12);
 FUNC_10(VAR_19, VAR_12->index != VAR_20);

 if (FUNC_13(VAR_19, VAR_20, &VAR_21))
  goto redirty_out;

 if (VAR_15->for_reclaim) {
  if (!FUNC_7(&VAR_19->node_write))
   goto redirty_out;
 } else {
  FUNC_6(&VAR_19->node_write);
 }


 if (FUNC_28(VAR_21.blk_addr == VAR_5)) {
  FUNC_1(VAR_12);
  FUNC_5(VAR_19, VAR_2);
  FUNC_30(&VAR_19->node_write);
  FUNC_29(VAR_12);
  return 0;
 }

 if (FUNC_4(VAR_21.blk_addr) &&
  !FUNC_15(VAR_19, VAR_21.blk_addr,
     VAR_1)) {
  FUNC_30(&VAR_19->node_write);
  goto redirty_out;
 }

 if (VAR_13 && !FUNC_26(VAR_19, VAR_3))
  VAR_22.op_flags |= VAR_8 | VAR_6;

 FUNC_25(VAR_12);
 FUNC_0(VAR_12);

 if (FUNC_14(VAR_19, VAR_12)) {
  VAR_23 = FUNC_8(VAR_19, VAR_12);
  if (VAR_18)
   *VAR_18 = VAR_23;
 }

 VAR_22.old_blkaddr = VAR_21.blk_addr;
 FUNC_12(VAR_20, &VAR_22);
 FUNC_24(VAR_19, &VAR_21, VAR_22.new_blkaddr, FUNC_20(VAR_12));
 FUNC_5(VAR_19, VAR_2);
 FUNC_30(&VAR_19->node_write);

 if (VAR_15->for_reclaim) {
  FUNC_17(VAR_19, ((void*)0), VAR_12, 0, VAR_4);
  VAR_14 = ((void*)0);
 }

 FUNC_29(VAR_12);

 if (FUNC_28(FUNC_11(VAR_19))) {
  FUNC_16(VAR_19, VAR_4);
  VAR_14 = ((void*)0);
 }
 if (VAR_14)
  *VAR_14 = VAR_22.submitted;

 if (VAR_16)
  FUNC_9(VAR_19, 0);
 return 0;

redirty_out:
 FUNC_23(VAR_15, VAR_12);
 return VAR_0;
}
