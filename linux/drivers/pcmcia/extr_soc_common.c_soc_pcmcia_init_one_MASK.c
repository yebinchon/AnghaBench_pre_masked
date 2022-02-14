
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct device* parent; } ;
struct TYPE_5__ {int pci_irq; TYPE_1__ dev; int owner; } ;
struct soc_pcmcia_socket {TYPE_3__* stat; TYPE_2__ socket; struct pcmcia_low_level const* ops; } ;
struct pcmcia_low_level {int owner; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int gpio; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_1(struct soc_pcmcia_socket *VAR_2,
 const struct pcmcia_low_level *VAR_3, struct device *VAR_4)
{
 int VAR_5;

 VAR_2->ops = VAR_3;
 VAR_2->socket.owner = VAR_3->owner;
 VAR_2->socket.dev.parent = VAR_4;
 VAR_2->socket.pci_irq = VAR_1;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2->stat); VAR_5++)
  VAR_2->stat[VAR_5].gpio = -VAR_0;
}
