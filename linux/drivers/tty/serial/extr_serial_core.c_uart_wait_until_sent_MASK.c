
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_state {int dummy; } ;
struct uart_port {scalar_t__ type; int fifosize; int timeout; TYPE_1__* ops; int line; } ;
struct tty_struct {struct uart_state* driver_data; } ;
struct TYPE_2__ {int (* tx_empty ) (struct uart_port*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct uart_port*) ;
 scalar_t__ FUNC_5 (int,unsigned long) ;
 int FUNC_6 (struct uart_port*) ;
 struct uart_port* FUNC_7 (struct uart_state*) ;

__attribute__((used)) static void FUNC_8(struct tty_struct *VAR_4, int VAR_5)
{
 struct uart_state *VAR_6 = VAR_4->driver_data;
 struct uart_port *VAR_7;
 unsigned long VAR_8, VAR_9;

 VAR_7 = FUNC_7(VAR_6);
 if (!VAR_7)
  return;

 if (VAR_7->type == VAR_1 || VAR_7->fifosize == 0) {
  FUNC_6(VAR_7);
  return;
 }
 VAR_8 = (VAR_7->timeout - VAR_0/50) / VAR_7->fifosize;
 VAR_8 = VAR_8 / 5;
 if (VAR_8 == 0)
  VAR_8 = 1;
 if (VAR_5 && VAR_5 < VAR_8)
  VAR_8 = VAR_5;
 if (VAR_5 == 0 || VAR_5 > 2 * VAR_7->timeout)
  VAR_5 = 2 * VAR_7->timeout;

 VAR_9 = VAR_3 + VAR_5;

 FUNC_2("uart_wait_until_sent(%d), jiffies=%lu, expire=%lu...\n",
  VAR_7->line, VAR_3, VAR_9);






 while (!VAR_7->ops->tx_empty(VAR_7)) {
  FUNC_1(FUNC_0(VAR_8));
  if (FUNC_3(VAR_2))
   break;
  if (FUNC_5(VAR_3, VAR_9))
   break;
 }
 FUNC_6(VAR_7);
}
