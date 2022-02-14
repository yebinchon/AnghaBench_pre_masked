
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct pcan_pccard* priv; int irq; } ;
struct pcan_pccard {int ioport_addr; } ;


 int FUNC_0 (int ,struct pcan_pccard*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pcan_pccard*) ;
 int FUNC_3 (struct pcan_pccard*) ;
 int FUNC_4 (struct pcan_pccard*) ;

__attribute__((used)) static void FUNC_5(struct pcmcia_device *VAR_0)
{
 struct pcan_pccard *VAR_1 = VAR_0->priv;

 if (!VAR_1)
  return;

 FUNC_0(VAR_0->irq, VAR_1);
 FUNC_4(VAR_1);

 FUNC_3(VAR_1);

 FUNC_1(VAR_1->ioport_addr);

 FUNC_2(VAR_1);
 VAR_0->priv = ((void*)0);
}
