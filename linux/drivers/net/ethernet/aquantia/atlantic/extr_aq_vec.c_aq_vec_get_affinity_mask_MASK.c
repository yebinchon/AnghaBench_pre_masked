
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int affinity_mask; } ;
struct aq_vec_s {TYPE_1__ aq_ring_param; } ;
typedef int cpumask_t ;



cpumask_t *FUNC_0(struct aq_vec_s *VAR_0)
{
 return &VAR_0->aq_ring_param.affinity_mask;
}
