
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxc_nand_host {TYPE_1__* devtype_data; int irq; } ;
struct TYPE_2__ {int (* irq_control ) (struct mxc_nand_host*,int) ;scalar_t__ irqpending_quirk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mxc_nand_host*,int) ;

__attribute__((used)) static void FUNC_3(struct mxc_nand_host *VAR_0, int VAR_1)
{
 if (VAR_0->devtype_data->irqpending_quirk) {
  if (VAR_1)
   FUNC_1(VAR_0->irq);
  else
   FUNC_0(VAR_0->irq);
 } else {
  VAR_0->devtype_data->irq_control(VAR_0, VAR_1);
 }
}
