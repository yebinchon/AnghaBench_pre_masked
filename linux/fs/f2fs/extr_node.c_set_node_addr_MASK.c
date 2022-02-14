
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_info {scalar_t__ blk_addr; int ino; int nid; } ;
struct nat_entry {int ni; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int nat_tree_lock; } ;
typedef scalar_t__ block_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 scalar_t__ VAR_4 ;
 struct nat_entry* FUNC_1 (int ,int) ;
 int FUNC_2 (struct nat_entry*) ;
 struct nat_entry* FUNC_3 (struct f2fs_nm_info*,struct nat_entry*,int *,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 struct nat_entry* FUNC_5 (struct f2fs_nm_info*,int ) ;
 int FUNC_6 (struct f2fs_nm_info*,struct nat_entry*) ;
 int FUNC_7 (int *,struct node_info*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct f2fs_sb_info*,int) ;
 int FUNC_10 (unsigned char) ;
 scalar_t__ FUNC_11 (struct nat_entry*) ;
 unsigned char FUNC_12 (struct nat_entry*) ;
 int FUNC_13 (struct nat_entry*,scalar_t__) ;
 int FUNC_14 (struct nat_entry*,int ) ;
 int FUNC_15 (struct nat_entry*,int ,int) ;
 int FUNC_16 (int *) ;

__attribute__((used)) static void FUNC_17(struct f2fs_sb_info *VAR_5, struct node_info *VAR_6,
   block_t VAR_7, bool VAR_8)
{
 struct f2fs_nm_info *VAR_9 = FUNC_0(VAR_5);
 struct nat_entry *VAR_10;
 struct nat_entry *VAR_11 = FUNC_1(VAR_6->nid, 1);

 FUNC_8(&VAR_9->nat_tree_lock);
 VAR_10 = FUNC_5(VAR_9, VAR_6->nid);
 if (!VAR_10) {
  VAR_10 = FUNC_3(VAR_9, VAR_11, ((void*)0), 1);
  FUNC_7(&VAR_10->ni, VAR_6);
  FUNC_9(VAR_5, VAR_6->blk_addr == VAR_3);
 } else if (VAR_7 == VAR_3) {





  FUNC_7(&VAR_10->ni, VAR_6);
  FUNC_9(VAR_5, VAR_6->blk_addr != VAR_4);
 }

 if (VAR_10 != VAR_11)
  FUNC_2(VAR_11);


 FUNC_9(VAR_5, FUNC_11(VAR_10) != VAR_6->blk_addr);
 FUNC_9(VAR_5, FUNC_11(VAR_10) == VAR_4 &&
   VAR_7 == VAR_4);
 FUNC_9(VAR_5, FUNC_11(VAR_10) == VAR_3 &&
   VAR_7 == VAR_3);
 FUNC_9(VAR_5, FUNC_4(FUNC_11(VAR_10)) &&
   VAR_7 == VAR_3);


 if (FUNC_11(VAR_10) != VAR_3 && VAR_7 == VAR_4) {
  unsigned char VAR_12 = FUNC_12(VAR_10);
  FUNC_14(VAR_10, FUNC_10(VAR_12));
 }


 FUNC_13(VAR_10, VAR_7);
 if (!FUNC_4(VAR_7))
  FUNC_15(VAR_10, VAR_2, 0);
 FUNC_6(VAR_9, VAR_10);


 if (VAR_6->nid != VAR_6->ino)
  VAR_10 = FUNC_5(VAR_9, VAR_6->ino);
 if (VAR_10) {
  if (VAR_8 && VAR_6->nid == VAR_6->ino)
   FUNC_15(VAR_10, VAR_0, 1);
  FUNC_15(VAR_10, VAR_1, VAR_8);
 }
 FUNC_16(&VAR_9->nat_tree_lock);
}
