
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; int read_status_mask; int ignore_status_mask; int lock; scalar_t__ fifosize; } ;
struct ktermios {int c_cflag; int c_iflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 unsigned int* VAR_6 ;
 unsigned int* VAR_7 ;
 unsigned int* VAR_8 ;
 int* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_4 (struct uart_port*,unsigned int) ;
 int FUNC_5 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void
FUNC_6(struct uart_port *VAR_25, struct ktermios *VAR_26,
   struct ktermios *VAR_27)
{
 unsigned long VAR_28;
 unsigned int VAR_29, VAR_30, VAR_31, VAR_32;




 VAR_26->c_cflag &= ~(VAR_11 | VAR_4 | VAR_2);
 VAR_26->c_cflag |= VAR_1;




 VAR_26->c_iflag &= ~(VAR_16 | VAR_0);




 VAR_29 = FUNC_3(VAR_25, VAR_26, VAR_27, 0, VAR_25->uartclk/16);
 VAR_30 = FUNC_4(VAR_25, VAR_29);
 VAR_32 = VAR_25->uartclk / (16 * VAR_30);
 FUNC_2(VAR_26, VAR_32, VAR_32);

 switch (VAR_26->c_cflag & VAR_5) {
 case 130:
  VAR_31 = 0x00;
  break;
 case 129:
  VAR_31 = 0x20;
  break;
 case 128:
  VAR_31 = 0x40;
  break;
 default:
  VAR_31 = 0x60;
  break;
 }

 if (VAR_26->c_cflag & VAR_10)
  VAR_31 |= VAR_15;
 if (VAR_26->c_cflag & VAR_19) {
  VAR_31 |= VAR_13;
  if (!(VAR_26->c_cflag & VAR_20))
   VAR_31 |= VAR_14;
 }

 if (VAR_25->fifosize)
  VAR_31 |= VAR_12;

 FUNC_0(&VAR_25->lock, VAR_28);




 FUNC_5(VAR_25, VAR_26->c_cflag, VAR_29);




 VAR_25->read_status_mask = VAR_23;
 if (VAR_26->c_iflag & VAR_18)
  VAR_25->read_status_mask |= VAR_22 | VAR_24;




 VAR_25->ignore_status_mask = 0;
 if (VAR_26->c_iflag & VAR_17)
  VAR_25->ignore_status_mask |= VAR_22 | VAR_24;
 if (VAR_26->c_iflag & VAR_16 && VAR_26->c_iflag & VAR_17)
  VAR_25->ignore_status_mask |= VAR_23;




 if ((VAR_26->c_cflag & VAR_3) == 0)
  VAR_25->ignore_status_mask |= VAR_21;

 VAR_30 -= 1;

 *VAR_9 = 0;
 *VAR_7 = VAR_30 & 0xff;
 *VAR_8 = (VAR_30 >> 8) & 0x0f;
 *VAR_6 = VAR_31;
 *VAR_9 = 1;

 FUNC_1(&VAR_25->lock, VAR_28);
}
