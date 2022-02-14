
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct soc_pcmcia_socket {int dummy; } ;
struct TYPE_3__ {int Vcc; } ;
typedef TYPE_1__ socket_state_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(struct soc_pcmcia_socket *VAR_0,
     const socket_state_t *VAR_1)
{
 int VAR_2 = 1;

 if (VAR_1->Vcc == 0)
  VAR_2 = FUNC_0();
 else if (VAR_1->Vcc == 33)
  VAR_2 = FUNC_1();

 return VAR_2;
}
