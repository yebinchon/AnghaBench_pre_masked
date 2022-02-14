
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_0);
 VAR_4 &= ~(VAR_2 | VAR_1);
 FUNC_1(VAR_3, VAR_4, VAR_0);
}
