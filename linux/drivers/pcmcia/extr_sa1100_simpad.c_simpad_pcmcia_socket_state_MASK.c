
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int dummy; } ;
struct pcmcia_state {int vs_3v; scalar_t__ vs_Xv; } ;


 long VAR_0 ;
 long VAR_1 ;
 long FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct soc_pcmcia_socket *VAR_2,
      struct pcmcia_state *VAR_3)
{
 long VAR_4 = FUNC_0();




 if ((VAR_4 & (VAR_0|VAR_1)) ==
   (VAR_0|VAR_1)) {
  VAR_3->vs_3v=0;
  VAR_3->vs_Xv=0;
 } else {
  VAR_3->vs_3v=1;
  VAR_3->vs_Xv=0;
 }
}
