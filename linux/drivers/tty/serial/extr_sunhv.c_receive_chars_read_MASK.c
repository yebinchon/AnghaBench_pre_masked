
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long rx; } ;
struct uart_port {scalar_t__ sysrq; TYPE_2__* state; TYPE_1__ icount; } ;
struct TYPE_4__ {int port; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int VAR_3 ;
 unsigned long FUNC_0 (scalar_t__*) ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 long FUNC_1 (unsigned long,int ,unsigned long*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,scalar_t__*,unsigned long) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 int FUNC_5 (struct uart_port*,int) ;
 int FUNC_6 (struct uart_port*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_6)
{
 static int VAR_7;
 int VAR_8 = 10000;

 while (VAR_8-- > 0) {
  unsigned long VAR_9 = FUNC_0(VAR_4);
  unsigned long VAR_10, VAR_11;
  long VAR_12 = FUNC_1(VAR_9, VAR_3, &VAR_10);

  if (VAR_12 != VAR_2) {
   VAR_10 = 0;

   if (VAR_12 == VAR_0) {
    if (VAR_7)
     FUNC_2();

    if (FUNC_4(VAR_6))
     continue;
    VAR_7 = 1;
    *VAR_4 = 0;
    VAR_10 = 1;
   } else if (VAR_12 == VAR_1) {
    VAR_5 = 1;
    FUNC_5(VAR_6, 0);
    continue;
   } else {

    break;
   }
  }

  if (VAR_5) {
   VAR_5 = 0;
   FUNC_5(VAR_6, 1);
  }

  if (VAR_6->sysrq != 0 && *VAR_4) {
   for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
    FUNC_6(VAR_6, VAR_4[VAR_11]);
   VAR_7 = 0;
  }

  if (VAR_6->state == ((void*)0))
   continue;

  VAR_6->icount.rx += VAR_10;

  FUNC_3(&VAR_6->state->port, VAR_4,
    VAR_10);
 }

 return VAR_7;
}
