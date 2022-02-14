
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct qed_ooo_isle {int list_entry; int buffers_list; } ;
struct qed_ooo_info {int free_isles_list; int ready_buffers_list; int cur_isles_number; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 struct qed_ooo_isle* FUNC_4 (struct qed_hwfn*,struct qed_ooo_info*,int ,scalar_t__) ;

void FUNC_5(struct qed_hwfn *VAR_0,
   struct qed_ooo_info *VAR_1, u32 VAR_2, u8 VAR_3)
{
 struct qed_ooo_isle *VAR_4 = ((void*)0);
 struct qed_ooo_isle *VAR_5 = ((void*)0);

 VAR_4 = FUNC_4(VAR_0, VAR_1, VAR_2,
      VAR_3 + 1);
 if (!VAR_4) {
  FUNC_0(VAR_0,
     "Right isle %d is not found(cid %d)\n",
     VAR_3 + 1, VAR_2);
  return;
 }

 FUNC_2(&VAR_4->list_entry);
 VAR_1->cur_isles_number--;
 if (VAR_3) {
  VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2,
      VAR_3);
  if (!VAR_5) {
   FUNC_0(VAR_0,
      "Left isle %d is not found(cid %d)\n",
      VAR_3, VAR_2);
   return;
  }
  FUNC_3(&VAR_4->buffers_list,
          &VAR_5->buffers_list);
 } else {
  FUNC_3(&VAR_4->buffers_list,
          &VAR_1->ready_buffers_list);
 }
 FUNC_1(&VAR_4->list_entry, &VAR_1->free_isles_list);
}
