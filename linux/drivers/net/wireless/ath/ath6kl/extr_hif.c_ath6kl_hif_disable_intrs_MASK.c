
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath6kl_irq_enable_reg {int int_status_en; } ;
struct TYPE_2__ {scalar_t__ cntr_int_status_en; scalar_t__ err_int_status_en; scalar_t__ cpu_int_status_en; scalar_t__ int_status_en; } ;
struct ath6kl_device {int ar; int lock; TYPE_1__ irq_en_reg; } ;
typedef int regs ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int *,int,int ) ;
 int FUNC_1 (struct ath6kl_irq_enable_reg*,TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct ath6kl_device *VAR_2)
{
 struct ath6kl_irq_enable_reg VAR_3;

 FUNC_2(&VAR_2->lock);

 VAR_2->irq_en_reg.int_status_en = 0;
 VAR_2->irq_en_reg.cpu_int_status_en = 0;
 VAR_2->irq_en_reg.err_int_status_en = 0;
 VAR_2->irq_en_reg.cntr_int_status_en = 0;
 FUNC_1(&VAR_3, &VAR_2->irq_en_reg, sizeof(VAR_3));
 FUNC_3(&VAR_2->lock);

 return FUNC_0(VAR_2->ar, VAR_1,
       &VAR_3.int_status_en, sizeof(VAR_3),
       VAR_0);
}
