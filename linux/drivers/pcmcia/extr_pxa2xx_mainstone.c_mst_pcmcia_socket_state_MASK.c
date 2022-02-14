
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {size_t nr; TYPE_1__* stat; } ;
struct pcmcia_state {unsigned int bvd1; } ;
struct TYPE_2__ {int irq; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned int* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct soc_pcmcia_socket *VAR_3,
        struct pcmcia_state *VAR_4)
{
 unsigned int VAR_5 = VAR_2[VAR_3->nr] ^ VAR_4->bvd1;






 if (VAR_5) {
  VAR_2[VAR_3->nr] = VAR_4->bvd1;
  if (VAR_4->bvd1)
   FUNC_1(VAR_3->stat[VAR_0].irq);
  else
   FUNC_0(VAR_3->stat[VAR_1].irq);
 }
}
