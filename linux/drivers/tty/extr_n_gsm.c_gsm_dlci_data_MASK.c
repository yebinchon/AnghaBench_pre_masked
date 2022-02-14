
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tty_struct {int dummy; } ;
struct tty_port {int dummy; } ;
struct gsm_dlci {int adaption; struct tty_port port; } ;


 int VAR_0 ;
 int FUNC_0 (struct tty_struct*,struct gsm_dlci*,unsigned int,int) ;
 int FUNC_1 (unsigned int*,int ) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct tty_port*) ;
 int FUNC_4 (struct tty_port*,int const*,int) ;
 int FUNC_5 (struct tty_struct*) ;
 struct tty_struct* FUNC_6 (struct tty_port*) ;

__attribute__((used)) static void FUNC_7(struct gsm_dlci *VAR_1, const u8 *VAR_2, int VAR_3)
{

 struct tty_port *VAR_4 = &VAR_1->port;
 struct tty_struct *VAR_5;
 unsigned int VAR_6 = 0;
 int VAR_7 = VAR_3;

 if (VAR_0 & 16)
  FUNC_2("%d bytes for tty\n", VAR_7);
 switch (VAR_1->adaption) {

 case 4:
  break;
 case 3:
  break;
 case 2:
  while (FUNC_1(&VAR_6, *VAR_2++) == 0) {
   VAR_7--;
   if (VAR_7 == 0)
    return;
  }
  VAR_5 = FUNC_6(VAR_4);
  if (VAR_5) {
   FUNC_0(VAR_5, VAR_1, VAR_6, VAR_3);
   FUNC_5(VAR_5);
  }

 case 1:
 default:
  FUNC_4(VAR_4, VAR_2, VAR_7);
  FUNC_3(VAR_4);
 }
}
