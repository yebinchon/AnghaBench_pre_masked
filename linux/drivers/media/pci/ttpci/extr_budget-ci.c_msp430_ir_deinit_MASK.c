
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct saa7146_dev {int dummy; } ;
struct TYPE_4__ {int dev; int msp430_irq_tasklet; } ;
struct TYPE_3__ {struct saa7146_dev* dev; } ;
struct budget_ci {TYPE_2__ ir; TYPE_1__ budget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct saa7146_dev*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct saa7146_dev*,int,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct budget_ci *VAR_2)
{
 struct saa7146_dev *VAR_3 = VAR_2->budget.dev;

 FUNC_0(VAR_3, VAR_0);
 FUNC_2(VAR_3, 3, VAR_1);
 FUNC_3(&VAR_2->ir.msp430_irq_tasklet);

 FUNC_1(VAR_2->ir.dev);
}
