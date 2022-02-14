
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct soc_pcmcia_socket {int dummy; } ;
struct TYPE_4__ {int Vcc; int Vpp; int flags; } ;
typedef TYPE_1__ socket_state_t ;
struct TYPE_5__ {int gpio; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct soc_pcmcia_socket *VAR_4,
    const socket_state_t *VAR_5)
{
 FUNC_0(VAR_3[VAR_0].gpio,
   !(VAR_5->Vcc == 33 && VAR_5->Vpp < 50));
 FUNC_0(VAR_3[VAR_1].gpio,
   VAR_5->flags & VAR_2);
 return 0;
}
