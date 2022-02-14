
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long uint64_t ;
typedef int u32 ;
struct TYPE_4__ {int flags; } ;
struct uart_port {int uartclk; TYPE_1__ rs485; } ;
struct ktermios {unsigned int c_cflag; int c_iflag; } ;
struct TYPE_5__ {int read_status_mask; int ignore_status_mask; unsigned int uartclk; int lock; } ;
struct imx_port {TYPE_2__ port; int have_rtscts; int timer; } ;
typedef int speed_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
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
 scalar_t__ FUNC_0 (TYPE_2__*,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_1 (unsigned long) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct imx_port*) ;
 void* FUNC_6 (struct imx_port*,int ) ;
 int FUNC_7 (struct imx_port*,int*) ;
 int FUNC_8 (struct imx_port*,int*) ;
 int FUNC_9 (struct imx_port*,int,int ) ;
 int FUNC_10 (int,unsigned int,int,int,unsigned long*,unsigned long*) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (struct ktermios*,int ,int ) ;
 unsigned int FUNC_14 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 unsigned int FUNC_15 (struct uart_port*,unsigned int) ;
 int FUNC_16 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void
FUNC_17(struct uart_port *VAR_37, struct ktermios *VAR_38,
       struct ktermios *VAR_39)
{
 struct imx_port *VAR_40 = (struct imx_port *)VAR_37;
 unsigned long VAR_41;
 u32 VAR_42, VAR_43, VAR_44;
 unsigned int VAR_45, VAR_46;
 unsigned int VAR_47 = VAR_39 ? VAR_39->c_cflag & VAR_5 : VAR_4;
 unsigned long VAR_48;
 unsigned long VAR_49, VAR_50, VAR_51, VAR_52;
 uint64_t VAR_53;




 while ((VAR_38->c_cflag & VAR_5) != VAR_3 &&
        (VAR_38->c_cflag & VAR_5) != VAR_4) {
  VAR_38->c_cflag &= ~VAR_5;
  VAR_38->c_cflag |= VAR_47;
  VAR_47 = VAR_4;
 }

 FUNC_2(&VAR_40->timer);




 VAR_45 = FUNC_14(VAR_37, VAR_38, VAR_39, 50, VAR_37->uartclk / 16);
 VAR_46 = FUNC_15(VAR_37, VAR_45);

 FUNC_11(&VAR_40->port.lock, VAR_41);





 VAR_43 = FUNC_6(VAR_40, VAR_18);
 VAR_42 = VAR_43 & (VAR_28 | VAR_25 | VAR_19 | VAR_20);

 VAR_42 |= VAR_26 | VAR_22;
 if ((VAR_38->c_cflag & VAR_5) == VAR_4)
  VAR_42 |= VAR_29;

 if (!VAR_40->have_rtscts)
  VAR_38->c_cflag &= ~VAR_2;

 if (VAR_37->rs485.flags & VAR_14) {





  if (VAR_37->rs485.flags & VAR_15)
   FUNC_7(VAR_40, &VAR_42);
  else
   FUNC_8(VAR_40, &VAR_42);

 } else if (VAR_38->c_cflag & VAR_2) {




  if (VAR_42 & VAR_20)
   VAR_42 |= VAR_21;
 }

 if (VAR_38->c_cflag & VAR_2)
  VAR_42 &= ~VAR_22;

 if (VAR_38->c_cflag & VAR_6)
  VAR_42 |= VAR_27;
 if (VAR_38->c_cflag & VAR_11) {
  VAR_42 |= VAR_23;
  if (VAR_38->c_cflag & VAR_13)
   VAR_42 |= VAR_24;
 }

 VAR_40->port.read_status_mask = 0;
 if (VAR_38->c_iflag & VAR_10)
  VAR_40->port.read_status_mask |= (VAR_34 | VAR_36);
 if (VAR_38->c_iflag & (VAR_0 | VAR_12))
  VAR_40->port.read_status_mask |= VAR_32;




 VAR_40->port.ignore_status_mask = 0;
 if (VAR_38->c_iflag & VAR_8)
  VAR_40->port.ignore_status_mask |= VAR_36 | VAR_34;
 if (VAR_38->c_iflag & VAR_7) {
  VAR_40->port.ignore_status_mask |= VAR_32;




  if (VAR_38->c_iflag & VAR_8)
   VAR_40->port.ignore_status_mask |= VAR_35;
 }

 if ((VAR_38->c_cflag & VAR_1) == 0)
  VAR_40->port.ignore_status_mask |= VAR_33;




 FUNC_16(VAR_37, VAR_38->c_cflag, VAR_45);


 VAR_48 = VAR_40->port.uartclk / (VAR_45 * 16);
 if (VAR_45 == 38400 && VAR_46 != VAR_48)
  VAR_45 = VAR_40->port.uartclk / (VAR_46 * 16);

 VAR_48 = VAR_40->port.uartclk / (VAR_45 * 16);
 if (VAR_48 > 7)
  VAR_48 = 7;
 if (!VAR_48)
  VAR_48 = 1;

 FUNC_10(16 * VAR_48 * VAR_45, VAR_40->port.uartclk,
  1 << 16, 1 << 16, &VAR_49, &VAR_50);

 VAR_53 = VAR_40->port.uartclk;
 VAR_53 *= VAR_49;
 FUNC_3(VAR_53, VAR_50 * 16 * VAR_48);
 FUNC_13(VAR_38,
    (speed_t)VAR_53, (speed_t)VAR_53);

 VAR_49 -= 1;
 VAR_50 -= 1;

 VAR_44 = FUNC_6(VAR_40, VAR_30);
 VAR_44 = (VAR_44 & (~VAR_31)) | FUNC_1(VAR_48);
 FUNC_9(VAR_40, VAR_44, VAR_30);
 VAR_51 = FUNC_6(VAR_40, VAR_16);
 VAR_52 = FUNC_6(VAR_40, VAR_17);
 if (VAR_51 != VAR_49 || VAR_52 != VAR_50) {
  FUNC_9(VAR_40, VAR_49, VAR_16);
  FUNC_9(VAR_40, VAR_50, VAR_17);
 }

 if (!FUNC_5(VAR_40))
  FUNC_9(VAR_40, VAR_40->port.uartclk / VAR_48 / 1000,
    VAR_9);

 FUNC_9(VAR_40, VAR_42, VAR_18);

 if (FUNC_0(&VAR_40->port, VAR_38->c_cflag))
  FUNC_4(&VAR_40->port);

 FUNC_12(&VAR_40->port.lock, VAR_41);
}
