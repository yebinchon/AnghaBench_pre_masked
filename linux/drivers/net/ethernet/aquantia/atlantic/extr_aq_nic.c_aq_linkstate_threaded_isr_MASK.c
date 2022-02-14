
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int link_irq_vec; } ;
struct aq_nic_s {TYPE_2__ aq_nic_cfg; int aq_hw; TYPE_1__* aq_hw_ops; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int (* hw_irq_enable ) (int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct aq_nic_s*) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_2, void *VAR_3)
{
 struct aq_nic_s *VAR_4 = VAR_3;

 if (!VAR_4)
  return VAR_1;

 FUNC_1(VAR_4);

 VAR_4->aq_hw_ops->hw_irq_enable(VAR_4->aq_hw,
           FUNC_0(VAR_4->aq_nic_cfg.link_irq_vec));
 return VAR_0;
}
