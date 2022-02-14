
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tcflag_t ;
struct uart_8250_port {int bugs; int fifo_bug; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned char VAR_6 ;
 unsigned char VAR_7 ;
 unsigned char VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 unsigned char VAR_11 ;
 unsigned char VAR_12 ;
 unsigned char VAR_13 ;

__attribute__((used)) static unsigned char FUNC_0(struct uart_8250_port *VAR_14,
         tcflag_t VAR_15)
{
 unsigned char VAR_16;

 switch (VAR_15 & VAR_1) {
 case 131:
  VAR_16 = VAR_10;
  break;
 case 130:
  VAR_16 = VAR_11;
  break;
 case 129:
  VAR_16 = VAR_12;
  break;
 default:
 case 128:
  VAR_16 = VAR_13;
  break;
 }

 if (VAR_15 & VAR_2)
  VAR_16 |= VAR_9;
 if (VAR_15 & VAR_3) {
  VAR_16 |= VAR_7;
  if (VAR_14->bugs & VAR_5)
   VAR_14->fifo_bug = 1;
 }
 if (!(VAR_15 & VAR_4))
  VAR_16 |= VAR_6;





 return VAR_16;
}
