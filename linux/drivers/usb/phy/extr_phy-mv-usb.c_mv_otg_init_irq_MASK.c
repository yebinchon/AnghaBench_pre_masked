
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct mv_otg {int irq_en; int irq_status; TYPE_2__* op_regs; TYPE_1__* pdata; } ;
struct TYPE_4__ {int otgsc; } ;
struct TYPE_3__ {int * id; int * vbus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

__attribute__((used)) static void FUNC_2(struct mv_otg *VAR_10)
{
 u32 VAR_11;

 VAR_10->irq_en = VAR_0
     | VAR_1;
 VAR_10->irq_status = VAR_5
     | VAR_6;

 if (VAR_10->pdata->vbus == ((void*)0)) {
  VAR_10->irq_en |= VAR_3
      | VAR_2;
  VAR_10->irq_status |= VAR_8
      | VAR_7;
 }

 if (VAR_10->pdata->id == ((void*)0)) {
  VAR_10->irq_en |= VAR_4;
  VAR_10->irq_status |= VAR_9;
 }

 VAR_11 = FUNC_0(&VAR_10->op_regs->otgsc);
 VAR_11 |= VAR_10->irq_en;
 FUNC_1(VAR_11, &VAR_10->op_regs->otgsc);
}
