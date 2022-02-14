
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct aq_vec_s {int dummy; } ;
struct TYPE_3__ {scalar_t__ is_polling; } ;
struct aq_nic_s {unsigned int aq_vecs; int aq_hw; TYPE_2__* aq_hw_ops; struct aq_vec_s** aq_vec; int polling_timer; TYPE_1__ aq_nic_cfg; int service_task; int service_timer; int ndev; } ;
struct TYPE_4__ {int (* hw_stop ) (int ) ;int (* hw_irq_disable ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (struct aq_vec_s*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct aq_nic_s *VAR_1)
{
 struct aq_vec_s *VAR_2 = ((void*)0);
 unsigned int VAR_3 = 0U;

 FUNC_5(VAR_1->ndev);
 FUNC_4(VAR_1->ndev);

 FUNC_3(&VAR_1->service_timer);
 FUNC_2(&VAR_1->service_task);

 VAR_1->aq_hw_ops->hw_irq_disable(VAR_1->aq_hw, VAR_0);

 if (VAR_1->aq_nic_cfg.is_polling)
  FUNC_3(&VAR_1->polling_timer);
 else
  FUNC_0(VAR_1);

 for (VAR_3 = 0U, VAR_2 = VAR_1->aq_vec[0];
  VAR_1->aq_vecs > VAR_3; ++VAR_3, VAR_2 = VAR_1->aq_vec[VAR_3])
  FUNC_1(VAR_2);

 return VAR_1->aq_hw_ops->hw_stop(VAR_1->aq_hw);
}
