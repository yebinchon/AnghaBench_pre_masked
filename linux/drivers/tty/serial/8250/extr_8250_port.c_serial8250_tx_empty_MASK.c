
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct uart_8250_port {unsigned int lsr_saved_flags; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;
 unsigned int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct uart_8250_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_6(struct uart_port *VAR_4)
{
 struct uart_8250_port *VAR_5 = FUNC_5(VAR_4);
 unsigned long VAR_6;
 unsigned int VAR_7;

 FUNC_0(VAR_5);

 FUNC_3(&VAR_4->lock, VAR_6);
 VAR_7 = FUNC_2(VAR_4, VAR_3);
 VAR_5->lsr_saved_flags |= VAR_7 & VAR_1;
 FUNC_4(&VAR_4->lock, VAR_6);

 FUNC_1(VAR_5);

 return (VAR_7 & VAR_0) == VAR_0 ? VAR_2 : 0;
}
