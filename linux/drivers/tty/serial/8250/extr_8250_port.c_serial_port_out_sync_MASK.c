
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int iotype; int (* serial_out ) (struct uart_port*,int,int) ;int (* serial_in ) (struct uart_port*,int ) ;} ;


 int VAR_0 ;





 int FUNC_0 (struct uart_port*,int,int) ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct uart_port *VAR_1, int VAR_2, int VAR_3)
{
 switch (VAR_1->iotype) {
 case 131:
 case 130:
 case 129:
 case 128:
 case 132:
  VAR_1->serial_out(VAR_1, VAR_2, VAR_3);
  VAR_1->serial_in(VAR_1, VAR_0);
  break;
 default:
  VAR_1->serial_out(VAR_1, VAR_2, VAR_3);
 }
}
