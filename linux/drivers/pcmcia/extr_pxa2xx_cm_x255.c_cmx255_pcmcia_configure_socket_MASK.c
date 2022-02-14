
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct soc_pcmcia_socket {int nr; } ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ socket_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct soc_pcmcia_socket *VAR_3,
       const socket_state_t *VAR_4)
{
 switch (VAR_3->nr) {
 case 0:
  if (VAR_4->flags & VAR_2) {
   FUNC_0(VAR_1, 0);
   FUNC_1(1);
   FUNC_0(VAR_0, 1);
   FUNC_1(10);
   FUNC_0(VAR_0, 0);
  }
  break;
 case 1:
  if (VAR_4->flags & VAR_2) {
   FUNC_0(VAR_1, 1);
   FUNC_1(1);
   FUNC_0(VAR_0, 1);
   FUNC_1(10);
   FUNC_0(VAR_0, 0);
  }
  break;
 }

 return 0;
}
