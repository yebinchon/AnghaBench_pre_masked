
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat_entry {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int nat_tree_lock; } ;
struct f2fs_nat_entry {scalar_t__ version; int block_addr; int ino; } ;
typedef int nid_t ;


 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 struct nat_entry* FUNC_1 (int ,int) ;
 int FUNC_2 (struct nat_entry*) ;
 struct nat_entry* FUNC_3 (struct f2fs_nm_info*,struct nat_entry*,struct f2fs_nat_entry*,int) ;
 struct nat_entry* FUNC_4 (struct f2fs_nm_info*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct f2fs_sb_info*,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct nat_entry*) ;
 scalar_t__ FUNC_9 (struct nat_entry*) ;
 scalar_t__ FUNC_10 (struct nat_entry*) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static void FUNC_12(struct f2fs_sb_info *VAR_0, nid_t VAR_1,
      struct f2fs_nat_entry *VAR_2)
{
 struct f2fs_nm_info *VAR_3 = FUNC_0(VAR_0);
 struct nat_entry *VAR_4, *VAR_5;

 VAR_4 = FUNC_1(VAR_1, 0);
 if (!VAR_4)
  return;

 FUNC_5(&VAR_3->nat_tree_lock);
 VAR_5 = FUNC_4(VAR_3, VAR_1);
 if (!VAR_5)
  VAR_5 = FUNC_3(VAR_3, VAR_4, VAR_2, 0);
 else
  FUNC_6(VAR_0, FUNC_9(VAR_5) != FUNC_7(VAR_2->ino) ||
    FUNC_8(VAR_5) !=
     FUNC_7(VAR_2->block_addr) ||
    FUNC_10(VAR_5) != VAR_2->version);
 FUNC_11(&VAR_3->nat_tree_lock);
 if (VAR_5 != VAR_4)
  FUNC_2(VAR_4);
}
