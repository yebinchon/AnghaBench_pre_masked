
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_transaction {scalar_t__ state; int transid; } ;
struct btrfs_trans_handle {unsigned int type; int can_flush_pending_bgs; int bytes_reserved; int reloc_reserved; struct btrfs_block_rsv* block_rsv; int transid; int new_bgs; struct btrfs_fs_info* fs_info; int use_count; struct btrfs_root* root; struct btrfs_transaction* transaction; struct btrfs_block_rsv* orig_rsv; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_block_rsv {scalar_t__ full; } ;
struct btrfs_fs_info {unsigned int nodesize; struct btrfs_block_rsv trans_block_rsv; int sb; struct btrfs_transaction* running_transaction; struct btrfs_root* chunk_root; int fs_state; struct btrfs_block_rsv delayed_refs_rsv; } ;
typedef enum btrfs_reserve_flush_enum { ____Placeholder_btrfs_reserve_flush_enum } btrfs_reserve_flush_enum ;
struct TYPE_2__ {struct btrfs_trans_handle* journal_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_trans_handle* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct btrfs_trans_handle* FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int) ;
 unsigned int VAR_12 ;
 int FUNC_4 (struct btrfs_root*,struct btrfs_block_rsv*,int,int) ;
 int FUNC_5 (struct btrfs_fs_info*,struct btrfs_block_rsv*,int) ;
 int FUNC_6 (struct btrfs_fs_info*,unsigned int) ;
 int FUNC_7 (struct btrfs_trans_handle*) ;
 int FUNC_8 (struct btrfs_fs_info*,int) ;
 int FUNC_9 (struct btrfs_fs_info*,struct btrfs_block_rsv*,int) ;
 int FUNC_10 (struct btrfs_root*,int) ;
 int FUNC_11 (struct btrfs_root*,int,int) ;
 int FUNC_12 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int VAR_13 ;
 TYPE_1__* VAR_14 ;
 int FUNC_13 (struct btrfs_fs_info*,unsigned int) ;
 int FUNC_14 (int ,struct btrfs_trans_handle*) ;
 struct btrfs_trans_handle* FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (struct btrfs_fs_info*,unsigned int) ;
 scalar_t__ FUNC_17 (struct btrfs_root*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 () ;
 scalar_t__ FUNC_24 (int ,int *) ;
 int FUNC_25 (struct btrfs_fs_info*,char*,int ,int,int) ;
 scalar_t__ FUNC_26 (int) ;
 int FUNC_27 (struct btrfs_fs_info*) ;

__attribute__((used)) static struct btrfs_trans_handle *
FUNC_28(struct btrfs_root *VAR_15, unsigned int VAR_16,
    unsigned int VAR_17, enum btrfs_reserve_flush_enum VAR_18,
    bool VAR_19)
{
 struct btrfs_fs_info *VAR_20 = VAR_15->fs_info;
 struct btrfs_block_rsv *VAR_21 = &VAR_20->delayed_refs_rsv;
 struct btrfs_trans_handle *VAR_22;
 struct btrfs_transaction *VAR_23;
 u64 VAR_24 = 0;
 u64 VAR_25 = 0;
 bool VAR_26 = 0;
 int VAR_27;


 FUNC_0(VAR_14->journal_info != VAR_2);

 if (FUNC_24(VAR_0, &VAR_20->fs_state))
  return FUNC_1(-VAR_6);

 if (VAR_14->journal_info) {
  FUNC_3(VAR_17 & VAR_9);
  VAR_22 = VAR_14->journal_info;
  FUNC_18(&VAR_22->use_count);
  FUNC_3(FUNC_19(&VAR_22->use_count) > 2);
  VAR_22->orig_rsv = VAR_22->block_rsv;
  VAR_22->block_rsv = ((void*)0);
  goto got_it;
 }





 if (VAR_16 && VAR_15 != VAR_20->chunk_root) {
  struct btrfs_block_rsv *VAR_28 = &VAR_20->trans_block_rsv;
  u64 VAR_29 = 0;

  VAR_25 = VAR_16 * VAR_20->nodesize;
  VAR_27 = FUNC_11(VAR_15, VAR_25,
    VAR_19);
  if (VAR_27)
   return FUNC_1(VAR_27);
  VAR_24 = FUNC_6(VAR_20, VAR_16);
  if (VAR_21->full == 0) {
   VAR_29 = VAR_24;
   VAR_24 <<= 1;
  }




  if (FUNC_17(VAR_15)) {
   VAR_24 += VAR_20->nodesize;
   VAR_26 = 1;
  }

  VAR_27 = FUNC_4(VAR_15, VAR_28, VAR_24, VAR_18);
  if (VAR_27)
   goto reserve_fail;
  if (VAR_29) {
   FUNC_9(VAR_20, VAR_28,
         VAR_29);
   VAR_24 -= VAR_29;
  }
 } else if (VAR_16 == 0 && VAR_18 == VAR_1 &&
     !VAR_21->full) {







  VAR_27 = FUNC_8(VAR_20, VAR_18);
  if (VAR_27)
   goto reserve_fail;
 }
again:
 VAR_22 = FUNC_15(VAR_13, VAR_7);
 if (!VAR_22) {
  VAR_27 = -VAR_5;
  goto alloc_fail;
 }
 if (VAR_17 & VAR_12)
  FUNC_22(VAR_20->sb);

 if (FUNC_16(VAR_20, VAR_17))
  FUNC_27(VAR_20);

 do {
  VAR_27 = FUNC_13(VAR_20, VAR_17);
  if (VAR_27 == -VAR_3) {
   FUNC_27(VAR_20);
   if (FUNC_26(VAR_17 == VAR_8 ||
         VAR_17 == VAR_10))
    VAR_27 = -VAR_4;
  }
 } while (VAR_27 == -VAR_3);

 if (VAR_27 < 0)
  goto join_fail;

 VAR_23 = VAR_20->running_transaction;

 VAR_22->transid = VAR_23->transid;
 VAR_22->transaction = VAR_23;
 VAR_22->root = VAR_15;
 FUNC_20(&VAR_22->use_count, 1);
 VAR_22->fs_info = VAR_15->fs_info;

 VAR_22->type = VAR_17;
 VAR_22->can_flush_pending_bgs = 1;
 FUNC_2(&VAR_22->new_bgs);

 FUNC_23();
 if (VAR_23->state >= VAR_11 &&
     FUNC_16(VAR_20, VAR_17)) {
  VAR_14->journal_info = VAR_22;
  FUNC_7(VAR_22);
  goto again;
 }

 if (VAR_24) {
  FUNC_25(VAR_20, "transaction",
           VAR_22->transid, VAR_24, 1);
  VAR_22->block_rsv = &VAR_20->trans_block_rsv;
  VAR_22->bytes_reserved = VAR_24;
  VAR_22->reloc_reserved = VAR_26;
 }

got_it:
 FUNC_12(VAR_22, VAR_15);

 if (!VAR_14->journal_info)
  VAR_14->journal_info = VAR_22;
 return VAR_22;

join_fail:
 if (VAR_17 & VAR_12)
  FUNC_21(VAR_20->sb);
 FUNC_14(VAR_13, VAR_22);
alloc_fail:
 if (VAR_24)
  FUNC_5(VAR_20, &VAR_20->trans_block_rsv,
     VAR_24);
reserve_fail:
 FUNC_10(VAR_15, VAR_25);
 return FUNC_1(VAR_27);
}
