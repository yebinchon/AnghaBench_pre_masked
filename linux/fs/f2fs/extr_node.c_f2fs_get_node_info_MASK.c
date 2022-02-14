
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct node_info {size_t nid; int version; int blk_addr; int ino; } ;
struct nat_entry {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int nat_tree_lock; } ;
struct f2fs_nat_entry {int block_addr; } ;
struct f2fs_nat_block {struct f2fs_nat_entry* entries; } ;
struct f2fs_journal {int dummy; } ;
struct curseg_info {int journal_rwsem; struct f2fs_journal* journal; } ;
typedef int pgoff_t ;
typedef size_t nid_t ;
typedef int block_t ;


 int VAR_0 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_3 ;
 struct f2fs_nm_info* FUNC_2 (struct f2fs_sb_info*) ;
 int FUNC_3 (struct page*) ;
 size_t FUNC_4 (size_t) ;
 scalar_t__ FUNC_5 (int ) ;
 struct nat_entry* FUNC_6 (struct f2fs_nm_info*,size_t) ;
 int FUNC_7 (struct f2fs_sb_info*,size_t,struct f2fs_nat_entry*) ;
 int FUNC_8 (struct f2fs_sb_info*,size_t) ;
 int FUNC_9 (int *) ;
 struct page* FUNC_10 (struct f2fs_sb_info*,int ) ;
 int FUNC_11 (struct f2fs_sb_info*,int ,int ) ;
 int FUNC_12 (struct f2fs_journal*,int ,size_t,int ) ;
 int FUNC_13 (struct page*,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct f2fs_nat_entry*,int ,int) ;
 int FUNC_16 (struct nat_entry*) ;
 int FUNC_17 (struct nat_entry*) ;
 int FUNC_18 (struct nat_entry*) ;
 struct f2fs_nat_entry FUNC_19 (struct f2fs_journal*,int) ;
 int FUNC_20 (struct node_info*,struct f2fs_nat_entry*) ;
 scalar_t__ FUNC_21 (struct page*) ;
 int FUNC_22 (int *) ;

int FUNC_23(struct f2fs_sb_info *VAR_4, nid_t VAR_5,
      struct node_info *VAR_6)
{
 struct f2fs_nm_info *VAR_7 = FUNC_2(VAR_4);
 struct curseg_info *VAR_8 = FUNC_0(VAR_4, VAR_0);
 struct f2fs_journal *VAR_9 = VAR_8->journal;
 nid_t VAR_10 = FUNC_4(VAR_5);
 struct f2fs_nat_block *VAR_11;
 struct page *VAR_12 = ((void*)0);
 struct f2fs_nat_entry VAR_13;
 struct nat_entry *VAR_14;
 pgoff_t VAR_15;
 block_t VAR_16;
 int VAR_17;

 VAR_6->nid = VAR_5;


 FUNC_9(&VAR_7->nat_tree_lock);
 VAR_14 = FUNC_6(VAR_7, VAR_5);
 if (VAR_14) {
  VAR_6->ino = FUNC_17(VAR_14);
  VAR_6->blk_addr = FUNC_16(VAR_14);
  VAR_6->version = FUNC_18(VAR_14);
  FUNC_22(&VAR_7->nat_tree_lock);
  return 0;
 }

 FUNC_15(&VAR_13, 0, sizeof(struct f2fs_nat_entry));


 FUNC_9(&VAR_8->journal_rwsem);
 VAR_17 = FUNC_12(VAR_9, VAR_3, VAR_5, 0);
 if (VAR_17 >= 0) {
  VAR_13 = FUNC_19(VAR_9, VAR_17);
  FUNC_20(VAR_6, &VAR_13);
 }
 FUNC_22(&VAR_8->journal_rwsem);
 if (VAR_17 >= 0) {
  FUNC_22(&VAR_7->nat_tree_lock);
  goto cache;
 }


 VAR_15 = FUNC_8(VAR_4, VAR_5);
 FUNC_22(&VAR_7->nat_tree_lock);

 VAR_12 = FUNC_10(VAR_4, VAR_15);
 if (FUNC_1(VAR_12))
  return FUNC_3(VAR_12);

 VAR_11 = (struct f2fs_nat_block *)FUNC_21(VAR_12);
 VAR_13 = VAR_11->entries[VAR_5 - VAR_10];
 FUNC_20(VAR_6, &VAR_13);
 FUNC_13(VAR_12, 1);
cache:
 VAR_16 = FUNC_14(VAR_13.block_addr);
 if (FUNC_5(VAR_16) &&
  !FUNC_11(VAR_4, VAR_16, VAR_1))
  return -VAR_2;


 FUNC_7(VAR_4, VAR_5, &VAR_13);
 return 0;
}
