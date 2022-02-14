
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xxs1500_pcmcia_sock {unsigned int old_flags; } ;
struct socket_state_t {int Vcc; unsigned int flags; } ;
struct pcmcia_socket {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 struct xxs1500_pcmcia_sock* FUNC_2 (struct pcmcia_socket*) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_socket *VAR_5,
        struct socket_state_t *VAR_6)
{
 struct xxs1500_pcmcia_sock *VAR_7 = FUNC_2(VAR_5);
 unsigned int VAR_8;


 switch (VAR_6->Vcc) {
 case 0:
  FUNC_0(VAR_2, 1);
  break;
 case 33:
  FUNC_0(VAR_2, 0);
  break;
 case 50:
 default:
  return -VAR_0;
 }

 VAR_8 = VAR_6->flags ^ VAR_7->old_flags;

 if (VAR_8 & VAR_4) {
  if (VAR_6->flags & VAR_4) {
   FUNC_0(VAR_3, 1);
   FUNC_0(VAR_1, 1);
  } else {
   FUNC_0(VAR_3, 0);
   FUNC_0(VAR_1, 0);
   FUNC_1(500);
  }
 }

 VAR_7->old_flags = VAR_6->flags;

 return 0;
}
