
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_hwfn {TYPE_1__* p_spq; } ;
typedef int qed_spq_async_comp_cb ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
struct TYPE_2__ {int * async_comp_cb; } ;


 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(struct qed_hwfn *VAR_2,
     enum protocol_type VAR_3,
     qed_spq_async_comp_cb VAR_4)
{
 if (!VAR_2->p_spq || (VAR_3 >= VAR_1))
  return -VAR_0;

 VAR_2->p_spq->async_comp_cb[VAR_3] = VAR_4;
 return 0;
}
