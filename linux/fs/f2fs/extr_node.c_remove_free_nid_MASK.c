
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct free_nid {scalar_t__ state; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int nid_list_lock; } ;
typedef int nid_t ;


 scalar_t__ VAR_0 ;
 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 struct free_nid* FUNC_1 (struct f2fs_nm_info*,int ) ;
 int FUNC_2 (struct f2fs_sb_info*,struct free_nid*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_3 (int ,struct free_nid*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct f2fs_sb_info *VAR_2, nid_t VAR_3)
{
 struct f2fs_nm_info *VAR_4 = FUNC_0(VAR_2);
 struct free_nid *VAR_5;
 bool VAR_6 = 0;

 FUNC_4(&VAR_4->nid_list_lock);
 VAR_5 = FUNC_1(VAR_4, VAR_3);
 if (VAR_5 && VAR_5->state == VAR_0) {
  FUNC_2(VAR_2, VAR_5, VAR_0);
  VAR_6 = 1;
 }
 FUNC_5(&VAR_4->nid_list_lock);

 if (VAR_6)
  FUNC_3(VAR_1, VAR_5);
}
