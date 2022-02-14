
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3cmci_host {int irq_enabled; int irq_disabled; int sdio_irqen; int irq_state; int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(struct s3cmci_host *VAR_0, bool VAR_1)
{
 unsigned long VAR_2;
 bool VAR_3 = 0;

 FUNC_3(VAR_2);

 VAR_0->irq_enabled = VAR_1;
 VAR_0->irq_disabled = 0;

 VAR_3 = VAR_1 | VAR_0->sdio_irqen;

 if (VAR_0->irq_state != VAR_3) {
  VAR_0->irq_state = VAR_3;

  if (VAR_3)
   FUNC_1(VAR_0->irq);
  else
   FUNC_0(VAR_0->irq);
 }

 FUNC_2(VAR_2);
}
