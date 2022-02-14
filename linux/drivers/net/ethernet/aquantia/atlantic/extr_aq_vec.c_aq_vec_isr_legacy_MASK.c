
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u64 ;
struct TYPE_3__ {unsigned int vec_idx; } ;
struct aq_vec_s {int aq_hw; TYPE_2__* aq_hw_ops; int napi; TYPE_1__ aq_ring_param; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int (* hw_irq_read ) (int ,unsigned int*) ;int (* hw_irq_enable ) (int ,unsigned int) ;int (* hw_irq_disable ) (int ,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,unsigned int*) ;
 int FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;

irqreturn_t FUNC_4(int VAR_2, void *VAR_3)
{
 struct aq_vec_s *VAR_4 = VAR_3;
 u64 VAR_5 = 0U;
 int VAR_6;

 if (!VAR_4)
  return VAR_1;
 VAR_6 = VAR_4->aq_hw_ops->hw_irq_read(VAR_4->aq_hw, &VAR_5);
 if (VAR_6 < 0)
  return VAR_1;

 if (VAR_5) {
  VAR_4->aq_hw_ops->hw_irq_disable(VAR_4->aq_hw,
         1U << VAR_4->aq_ring_param.vec_idx);
  FUNC_0(&VAR_4->napi);
 } else {
  VAR_4->aq_hw_ops->hw_irq_enable(VAR_4->aq_hw, 1U);
  return VAR_1;
 }

 return VAR_0;
}
