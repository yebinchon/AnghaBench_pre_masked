
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qed_ooo_info {int ready_buffers_list; } ;
struct qed_ooo_buffer {int list_entry; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

void FUNC_2(struct qed_hwfn *VAR_0,
         struct qed_ooo_info *VAR_1,
         struct qed_ooo_buffer *VAR_2, u8 VAR_3)
{
 if (VAR_3)
  FUNC_1(&VAR_2->list_entry,
         &VAR_1->ready_buffers_list);
 else
  FUNC_0(&VAR_2->list_entry,
    &VAR_1->ready_buffers_list);
}
