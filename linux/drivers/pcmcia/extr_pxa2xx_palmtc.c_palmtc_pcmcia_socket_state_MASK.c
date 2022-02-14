
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {int dummy; } ;
struct pcmcia_state {int detect; int vs_3v; scalar_t__ vs_Xv; } ;



__attribute__((used)) static void FUNC_0(struct soc_pcmcia_socket *VAR_0,
     struct pcmcia_state *VAR_1)
{
 VAR_1->detect = 1;
 VAR_1->vs_3v = 1;
 VAR_1->vs_Xv = 0;
}
