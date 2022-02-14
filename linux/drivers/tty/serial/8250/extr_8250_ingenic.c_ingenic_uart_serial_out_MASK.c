
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int (* serial_in ) (struct uart_port*,int const) ;int regshift; scalar_t__ membase; } ;



 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_port*,int const) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7;

 switch (VAR_5) {
 case 130:

  VAR_6 |= VAR_0;
  break;

 case 129:




  VAR_6 |= (VAR_6 & 0x4) << 2;
  break;

 case 128:




  VAR_7 = VAR_4->serial_in(VAR_4, 129);

  if (VAR_7 & VAR_1)
   VAR_6 |= VAR_3 | VAR_2;
  else
   VAR_6 &= ~(VAR_3 | VAR_2);
  break;

 default:
  break;
 }

 FUNC_1(VAR_6, VAR_4->membase + (VAR_5 << VAR_4->regshift));
}
