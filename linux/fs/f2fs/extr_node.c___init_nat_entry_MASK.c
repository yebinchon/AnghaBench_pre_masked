
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat_entry {int list; int ni; } ;
struct f2fs_nm_info {int nat_cnt; int nat_list_lock; int nat_entries; int nat_root; } ;
struct f2fs_nat_entry {int dummy; } ;


 int FUNC_0 (int *,int ,struct nat_entry*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct nat_entry*) ;
 int FUNC_3 (int *,struct f2fs_nat_entry*) ;
 scalar_t__ FUNC_4 (int *,int ,struct nat_entry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static struct nat_entry *FUNC_7(struct f2fs_nm_info *VAR_0,
 struct nat_entry *VAR_1, struct f2fs_nat_entry *VAR_2, bool VAR_3)
{
 if (VAR_3)
  FUNC_0(&VAR_0->nat_root, FUNC_2(VAR_1), VAR_1);
 else if (FUNC_4(&VAR_0->nat_root, FUNC_2(VAR_1), VAR_1))
  return ((void*)0);

 if (VAR_2)
  FUNC_3(&VAR_1->ni, VAR_2);

 FUNC_5(&VAR_0->nat_list_lock);
 FUNC_1(&VAR_1->list, &VAR_0->nat_entries);
 FUNC_6(&VAR_0->nat_list_lock);

 VAR_0->nat_cnt++;
 return VAR_1;
}
