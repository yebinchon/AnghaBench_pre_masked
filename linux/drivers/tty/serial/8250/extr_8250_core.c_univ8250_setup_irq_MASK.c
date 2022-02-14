
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int irq; int name; } ;
struct TYPE_2__ {int function; } ;
struct uart_8250_port {int bugs; TYPE_1__ timer; struct uart_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct uart_8250_port*) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;

__attribute__((used)) static int FUNC_4(struct uart_8250_port *VAR_4)
{
 struct uart_port *VAR_5 = &VAR_4->port;
 int VAR_6 = 0;





 if (VAR_4->bugs & VAR_1) {
  FUNC_1("%s - using backup timer\n", VAR_5->name);

  VAR_4->timer.function = VAR_3;
  FUNC_0(&VAR_4->timer, VAR_2 +
     FUNC_3(VAR_5) + VAR_0 / 5);
 }






 if (!VAR_5->irq) {
  FUNC_0(&VAR_4->timer, VAR_2 + FUNC_3(VAR_5));
 } else
  VAR_6 = FUNC_2(VAR_4);

 return VAR_6;
}
