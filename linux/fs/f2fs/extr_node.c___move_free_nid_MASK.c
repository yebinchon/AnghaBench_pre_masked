
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct free_nid {int state; int list; } ;
struct f2fs_sb_info {int dummy; } ;
struct f2fs_nm_info {int free_nid_list; int * nid_cnt; } ;
typedef enum nid_state { ____Placeholder_nid_state } nid_state ;


 int FUNC_0 (int) ;

 struct f2fs_nm_info* FUNC_1 (struct f2fs_sb_info*) ;

 int FUNC_2 (struct f2fs_sb_info*,int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct f2fs_sb_info *VAR_0, struct free_nid *VAR_1,
   enum nid_state VAR_2, enum nid_state VAR_3)
{
 struct f2fs_nm_info *VAR_4 = FUNC_1(VAR_0);

 FUNC_2(VAR_0, VAR_2 != VAR_1->state);
 VAR_1->state = VAR_3;
 VAR_4->nid_cnt[VAR_2]--;
 VAR_4->nid_cnt[VAR_3]++;

 switch (VAR_3) {
 case 128:
  FUNC_4(&VAR_1->list);
  break;
 case 129:
  FUNC_3(&VAR_1->list, &VAR_4->free_nid_list);
  break;
 default:
  FUNC_0(1);
 }
}
