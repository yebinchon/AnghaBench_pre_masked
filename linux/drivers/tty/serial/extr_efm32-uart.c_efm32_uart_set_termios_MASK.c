
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct uart_port {int uartclk; int read_status_mask; int ignore_status_mask; int lock; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct efm32_uart_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_2 (struct efm32_uart_port*,int,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 struct efm32_uart_port* FUNC_5 (struct uart_port*) ;
 unsigned int FUNC_6 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_7 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_29,
  struct ktermios *VAR_30, struct ktermios *VAR_31)
{
 struct efm32_uart_port *VAR_32 = FUNC_5(VAR_29);
 unsigned long VAR_33;
 unsigned VAR_34;
 u32 VAR_35;
 u32 VAR_36 = 0;


 VAR_30->c_cflag &= ~(VAR_2 | VAR_1);

 VAR_34 = FUNC_6(VAR_29, VAR_30, VAR_31,
   FUNC_0(VAR_29->uartclk, 16 * 8192),
   FUNC_0(VAR_29->uartclk, 16));

 switch (VAR_30->c_cflag & VAR_3) {
 case 131:
  VAR_36 |= FUNC_1(5);
  break;
 case 130:
  VAR_36 |= FUNC_1(6);
  break;
 case 129:
  VAR_36 |= FUNC_1(7);
  break;
 case 128:
  VAR_36 |= FUNC_1(8);
  break;
 }

 if (VAR_30->c_cflag & VAR_4)

  VAR_36 |= VAR_25;
 else
  VAR_36 |= VAR_24;

 if (VAR_30->c_cflag & VAR_8) {
  if (VAR_30->c_cflag & VAR_10)
   VAR_36 |= VAR_23;
  else
   VAR_36 |= VAR_21;
 } else
  VAR_36 |= VAR_22;





 VAR_35 = (FUNC_0(4 * VAR_29->uartclk, 16 * VAR_34) - 4) << 6;

 FUNC_3(&VAR_29->lock, VAR_33);

 FUNC_2(VAR_32,
   VAR_16 | VAR_14, VAR_13);

 VAR_29->read_status_mask = VAR_28;
 if (VAR_30->c_iflag & VAR_7)
  VAR_29->read_status_mask |=
   VAR_26 | VAR_27;
 if (VAR_30->c_iflag & (VAR_5 | VAR_0 | VAR_9))
  VAR_29->read_status_mask |= VAR_11;

 VAR_29->ignore_status_mask = 0;
 if (VAR_30->c_iflag & VAR_6)
  VAR_29->ignore_status_mask |=
   VAR_26 | VAR_27;
 if (VAR_30->c_iflag & VAR_5)
  VAR_29->ignore_status_mask |= VAR_11;

 FUNC_7(VAR_29, VAR_30->c_cflag, VAR_34);

 FUNC_2(VAR_32, VAR_19, VAR_18);
 FUNC_2(VAR_32, VAR_36, VAR_20);
 FUNC_2(VAR_32, VAR_35, VAR_12);

 FUNC_2(VAR_32, VAR_17 | VAR_15,
   VAR_13);

 FUNC_4(&VAR_29->lock, VAR_33);
}
