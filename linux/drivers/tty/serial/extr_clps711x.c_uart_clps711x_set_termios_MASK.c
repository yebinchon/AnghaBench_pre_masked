
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct uart_port {int uartclk; int read_status_mask; int ignore_status_mask; scalar_t__ membase; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int FUNC_0 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 unsigned int FUNC_1 (struct uart_port*,unsigned int) ;
 int FUNC_2 (struct uart_port*,int,unsigned int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_21,
          struct ktermios *VAR_22,
          struct ktermios *VAR_23)
{
 u32 VAR_24;
 unsigned int VAR_25, VAR_26;


 VAR_22->c_cflag &= ~VAR_1;
 VAR_22->c_iflag &= ~(VAR_0 | VAR_5);


 VAR_25 = FUNC_0(VAR_21, VAR_22, VAR_23, VAR_21->uartclk / 4096,
            VAR_21->uartclk / 16);
 VAR_26 = FUNC_1(VAR_21, VAR_25);

 switch (VAR_22->c_cflag & VAR_3) {
 case 131:
  VAR_24 = VAR_16;
  break;
 case 130:
  VAR_24 = VAR_17;
  break;
 case 129:
  VAR_24 = VAR_18;
  break;
 case 128:
 default:
  VAR_24 = VAR_19;
  break;
 }

 if (VAR_22->c_cflag & VAR_4)
  VAR_24 |= VAR_20;

 if (VAR_22->c_cflag & VAR_7) {
  VAR_24 |= VAR_15;
  if (!(VAR_22->c_cflag & VAR_8))
   VAR_24 |= VAR_12;
 }


 VAR_24 |= VAR_13;


 VAR_21->read_status_mask = VAR_10;
 if (VAR_22->c_iflag & VAR_6)
  VAR_21->read_status_mask |= VAR_11 | VAR_9;


 VAR_21->ignore_status_mask = 0;
 if (!(VAR_22->c_cflag & VAR_2))
  VAR_21->ignore_status_mask |= VAR_10 | VAR_11 |
         VAR_9;

 FUNC_2(VAR_21, VAR_22->c_cflag, VAR_25);

 FUNC_3(VAR_24 | (VAR_26 - 1), VAR_21->membase + VAR_14);
}
