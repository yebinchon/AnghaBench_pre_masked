
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ irq_mask; int pci_irq; } ;
struct yenta_socket {int cb_irq; TYPE_1__ socket; TYPE_2__* dev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*,scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct yenta_socket*,int ) ;

__attribute__((used)) static void FUNC_2(struct yenta_socket *VAR_1, u32 VAR_2)
{
 VAR_1->socket.pci_irq = VAR_1->cb_irq;
 if (VAR_0)
  VAR_1->socket.irq_mask = FUNC_1(VAR_1, VAR_2);
 else
  VAR_1->socket.irq_mask = 0;

 FUNC_0(&VAR_1->dev->dev, "ISA IRQ mask 0x%04x, PCI irq %d\n",
   VAR_1->socket.irq_mask, VAR_1->cb_irq);
}
