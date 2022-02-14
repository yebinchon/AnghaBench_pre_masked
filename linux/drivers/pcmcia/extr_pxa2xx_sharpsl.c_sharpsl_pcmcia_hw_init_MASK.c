
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pci_irq; } ;
struct soc_pcmcia_socket {size_t nr; TYPE_1__ socket; TYPE_2__* stat; } ;
struct TYPE_6__ {scalar_t__ cd_irq; int irq; int cd_irq_str; } ;
struct TYPE_5__ {scalar_t__ irq; int name; } ;


 TYPE_3__* VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(struct soc_pcmcia_socket *VAR_2)
{
 if (VAR_0[VAR_2->nr].cd_irq >= 0) {
  VAR_2->stat[VAR_1].irq = VAR_0[VAR_2->nr].cd_irq;
  VAR_2->stat[VAR_1].name = VAR_0[VAR_2->nr].cd_irq_str;
 }

 VAR_2->socket.pci_irq = VAR_0[VAR_2->nr].irq;

 return 0;
}
