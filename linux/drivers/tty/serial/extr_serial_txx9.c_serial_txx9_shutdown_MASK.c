
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ line; int irq; TYPE_1__* cons; int lock; int mctrl; } ;
struct uart_txx9_port {TYPE_2__ port; } ;
struct uart_port {int dummy; } ;
struct TYPE_3__ {scalar_t__ index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,struct uart_txx9_port*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (struct uart_txx9_port*,int ,int) ;
 int FUNC_3 (struct uart_txx9_port*,int ,int ) ;
 int FUNC_4 (struct uart_txx9_port*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct uart_txx9_port* FUNC_7 (struct uart_port*) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_9)
{
 struct uart_txx9_port *VAR_10 = FUNC_7(VAR_9);
 unsigned long VAR_11;




 FUNC_3(VAR_10, VAR_0, 0);

 FUNC_5(&VAR_10->port.lock, VAR_11);
 FUNC_1(&VAR_10->port, VAR_10->port.mctrl);
 FUNC_6(&VAR_10->port.lock, VAR_11);




 FUNC_2(VAR_10, VAR_5, VAR_7);
 FUNC_4(VAR_10, VAR_1,
  VAR_4 | VAR_3 | VAR_2);

 FUNC_2(VAR_10, VAR_1,
   VAR_4 | VAR_3 | VAR_2);


 FUNC_4(VAR_10, VAR_5, VAR_6 | VAR_8);

 FUNC_0(VAR_10->port.irq, VAR_10);
}
