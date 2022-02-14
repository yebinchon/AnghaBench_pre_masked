
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct soc_pcmcia_socket {int dummy; } ;
struct pcmcia_socket {int dummy; } ;
struct TYPE_4__ {int csc_mask; int flags; int io_irq; int Vpp; int Vcc; } ;
typedef TYPE_1__ socket_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct soc_pcmcia_socket*,int,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,char*,int ,int ,int ) ;
 int FUNC_1 (struct soc_pcmcia_socket*,TYPE_1__*) ;
 struct soc_pcmcia_socket* FUNC_2 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_3(
 struct pcmcia_socket *VAR_10, socket_state_t *VAR_11)
{
 struct soc_pcmcia_socket *VAR_12 = FUNC_2(VAR_10);

 FUNC_0(VAR_12, 2, "mask: %s%s%s%s%s%s flags: %s%s%s%s%s%s Vcc %d Vpp %d irq %d\n",
   (VAR_11->csc_mask == 0) ? "<NONE> " : "",
   (VAR_11->csc_mask & VAR_2) ? "DETECT " : "",
   (VAR_11->csc_mask & VAR_6) ? "READY " : "",
   (VAR_11->csc_mask & VAR_0) ? "BATDEAD " : "",
   (VAR_11->csc_mask & VAR_1) ? "BATWARN " : "",
   (VAR_11->csc_mask & VAR_9) ? "STSCHG " : "",
   (VAR_11->flags == 0) ? "<NONE> " : "",
   (VAR_11->flags & VAR_5) ? "PWR_AUTO " : "",
   (VAR_11->flags & VAR_3) ? "IOCARD " : "",
   (VAR_11->flags & VAR_7) ? "RESET " : "",
   (VAR_11->flags & VAR_8) ? "SPKR_ENA " : "",
   (VAR_11->flags & VAR_4) ? "OUTPUT_ENA " : "",
   VAR_11->Vcc, VAR_11->Vpp, VAR_11->io_irq);

 return FUNC_1(VAR_12, VAR_11);
}
