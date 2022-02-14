
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat_entry {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int nat_tree_lock; } ;
typedef int nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 struct nat_entry* FUNC_1 (struct f2fs_nm_info*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nat_entry*,int ) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct f2fs_sb_info *VAR_2, nid_t VAR_3)
{
 struct f2fs_nm_info *VAR_4 = FUNC_0(VAR_2);
 struct nat_entry *VAR_5;
 bool VAR_6 = 0;

 FUNC_2(&VAR_4->nat_tree_lock);
 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (VAR_5) {
  if (!FUNC_3(VAR_5, VAR_1) &&
    !FUNC_3(VAR_5, VAR_0))
   VAR_6 = 1;
 }
 FUNC_4(&VAR_4->nat_tree_lock);
 return VAR_6;
}
