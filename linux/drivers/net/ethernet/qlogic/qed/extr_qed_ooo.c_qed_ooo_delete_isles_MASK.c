
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct qed_ooo_isle {int list_entry; int buffers_list; } ;
struct qed_ooo_info {int free_isles_list; int cur_isles_number; int free_buffers_list; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 struct qed_ooo_isle* FUNC_5 (struct qed_hwfn*,struct qed_ooo_info*,int ,scalar_t__) ;

void FUNC_6(struct qed_hwfn *VAR_0,
     struct qed_ooo_info *VAR_1,
     u32 VAR_2, u8 VAR_3, u8 VAR_4)
{
 struct qed_ooo_isle *VAR_5 = ((void*)0);
 u8 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3);
  if (!VAR_5) {
   FUNC_0(VAR_0,
      "Isle %d is not found(cid %d)\n",
      VAR_3, VAR_2);
   return;
  }
  if (FUNC_3(&VAR_5->buffers_list))
   FUNC_0(VAR_0,
      "Isle %d is empty(cid %d)\n", VAR_3, VAR_2);
  else
   FUNC_4(&VAR_5->buffers_list,
           &VAR_1->free_buffers_list);

  FUNC_2(&VAR_5->list_entry);
  VAR_1->cur_isles_number--;
  FUNC_1(&VAR_5->list_entry, &VAR_1->free_isles_list);
 }
}
