
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ooo_info {int free_buffers_list; } ;
struct qed_ooo_buffer {int list_entry; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct qed_hwfn *VAR_0,
        struct qed_ooo_info *VAR_1,
        struct qed_ooo_buffer *VAR_2)
{
 FUNC_0(&VAR_2->list_entry, &VAR_1->free_buffers_list);
}
