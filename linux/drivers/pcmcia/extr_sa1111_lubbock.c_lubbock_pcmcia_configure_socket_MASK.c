
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct soc_pcmcia_socket {int nr; struct max1600* driver_data; } ;
struct pcmcia_state {int vs_Xv; int vs_3v; } ;
struct max1600 {int dummy; } ;
struct TYPE_4__ {int Vcc; int Vpp; } ;
typedef TYPE_1__ socket_state_t ;


 int FUNC_0 (struct max1600*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct soc_pcmcia_socket*,TYPE_1__ const*) ;
 int FUNC_3 (struct soc_pcmcia_socket*,struct pcmcia_state*) ;

__attribute__((used)) static int
FUNC_4(struct soc_pcmcia_socket *VAR_0,
    const socket_state_t *VAR_1)
{
 struct max1600 *VAR_2 = VAR_0->driver_data;
 int VAR_3 = 0;
 again:
 switch (VAR_0->nr) {
 case 0:
 case 1:
  break;

 default:
  VAR_3 = -1;
 }

 if (VAR_3 == 0)
  VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (VAR_3 == 0)
  VAR_3 = FUNC_0(VAR_2, VAR_1->Vcc, VAR_1->Vpp);


 if (VAR_3 == 0 && VAR_1->Vcc == 33) {
  struct pcmcia_state VAR_4;
  FUNC_1(3);

  FUNC_3(VAR_0, &VAR_4);

  if (!VAR_4.vs_3v && !VAR_4.vs_Xv) {



   FUNC_0(VAR_2, 0, 0);




   FUNC_1(100);







   ((socket_state_t *)VAR_1)->Vcc = 50;
   ((socket_state_t *)VAR_1)->Vpp = 50;
   goto again;
  }
 }


 return VAR_3;
}
