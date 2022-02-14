
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nat_entry {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int nat_tree_lock; } ;
typedef int nid_t ;


 int VAR_0 ;
 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 struct nat_entry* FUNC_1 (struct f2fs_nm_info*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nat_entry*,int ) ;
 int FUNC_4 (int *) ;

bool FUNC_5(struct f2fs_sb_info *VAR_1, nid_t VAR_2)
{
 struct f2fs_nm_info *VAR_3 = FUNC_0(VAR_1);
 struct nat_entry *VAR_4;
 bool VAR_5 = 1;

 FUNC_2(&VAR_3->nat_tree_lock);
 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4 && !FUNC_3(VAR_4, VAR_0))
  VAR_5 = 0;
 FUNC_4(&VAR_3->nat_tree_lock);
 return VAR_5;
}
