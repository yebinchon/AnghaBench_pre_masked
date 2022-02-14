
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat_entry {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int nid_list_lock; int available_nids; } ;
struct f2fs_nat_entry {int block_addr; } ;
struct f2fs_journal {int dummy; } ;
struct curseg_info {int journal_rwsem; struct f2fs_journal* journal; } ;
typedef scalar_t__ nid_t ;


 int VAR_0 ;
 struct curseg_info* FUNC_0 (struct f2fs_sb_info*,int ) ;
 int VAR_1 ;
 struct f2fs_nm_info* FUNC_1 (struct f2fs_sb_info*) ;
 scalar_t__ VAR_2 ;
 struct nat_entry* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (struct f2fs_nm_info*,struct nat_entry*,struct f2fs_nat_entry*,int) ;
 struct nat_entry* FUNC_4 (struct f2fs_nm_info*,scalar_t__) ;
 int FUNC_5 (struct f2fs_nm_info*,struct nat_entry*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct nat_entry*,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 struct f2fs_nat_entry FUNC_9 (struct f2fs_journal*,int) ;
 int FUNC_10 (struct f2fs_journal*) ;
 int FUNC_11 (struct f2fs_journal*,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct f2fs_journal*,int) ;

__attribute__((used)) static void FUNC_16(struct f2fs_sb_info *VAR_3)
{
 struct f2fs_nm_info *VAR_4 = FUNC_1(VAR_3);
 struct curseg_info *VAR_5 = FUNC_0(VAR_3, VAR_0);
 struct f2fs_journal *VAR_6 = VAR_5->journal;
 int VAR_7;

 FUNC_6(&VAR_5->journal_rwsem);
 for (VAR_7 = 0; VAR_7 < FUNC_10(VAR_6); VAR_7++) {
  struct nat_entry *VAR_8;
  struct f2fs_nat_entry VAR_9;
  nid_t VAR_10 = FUNC_8(FUNC_11(VAR_6, VAR_7));

  VAR_9 = FUNC_9(VAR_6, VAR_7);

  VAR_8 = FUNC_4(VAR_4, VAR_10);
  if (!VAR_8) {
   VAR_8 = FUNC_2(VAR_10, 1);
   FUNC_3(VAR_4, VAR_8, &VAR_9, 1);
  }






  if (!FUNC_7(VAR_8, VAR_1) &&
    FUNC_8(VAR_9.block_addr) == VAR_2) {
   FUNC_12(&VAR_4->nid_list_lock);
   VAR_4->available_nids--;
   FUNC_13(&VAR_4->nid_list_lock);
  }

  FUNC_5(VAR_4, VAR_8);
 }
 FUNC_15(VAR_6, -VAR_7);
 FUNC_14(&VAR_5->journal_rwsem);
}
