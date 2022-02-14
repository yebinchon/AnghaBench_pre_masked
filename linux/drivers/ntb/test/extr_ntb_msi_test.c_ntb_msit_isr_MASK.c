
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ntb_msit_isr_ctx {int occurrences; int irq_idx; struct ntb_msit_ctx* nm; } ;
struct ntb_msit_ctx {TYPE_1__* ntb; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_1, void *VAR_2)
{
 struct ntb_msit_isr_ctx *VAR_3 = VAR_2;
 struct ntb_msit_ctx *VAR_4 = VAR_3->nm;

 FUNC_0(&VAR_4->ntb->dev, "Interrupt Occurred: %d",
  VAR_3->irq_idx);

 VAR_3->occurrences++;

 return VAR_0;
}
