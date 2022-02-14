
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat_entry {int list; } ;
struct f2fs_nm_info {int nat_list_lock; int nat_entries; int nat_root; } ;
typedef int nid_t ;


 int VAR_0 ;
 int FUNC_0 (struct nat_entry*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 struct nat_entry* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct nat_entry *FUNC_6(struct f2fs_nm_info *VAR_1, nid_t VAR_2)
{
 struct nat_entry *VAR_3;

 VAR_3 = FUNC_3(&VAR_1->nat_root, VAR_2);


 if (VAR_3 && !FUNC_0(VAR_3, VAR_0)) {
  FUNC_4(&VAR_1->nat_list_lock);
  if (!FUNC_1(&VAR_3->list))
   FUNC_2(&VAR_3->list, &VAR_1->nat_entries);
  FUNC_5(&VAR_1->nat_list_lock);
 }

 return VAR_3;
}
