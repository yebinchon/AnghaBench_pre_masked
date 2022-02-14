
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {unsigned char ier; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct uart_8250_port*,int ,unsigned char) ;

__attribute__((used)) static void FUNC_1(struct uart_8250_port *VAR_3,
  bool VAR_4)
{
 unsigned char VAR_5 = VAR_2 | VAR_1;

 VAR_3->ier &= ~VAR_5;
 if (!VAR_4)
  VAR_3->ier |= VAR_5;
 FUNC_0(VAR_3, VAR_0, VAR_3->ier);
}
