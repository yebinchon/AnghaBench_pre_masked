
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int pci_irq; } ;
struct soc_pcmcia_socket {TYPE_2__* stat; TYPE_1__ socket; } ;
struct TYPE_4__ {char* name; int irq; int gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct soc_pcmcia_socket *VAR_6)
{
 uint16_t VAR_7;

 VAR_7 = FUNC_0(VAR_2);
 if (VAR_7 < 0x4f08)
  FUNC_1("The FPGA code, version 0x%04x, is too old. "
   "PCMCIA/CF support might be broken in this version!",
   VAR_7);

 VAR_6->socket.pci_irq = VAR_0;
 VAR_6->stat[VAR_5].gpio = VAR_3;
 VAR_6->stat[VAR_5].name = "PCMCIA0 CD";
 VAR_6->stat[VAR_4].irq = VAR_1;
 VAR_6->stat[VAR_4].name = "PCMCIA0 STSCHG";

 return 0;
}
