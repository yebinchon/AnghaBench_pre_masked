
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short FUNC_0 (struct uart_port*,int ) ;
 int FUNC_1 (struct uart_port*,int ,unsigned short) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_5)
{
 unsigned short VAR_6;


 VAR_6 = FUNC_0(VAR_5, VAR_2);

 if (VAR_5->type == VAR_0 || VAR_5->type == VAR_1)
  VAR_6 &= ~VAR_3;

 VAR_6 &= ~VAR_4;

 FUNC_1(VAR_5, VAR_2, VAR_6);
}
