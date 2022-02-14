
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm8001_hba_info {int * tasklet; } ;
struct isr_param {size_t irq_id; struct pm8001_hba_info* drv_inst; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int (* isr ) (struct pm8001_hba_info*,size_t) ;int (* is_our_interrupt ) (struct pm8001_hba_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct pm8001_hba_info*) ;
 int FUNC_1 (struct pm8001_hba_info*,size_t) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct isr_param *VAR_5;
 struct pm8001_hba_info *VAR_6;
 irqreturn_t VAR_7 = VAR_0;
 VAR_5 = (struct isr_param *)VAR_4;
 VAR_6 = VAR_5->drv_inst;

 if (FUNC_3(!VAR_6))
  return VAR_1;
 if (!VAR_2->is_our_interrupt(VAR_6))
  return VAR_1;



 VAR_7 = VAR_2->isr(VAR_6, VAR_5->irq_id);

 return VAR_7;
}
