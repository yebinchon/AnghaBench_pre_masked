
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int read_status_mask; int ignore_status_mask; int uartclk; scalar_t__ membase; } ;
struct ltq_uart_port {int lock; } ;
struct ktermios {unsigned int c_cflag; unsigned int c_iflag; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;



 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (unsigned int,scalar_t__) ;
 int FUNC_1 (unsigned int,unsigned int,scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 struct ltq_uart_port* FUNC_4 (struct uart_port*) ;
 scalar_t__ FUNC_5 (struct ktermios*) ;
 int FUNC_6 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_7 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_8 (struct uart_port*,unsigned int) ;
 int FUNC_9 (struct uart_port*,unsigned int,unsigned int) ;

__attribute__((used)) static void
FUNC_10(struct uart_port *VAR_28,
 struct ktermios *VAR_29, struct ktermios *VAR_30)
{
 unsigned int VAR_31;
 unsigned int VAR_32;
 unsigned int VAR_33;
 unsigned int VAR_34;
 unsigned int VAR_35 = 0;
 unsigned long VAR_36;
 struct ltq_uart_port *VAR_37 = FUNC_4(VAR_28);

 VAR_31 = VAR_29->c_cflag;
 VAR_32 = VAR_29->c_iflag;

 switch (VAR_31 & VAR_17) {
 case 128:
  VAR_35 = VAR_3;
  break;

 case 130:
 case 129:
 default:
  VAR_29->c_cflag &= ~ VAR_17;
  VAR_29->c_cflag |= VAR_16;
  VAR_35 = VAR_4;
  break;
 }

 VAR_31 &= ~VAR_14;

 if (VAR_31 & VAR_18)
  VAR_35 |= VAR_8;

 if (VAR_31 & VAR_25) {
  if (!(VAR_31 & VAR_26))
   VAR_35 &= ~VAR_5;
  else
   VAR_35 |= VAR_5;
 }

 VAR_28->read_status_mask = VAR_12;
 if (VAR_32 & VAR_21)
  VAR_28->read_status_mask |= VAR_10 | VAR_11;

 VAR_28->ignore_status_mask = 0;
 if (VAR_32 & VAR_20)
  VAR_28->ignore_status_mask |= VAR_10 | VAR_11;

 if (VAR_32 & VAR_19) {




  if (VAR_32 & VAR_20)
   VAR_28->ignore_status_mask |= VAR_12;
 }

 if ((VAR_31 & VAR_15) == 0)
  VAR_28->ignore_status_mask |= VAR_27;


 VAR_35 |= VAR_2 | VAR_9 | VAR_7;

 FUNC_2(&VAR_37->lock, VAR_36);


 FUNC_1(0, VAR_35, VAR_28->membase + VAR_23);


 VAR_34 = FUNC_7(VAR_28, VAR_29, VAR_30, 0, VAR_28->uartclk / 16);
 VAR_33 = FUNC_8(VAR_28, VAR_34);
 VAR_33 = VAR_33 / 2 - 1;


 FUNC_1(VAR_6, 0, VAR_28->membase + VAR_23);


 FUNC_1(VAR_1, 0, VAR_28->membase + VAR_23);


 FUNC_1(VAR_0, 0, VAR_28->membase + VAR_23);


 FUNC_0(VAR_33, VAR_28->membase + VAR_22);


 FUNC_1(0, VAR_6, VAR_28->membase + VAR_23);


 FUNC_0(VAR_13, VAR_28->membase + VAR_24);

 FUNC_3(&VAR_37->lock, VAR_36);


 if (FUNC_5(VAR_29))
  FUNC_6(VAR_29, VAR_34, VAR_34);

 FUNC_9(VAR_28, VAR_31, VAR_34);
}
