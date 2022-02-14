
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct uart_port {int uartclk; int read_status_mask; int ignore_status_mask; int lock; scalar_t__ membase; } ;
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
 scalar_t__ VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned int FUNC_2 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_3 (struct uart_port*,unsigned int) ;
 int FUNC_4 (struct uart_port*,int,unsigned int) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_19,
           struct ktermios *VAR_20,
           struct ktermios *VAR_21)
{
 unsigned int VAR_22, VAR_23;
 u8 VAR_24 = 0;
 unsigned long VAR_25;


 VAR_20->c_cflag &= ~VAR_1;
 VAR_20->c_iflag &= ~(VAR_0 | VAR_5);


 VAR_22 = FUNC_2(VAR_19, VAR_20, VAR_21,
      VAR_19->uartclk / (0x10000*16),
      VAR_19->uartclk / 256);
 VAR_23 = FUNC_3(VAR_19, VAR_22) - 1;

 switch (VAR_20->c_cflag & VAR_3) {
 case 129:
  break;
 case 128:
 default:
  VAR_24 |= VAR_10;
  break;
 }

 if (VAR_20->c_cflag & VAR_4)
  VAR_24 |= VAR_13;

 if (VAR_20->c_cflag & VAR_7) {
  VAR_24 |= VAR_12;
  if (VAR_20->c_cflag & VAR_8)
   VAR_24 |= VAR_11;
 }


 VAR_19->read_status_mask = VAR_17;
 if (VAR_20->c_iflag & VAR_6)
  VAR_19->read_status_mask |= VAR_18
   | VAR_16;


 VAR_19->ignore_status_mask = 0;
 if (!(VAR_20->c_cflag & VAR_2))
  VAR_19->ignore_status_mask |= VAR_17
   | VAR_18 | VAR_16;

 FUNC_0(&VAR_19->lock, VAR_25);

 FUNC_4(VAR_19, VAR_20->c_cflag, VAR_22);

 FUNC_5(VAR_24, VAR_19->membase + VAR_9);
 FUNC_5(VAR_23 & 0xff, VAR_19->membase + VAR_15);
 FUNC_5(VAR_23 >> 8, VAR_19->membase + VAR_14);

 FUNC_1(&VAR_19->lock, VAR_25);
}
