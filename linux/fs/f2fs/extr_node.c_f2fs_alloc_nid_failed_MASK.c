
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct free_nid {int dummy; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int nid_list_lock; int available_nids; } ;
typedef int nid_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_2 ;
 struct free_nid* FUNC_1 (struct f2fs_nm_info*,int ) ;
 int FUNC_2 (struct f2fs_sb_info*,struct free_nid*,int ,int ) ;
 int FUNC_3 (struct f2fs_sb_info*,struct free_nid*,int ) ;
 int FUNC_4 (struct f2fs_sb_info*,int ) ;
 int FUNC_5 (struct f2fs_sb_info*,int) ;
 int VAR_3 ;
 int FUNC_6 (int ,struct free_nid*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct f2fs_sb_info*,int ,int,int) ;

void FUNC_10(struct f2fs_sb_info *VAR_4, nid_t VAR_5)
{
 struct f2fs_nm_info *VAR_6 = FUNC_0(VAR_4);
 struct free_nid *VAR_7;
 bool VAR_8 = 0;

 if (!VAR_5)
  return;

 FUNC_7(&VAR_6->nid_list_lock);
 VAR_7 = FUNC_1(VAR_6, VAR_5);
 FUNC_5(VAR_4, !VAR_7);

 if (!FUNC_4(VAR_4, VAR_1)) {
  FUNC_3(VAR_4, VAR_7, VAR_2);
  VAR_8 = 1;
 } else {
  FUNC_2(VAR_4, VAR_7, VAR_2, VAR_0);
 }

 VAR_6->available_nids++;

 FUNC_9(VAR_4, VAR_5, 1, 0);

 FUNC_8(&VAR_6->nid_list_lock);

 if (VAR_8)
  FUNC_6(VAR_3, VAR_7);
}
