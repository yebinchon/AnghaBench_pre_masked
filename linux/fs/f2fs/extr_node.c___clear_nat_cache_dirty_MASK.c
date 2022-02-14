
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat_entry_set {int entry_cnt; } ;
struct nat_entry {int list; } ;
struct f2fs_nm_info {int dirty_nat_cnt; int nat_list_lock; int nat_entries; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct nat_entry*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct f2fs_nm_info *VAR_1,
  struct nat_entry_set *VAR_2, struct nat_entry *VAR_3)
{
 FUNC_2(&VAR_1->nat_list_lock);
 FUNC_0(&VAR_3->list, &VAR_1->nat_entries);
 FUNC_3(&VAR_1->nat_list_lock);

 FUNC_1(VAR_3, VAR_0, 0);
 VAR_2->entry_cnt--;
 VAR_1->dirty_nat_cnt--;
}
