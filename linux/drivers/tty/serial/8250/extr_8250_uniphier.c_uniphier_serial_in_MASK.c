
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {scalar_t__ membase; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_3, int VAR_4)
{
 unsigned int VAR_5 = 0;

 switch (VAR_4) {
 case 128:

  VAR_5 = 8;
  VAR_4 = VAR_0;
  break;
 case 130:
  VAR_5 = 8;

 case 129:
  VAR_4 = VAR_1;
  break;
 default:
  VAR_4 <<= VAR_2;
  break;
 }






 return (FUNC_0(VAR_3->membase + VAR_4) >> VAR_5) & 0xff;
}
