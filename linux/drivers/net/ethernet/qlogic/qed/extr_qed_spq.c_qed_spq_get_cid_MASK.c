
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_hwfn {TYPE_1__* p_spq; } ;
struct TYPE_2__ {int cid; } ;



u32 FUNC_0(struct qed_hwfn *VAR_0)
{
 if (!VAR_0->p_spq)
  return 0xffffffff;
 return VAR_0->p_spq->cid;
}
