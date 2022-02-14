
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {unsigned int fifosize; unsigned int timeout; } ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;

void
FUNC_0(struct uart_port *VAR_4, unsigned int VAR_5,
      unsigned int VAR_6)
{
 unsigned int VAR_7;


 switch (VAR_5 & VAR_0) {
 case 130:
  VAR_7 = 7;
  break;
 case 129:
  VAR_7 = 8;
  break;
 case 128:
  VAR_7 = 9;
  break;
 default:
  VAR_7 = 10;
  break;
 }

 if (VAR_5 & VAR_1)
  VAR_7++;
 if (VAR_5 & VAR_3)
  VAR_7++;




 VAR_7 = VAR_7 * VAR_4->fifosize;





 VAR_4->timeout = (VAR_2 * VAR_7) / VAR_6 + VAR_2/50;
}
