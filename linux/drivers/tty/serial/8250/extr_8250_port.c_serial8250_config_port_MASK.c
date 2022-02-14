
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {scalar_t__ iotype; scalar_t__ type; } ;
struct TYPE_3__ {size_t type; } ;
struct uart_8250_port {scalar_t__ cur_iotype; TYPE_1__ port; int fcr; int bugs; } ;
struct TYPE_4__ {int fcr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*) ;
 int FUNC_3 (struct uart_8250_port*) ;
 int FUNC_4 (struct uart_8250_port*) ;
 int FUNC_5 (struct uart_port*) ;
 TYPE_2__* VAR_7 ;
 struct uart_8250_port* FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_8, int VAR_9)
{
 struct uart_8250_port *VAR_10 = FUNC_6(VAR_8);
 int VAR_11;





 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11 < 0)
  return;

 if (VAR_8->iotype != VAR_10->cur_iotype)
  FUNC_5(VAR_8);

 if (VAR_9 & VAR_5)
  FUNC_0(VAR_10);


 if (VAR_8->type == VAR_0 && VAR_8->iotype == VAR_6)
  VAR_10->bugs |= VAR_3;


 if (VAR_8->type == VAR_1)
  VAR_10->bugs |= VAR_3;

 if (VAR_8->type != VAR_2 && VAR_9 & VAR_4)
  FUNC_1(VAR_10);

 if (VAR_8->type == VAR_2)
  FUNC_3(VAR_10);

 FUNC_2(VAR_10);
 VAR_10->fcr = VAR_7[VAR_10->port.type].fcr;
}
