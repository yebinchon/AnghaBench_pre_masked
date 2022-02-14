
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct soc_pcmcia_socket {scalar_t__ nr; } ;
struct TYPE_3__ {int flags; int Vcc; } ;
typedef TYPE_1__ socket_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct soc_pcmcia_socket *VAR_4,
    const socket_state_t *VAR_5)
{
 if (VAR_4->nr == 0) {
  FUNC_0(VAR_1,
   (VAR_5->flags & VAR_3));
  FUNC_0(VAR_0,
   !(VAR_5->Vcc == 33 || VAR_5->Vcc == 50));
 } else {
  FUNC_0(VAR_2,
   (VAR_5->flags & VAR_3));
 }

 return 0;
}
