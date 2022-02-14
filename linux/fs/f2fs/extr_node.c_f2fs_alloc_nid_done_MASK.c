
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct free_nid {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int nid_list_lock; } ;
typedef int nid_t ;


 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_0 ;
 struct free_nid* FUNC_1 (struct f2fs_nm_info*,int ) ;
 int FUNC_2 (struct f2fs_sb_info*,struct free_nid*,int ) ;
 int FUNC_3 (struct f2fs_sb_info*,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,struct free_nid*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct f2fs_sb_info *VAR_2, nid_t VAR_3)
{
 struct f2fs_nm_info *VAR_4 = FUNC_0(VAR_2);
 struct free_nid *VAR_5;

 FUNC_5(&VAR_4->nid_list_lock);
 VAR_5 = FUNC_1(VAR_4, VAR_3);
 FUNC_3(VAR_2, !VAR_5);
 FUNC_2(VAR_2, VAR_5, VAR_0);
 FUNC_6(&VAR_4->nid_list_lock);

 FUNC_4(VAR_1, VAR_5);
}
