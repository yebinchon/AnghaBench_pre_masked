
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_7, unsigned int VAR_8)
{
 FUNC_1(FUNC_0(VAR_7), VAR_0,
  VAR_1 | VAR_3 | VAR_2,
  ((VAR_8 & VAR_4) ? VAR_1 : 0) |
  ((VAR_8 & VAR_6) ? VAR_3 : 0) |
  ((VAR_8 & VAR_5) ? VAR_2 : 0));
}
