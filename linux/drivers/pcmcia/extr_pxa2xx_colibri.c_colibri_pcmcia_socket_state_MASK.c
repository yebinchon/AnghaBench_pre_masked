
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct soc_pcmcia_socket {int dummy; } ;
struct pcmcia_state {int detect; int ready; int bvd1; int bvd2; int vs_3v; scalar_t__ vs_Xv; } ;
struct TYPE_2__ {int gpio; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct soc_pcmcia_socket *VAR_5,
     struct pcmcia_state *VAR_6)
{

 VAR_6->detect = !!FUNC_0(VAR_4[VAR_2].gpio);
 VAR_6->ready = !!FUNC_0(VAR_4[VAR_3].gpio);
 VAR_6->bvd1 = !!FUNC_0(VAR_4[VAR_0].gpio);
 VAR_6->bvd2 = !!FUNC_0(VAR_4[VAR_1].gpio);
 VAR_6->vs_3v = 1;
 VAR_6->vs_Xv = 0;
}
