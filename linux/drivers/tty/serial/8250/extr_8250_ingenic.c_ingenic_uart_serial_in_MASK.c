
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int regshift; scalar_t__ membase; } ;



 unsigned int VAR_0 ;

 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_3, int VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_3->membase + (VAR_4 << VAR_3->regshift));


 switch (VAR_4) {
 case 129:
  VAR_5 &= ~VAR_0;
  break;

 case 128:
  VAR_5 &= ~(VAR_2 | VAR_1);
  break;

 default:
  break;
 }
 return VAR_5;
}
