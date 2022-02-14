
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct socket_state_t {int Vcc; int flags; int csc_mask; int io_irq; } ;
struct pcmcia_socket {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,int,int ,int,int ) ;

__attribute__((used)) static int
FUNC_3(struct pcmcia_socket *VAR_5, struct socket_state_t *VAR_6)
{
 u16 VAR_7;


 switch (VAR_6->Vcc) {
 case 0:
 case 33:
  break;
 default:
  return -VAR_2;
 }

 VAR_7 = FUNC_0(VAR_0);
 if (VAR_6->flags & VAR_3)
  FUNC_1(VAR_1, VAR_0);
 else
  FUNC_1(0, VAR_0);

 FUNC_2("%s: Vcc %d, io_irq %d, flags %04x csc %04x\n",
  VAR_4, VAR_6->Vcc, VAR_6->io_irq, VAR_6->flags, VAR_6->csc_mask);

 return 0;
}
