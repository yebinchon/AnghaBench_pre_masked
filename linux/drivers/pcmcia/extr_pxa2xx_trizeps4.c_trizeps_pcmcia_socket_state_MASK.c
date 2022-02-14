
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soc_pcmcia_socket {size_t nr; } ;
struct pcmcia_state {int bvd1; int bvd2; int vs_3v; int vs_Xv; int ready; int detect; } ;


 unsigned short FUNC_0 () ;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short* VAR_5 ;

__attribute__((used)) static void FUNC_1(struct soc_pcmcia_socket *VAR_6,
    struct pcmcia_state *VAR_7)
{
 unsigned short VAR_8 = 0, VAR_9;
 VAR_8 = FUNC_0();
 VAR_9 = (VAR_8 ^ VAR_5[VAR_6->nr]) &
    VAR_2;
 if (VAR_9) {
  VAR_5[VAR_6->nr] = VAR_8;
  if (VAR_8 & VAR_0) {

  } else {

  }
 }

 switch (VAR_6->nr) {
 case 0:

  VAR_7->bvd1 = (VAR_8 & VAR_0) ? 1 : 0;
  VAR_7->bvd2 = (VAR_8 & VAR_1) ? 1 : 0;
  VAR_7->vs_3v = (VAR_8 & VAR_3) ? 0 : 1;
  VAR_7->vs_Xv = (VAR_8 & VAR_4) ? 0 : 1;
  break;



 case 1:
  VAR_7->detect = 0;
  VAR_7->ready = 0;
  VAR_7->bvd1 = 0;
  VAR_7->bvd2 = 0;
  VAR_7->vs_3v = 0;
  VAR_7->vs_Xv = 0;
  break;


 }
}
