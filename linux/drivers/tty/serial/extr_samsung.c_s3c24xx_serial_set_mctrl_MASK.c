
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = FUNC_0(VAR_3, VAR_1);

 if (VAR_4 & VAR_2)
  VAR_5 |= VAR_0;
 else
  VAR_5 &= ~VAR_0;

 FUNC_1(VAR_3, VAR_1, VAR_5);
}
