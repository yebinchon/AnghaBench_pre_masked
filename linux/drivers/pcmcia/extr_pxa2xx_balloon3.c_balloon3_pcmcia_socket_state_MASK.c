
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct soc_pcmcia_socket {size_t nr; } ;
struct pcmcia_state {int ready; int bvd1; int vs_3v; scalar_t__ vs_Xv; scalar_t__ bvd2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int* VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct soc_pcmcia_socket *VAR_5,
        struct pcmcia_state *VAR_6)
{
 uint16_t VAR_7;
 int VAR_8;


 VAR_7 = FUNC_0(VAR_1);
 VAR_8 = (VAR_7 ^ VAR_4[VAR_5->nr])
  & VAR_3;





 if (VAR_8) {
  VAR_4[VAR_5->nr] = VAR_7;
  if (VAR_7 & VAR_3)
   FUNC_2(VAR_0);
  else
   FUNC_1(VAR_0);
 }

 VAR_6->ready = !!(VAR_7 & VAR_2);
 VAR_6->bvd1 = !!(VAR_7 & VAR_3);
 VAR_6->bvd2 = 0;
 VAR_6->vs_3v = 1;
 VAR_6->vs_Xv = 0;
}
