
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_hwfn {TYPE_1__* p_spq; } ;
typedef enum protocol_type { ____Placeholder_protocol_type } protocol_type ;
struct TYPE_2__ {int ** async_comp_cb; } ;


 int VAR_0 ;

void
FUNC_0(struct qed_hwfn *VAR_1,
       enum protocol_type VAR_2)
{
 if (!VAR_1->p_spq || (VAR_2 >= VAR_0))
  return;

 VAR_1->p_spq->async_comp_cb[VAR_2] = ((void*)0);
}
