
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mv_otg {int irq_status; TYPE_2__* pdata; TYPE_1__* op_regs; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {scalar_t__ vbus; } ;
struct TYPE_3__ {int otgsc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mv_otg*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct mv_otg *VAR_6 = VAR_5;
 u32 VAR_7;

 VAR_7 = FUNC_1(&VAR_6->op_regs->otgsc);
 FUNC_2(VAR_7, &VAR_6->op_regs->otgsc);





 if (VAR_6->pdata->vbus)
  if ((VAR_7 & VAR_3) &&
      !(VAR_7 & VAR_2))
   return VAR_1;

 if ((VAR_7 & VAR_6->irq_status) == 0)
  return VAR_1;

 FUNC_0(VAR_6, 0);

 return VAR_0;
}
