
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct denali_controller {int nbanks; int active_bank; int irq_status; int irq_mask; int irq_lock; int complete; scalar_t__ reg; } ;
typedef int irqreturn_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct denali_controller*,int,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_2, void *VAR_3)
{
 struct denali_controller *VAR_4 = VAR_3;
 irqreturn_t VAR_5 = VAR_1;
 u32 VAR_6;
 int VAR_7;

 FUNC_4(&VAR_4->irq_lock);

 for (VAR_7 = 0; VAR_7 < VAR_4->nbanks; VAR_7++) {
  VAR_6 = FUNC_3(VAR_4->reg + FUNC_0(VAR_7));
  if (VAR_6)
   VAR_5 = VAR_0;

  FUNC_2(VAR_4, VAR_7, VAR_6);

  if (VAR_7 != VAR_4->active_bank)
   continue;

  VAR_4->irq_status |= VAR_6;

  if (VAR_4->irq_status & VAR_4->irq_mask)
   FUNC_1(&VAR_4->complete);
 }

 FUNC_5(&VAR_4->irq_lock);

 return VAR_5;
}
