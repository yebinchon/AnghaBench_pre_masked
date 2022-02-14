
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx; } ;
struct uart_port {TYPE_2__* state; TYPE_1__ icount; } ;
struct TYPE_4__ {int port; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long FUNC_0 (long*) ;
 int FUNC_1 (int *,long,int ) ;
 scalar_t__ FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*,int) ;
 scalar_t__ FUNC_4 (struct uart_port*,long) ;

__attribute__((used)) static int FUNC_5(struct uart_port *VAR_5)
{
 int VAR_6 = 0;
 int VAR_7 = 10000;

 while (VAR_7-- > 0) {
  long VAR_8;
  long VAR_9 = FUNC_0(&VAR_8);

  if (VAR_8 == VAR_2)
   break;

  if (VAR_9 == VAR_0) {
   if (FUNC_2(VAR_5))
    continue;
   VAR_6 = 1;
   VAR_9 = 0;
  }

  if (VAR_9 == VAR_1) {
   VAR_4 = 1;
   FUNC_3(VAR_5, 0);
  } else if (VAR_4) {
   VAR_4 = 0;
   FUNC_3(VAR_5, 1);
  }

  if (VAR_5->state == ((void*)0)) {
   FUNC_4(VAR_5, VAR_9);
   continue;
  }

  VAR_5->icount.rx++;

  if (FUNC_4(VAR_5, VAR_9))
   continue;

  FUNC_1(&VAR_5->state->port, VAR_9, VAR_3);
 }

 return VAR_6;
}
