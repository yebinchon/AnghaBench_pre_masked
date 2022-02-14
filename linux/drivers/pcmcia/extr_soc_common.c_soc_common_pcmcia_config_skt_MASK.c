
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int flags; scalar_t__ io_irq; } ;
struct TYPE_8__ {int pci_irq; } ;
struct soc_pcmcia_socket {int irq_state; TYPE_3__ cs_state; TYPE_2__ socket; struct gpio_desc* gpio_bus_enable; struct gpio_desc* gpio_reset; TYPE_1__* ops; int nr; } ;
struct gpio_desc {int dummy; } ;
typedef TYPE_3__ socket_state_t ;
struct TYPE_7__ {int (* configure_socket ) (struct soc_pcmcia_socket*,TYPE_3__*) ;} ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int,struct gpio_desc**,int *,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (struct soc_pcmcia_socket*,TYPE_3__*) ;
 int FUNC_7 (struct soc_pcmcia_socket*,TYPE_3__*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_8(
 struct soc_pcmcia_socket *VAR_5, socket_state_t *VAR_6)
{
 int VAR_7;

 VAR_7 = VAR_5->ops->configure_socket(VAR_5, VAR_6);
 if (VAR_7 < 0) {
  FUNC_5("soc_common_pcmcia: unable to configure socket %d\n",
         VAR_5->nr);

  FUNC_1(VAR_5->ops->configure_socket(VAR_5, &VAR_5->cs_state));
  return VAR_7;
 }

 if (VAR_7 == 0) {
  struct gpio_desc *VAR_8[2];
  FUNC_0(VAR_4, 2);
  int VAR_9 = 0;

  if (VAR_5->gpio_reset) {
   VAR_8[VAR_9] = VAR_5->gpio_reset;
   FUNC_2(VAR_9++, VAR_4, VAR_6->flags & VAR_3);
  }
  if (VAR_5->gpio_bus_enable) {
   VAR_8[VAR_9] = VAR_5->gpio_bus_enable;
   FUNC_2(VAR_9++, VAR_4, VAR_6->flags & VAR_2);
  }

  if (VAR_9)
   FUNC_3(VAR_9, VAR_8, ((void*)0), VAR_4);





  if (VAR_5->irq_state != 1 && VAR_6->io_irq) {
   VAR_5->irq_state = 1;
   FUNC_4(VAR_5->socket.pci_irq,
      VAR_0);
  } else if (VAR_5->irq_state == 1 && VAR_6->io_irq == 0) {
   VAR_5->irq_state = 0;
   FUNC_4(VAR_5->socket.pci_irq, VAR_1);
  }

  VAR_5->cs_state = *VAR_6;
 }

 return VAR_7;
}
