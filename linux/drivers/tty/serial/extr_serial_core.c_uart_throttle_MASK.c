
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int upstat_t ;
struct uart_state {int dummy; } ;
struct uart_port {int status; TYPE_1__* ops; } ;
struct tty_struct {struct uart_state* driver_data; } ;
struct TYPE_2__ {int (* throttle ) (struct uart_port*) ;} ;


 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 int FUNC_2 (struct tty_struct*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,int ) ;
 int FUNC_5 (struct uart_port*) ;
 struct uart_port* FUNC_6 (struct uart_state*) ;
 int FUNC_7 (struct tty_struct*,int ) ;

__attribute__((used)) static void FUNC_8(struct tty_struct *VAR_4)
{
 struct uart_state *VAR_5 = VAR_4->driver_data;
 upstat_t VAR_6 = VAR_3;
 struct uart_port *VAR_7;

 VAR_7 = FUNC_6(VAR_5);
 if (!VAR_7)
  return;

 if (FUNC_1(VAR_4))
  VAR_6 |= VAR_2;
 if (FUNC_0(VAR_4))
  VAR_6 |= VAR_1;

 if (VAR_7->status & VAR_6) {
  VAR_7->ops->throttle(VAR_7);
  VAR_6 &= ~VAR_7->status;
 }

 if (VAR_6 & VAR_1)
  FUNC_4(VAR_7, VAR_0);

 if (VAR_6 & VAR_2)
  FUNC_7(VAR_4, FUNC_2(VAR_4));

 FUNC_5(VAR_7);
}
