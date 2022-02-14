
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct free_nid {int state; int nid; int list; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int free_nid_root; int * nid_cnt; } ;
typedef enum nid_state { ____Placeholder_nid_state } nid_state ;


 int VAR_0 ;
 struct f2fs_nm_info* FUNC_0 (struct f2fs_sb_info*) ;
 int FUNC_1 (struct f2fs_sb_info*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(struct f2fs_sb_info *VAR_1,
   struct free_nid *VAR_2, enum nid_state VAR_3)
{
 struct f2fs_nm_info *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_3 != VAR_2->state);
 VAR_4->nid_cnt[VAR_3]--;
 if (VAR_3 == VAR_0)
  FUNC_2(&VAR_2->list);
 FUNC_3(&VAR_4->free_nid_root, VAR_2->nid);
}
