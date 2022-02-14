
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct uart_8250_port {unsigned int lsr_saved_flags; unsigned int msr_saved_flags; TYPE_1__ port; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (struct uart_8250_port*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct uart_8250_port *VAR_6, int VAR_7)
{
 unsigned int VAR_8, VAR_9 = 10000;


 for (;;) {
  VAR_8 = FUNC_0(VAR_6, VAR_2);

  VAR_6->lsr_saved_flags |= VAR_8 & VAR_0;

  if ((VAR_8 & VAR_7) == VAR_7)
   break;
  if (--VAR_9 == 0)
   break;
  FUNC_2(1);
  FUNC_1();
 }


 if (VAR_6->port.flags & VAR_5) {
  for (VAR_9 = 1000000; VAR_9; VAR_9--) {
   unsigned int VAR_10 = FUNC_0(VAR_6, VAR_3);
   VAR_6->msr_saved_flags |= VAR_10 & VAR_1;
   if (VAR_10 & VAR_4)
    break;
   FUNC_2(1);
   FUNC_1();
  }
 }
}
