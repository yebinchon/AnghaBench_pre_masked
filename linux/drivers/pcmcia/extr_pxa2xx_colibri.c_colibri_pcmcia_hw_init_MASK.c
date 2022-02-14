
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* pci_irq; } ;
struct soc_pcmcia_socket {TYPE_2__* stat; TYPE_1__ socket; } ;
struct TYPE_8__ {int gpio; } ;
struct TYPE_7__ {char* name; void* irq; } ;


 int FUNC_0 (TYPE_3__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct soc_pcmcia_socket *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3,
    FUNC_0(VAR_3));
 if (VAR_5)
  goto err1;

 VAR_4->socket.pci_irq = FUNC_2(VAR_3[VAR_1].gpio);
 VAR_4->stat[VAR_2].irq = FUNC_2(VAR_3[VAR_0].gpio);
 VAR_4->stat[VAR_2].name = "PCMCIA CD";

err1:
 return VAR_5;
}
