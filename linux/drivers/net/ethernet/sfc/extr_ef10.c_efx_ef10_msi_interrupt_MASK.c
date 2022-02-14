
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {size_t irq_level; int * channel; int last_irq_cpu; int irq_soft_enabled; int net_dev; } ;
struct efx_msi_context {size_t index; struct efx_nic* efx; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*,int,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_2, void *VAR_3)
{
 struct efx_msi_context *VAR_4 = VAR_3;
 struct efx_nic *VAR_5 = VAR_4->efx;

 FUNC_3(VAR_5, VAR_1, VAR_5->net_dev,
     "IRQ %d on CPU %d\n", VAR_2, FUNC_4());

 if (FUNC_2(FUNC_0(VAR_5->irq_soft_enabled))) {

  if (VAR_4->index == VAR_5->irq_level)
   VAR_5->last_irq_cpu = FUNC_4();


  FUNC_1(VAR_5->channel[VAR_4->index]);
 }

 return VAR_0;
}
