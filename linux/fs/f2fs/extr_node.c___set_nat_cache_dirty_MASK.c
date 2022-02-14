
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat_entry_set {int entry_list; int entry_cnt; } ;
struct nat_entry {int list; } ;
struct f2fs_nm_info {int nat_list_lock; int dirty_nat_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct nat_entry_set* FUNC_0 (struct f2fs_nm_info*,struct nat_entry*) ;
 scalar_t__ FUNC_1 (struct nat_entry*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (struct nat_entry*) ;
 int FUNC_5 (struct nat_entry*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct f2fs_nm_info *VAR_3,
      struct nat_entry *VAR_4)
{
 struct nat_entry_set *VAR_5;
 bool VAR_6 = FUNC_4(VAR_4) == VAR_2;

 if (!VAR_6)
  VAR_5 = FUNC_0(VAR_3, VAR_4);






 if (!VAR_6 && (FUNC_1(VAR_4, VAR_1) ||
    !FUNC_1(VAR_4, VAR_0)))
  VAR_5->entry_cnt++;

 FUNC_5(VAR_4, VAR_1, VAR_6);

 if (FUNC_1(VAR_4, VAR_0))
  goto refresh_list;

 VAR_3->dirty_nat_cnt++;
 FUNC_5(VAR_4, VAR_0, 1);
refresh_list:
 FUNC_6(&VAR_3->nat_list_lock);
 if (VAR_6)
  FUNC_2(&VAR_4->list);
 else
  FUNC_3(&VAR_4->list, &VAR_5->entry_list);
 FUNC_7(&VAR_3->nat_list_lock);
}
