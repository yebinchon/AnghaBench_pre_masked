
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct soc_pcmcia_socket {int dummy; } ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ socket_state_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct soc_pcmcia_socket *VAR_4,
           const socket_state_t *VAR_5)
{
 FUNC_0(VAR_1, VAR_0 +
   ((VAR_5->flags & VAR_3) ?
   VAR_2 : 0));
 return 0;
}
