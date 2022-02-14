
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_socket {scalar_t__ pci_irq; scalar_t__ pcmcia_irq; } ;
struct pcmcia_device {scalar_t__ irq; struct pcmcia_socket* socket; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcmcia_device*,int ) ;

int FUNC_1(struct pcmcia_device *VAR_2)
{
 struct pcmcia_socket *VAR_3 = VAR_2->socket;

 if (VAR_2->irq)
  return 0;


 if (VAR_3->pcmcia_irq) {
  VAR_2->irq = VAR_3->pcmcia_irq;
  return 0;
 }


 if (!FUNC_0(VAR_2, 0))
  return 0;


 if (!FUNC_0(VAR_2, VAR_1))
  return 0;


 if (VAR_3->pci_irq) {
  VAR_2->irq = VAR_3->pcmcia_irq = VAR_3->pci_irq;
  return 0;
 }

 return -VAR_0;
}
