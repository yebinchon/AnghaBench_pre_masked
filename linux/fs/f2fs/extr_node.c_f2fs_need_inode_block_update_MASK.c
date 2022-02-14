
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
 int VAR_2 ;
 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 struct nat_entry* FUNC_1 (struct f2fs_nm_info*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct nat_entry*,int ) ;
 int FUNC_4 (int *) ;

bool FUNC_5(struct f2fs_sb_info *VAR_3, nid_t VAR_4)
{
 struct f2fs_nm_info *VAR_5 = FUNC_0(VAR_3);
 struct nat_entry *VAR_6;
 bool VAR_7 = 1;

 FUNC_2(&VAR_5->nat_tree_lock);
 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6 && FUNC_3(VAR_6, VAR_1) &&
   (FUNC_3(VAR_6, VAR_2) ||
    FUNC_3(VAR_6, VAR_0)))
  VAR_7 = 0;
 FUNC_4(&VAR_5->nat_tree_lock);
 return VAR_7;
}
