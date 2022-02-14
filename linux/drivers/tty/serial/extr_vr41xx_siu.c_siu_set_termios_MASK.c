
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int tcflag_t ;
struct uart_port {int uartclk; int read_status_mask; int ignore_status_mask; int lock; int mctrl; } ;
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
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct uart_port*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
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
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 unsigned int FUNC_6 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 unsigned int FUNC_7 (struct uart_port*,unsigned int) ;
 int FUNC_8 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_34, struct ktermios *VAR_35,
                            struct ktermios *VAR_36)
{
 tcflag_t VAR_37, VAR_38;
 uint8_t VAR_39, VAR_40, VAR_41;
 unsigned int VAR_42, VAR_43;
 unsigned long VAR_44;

 VAR_37 = VAR_35->c_cflag;
 switch (VAR_37 & VAR_3) {
 case 130:
  VAR_39 = VAR_24;
  break;
 case 129:
  VAR_39 = VAR_25;
  break;
 case 128:
  VAR_39 = VAR_26;
  break;
 default:
  VAR_39 = VAR_27;
  break;
 }

 if (VAR_37 & VAR_4)
  VAR_39 |= VAR_23;
 if (VAR_37 & VAR_8)
  VAR_39 |= VAR_21;
 if ((VAR_37 & VAR_10) != VAR_10)
  VAR_39 |= VAR_20;
 if (VAR_37 & VAR_1)
  VAR_39 |= VAR_22;

 VAR_42 = FUNC_6(VAR_34, VAR_35, VAR_36, 0, VAR_34->uartclk/16);
 VAR_43 = FUNC_7(VAR_34, VAR_42);

 VAR_40 = VAR_14 | VAR_15;

 FUNC_4(&VAR_34->lock, VAR_44);

 FUNC_8(VAR_34, VAR_37, VAR_42);

 VAR_38 = VAR_35->c_iflag;

 VAR_34->read_status_mask = VAR_33 | VAR_31 | VAR_29;
 if (VAR_38 & VAR_7)
  VAR_34->read_status_mask |= VAR_30 | VAR_32;
 if (VAR_38 & (VAR_5 | VAR_0 | VAR_9))
  VAR_34->read_status_mask |= VAR_28;

 VAR_34->ignore_status_mask = 0;
 if (VAR_38 & VAR_6)
  VAR_34->ignore_status_mask |= VAR_30 | VAR_32;
 if (VAR_38 & VAR_5) {
  VAR_34->ignore_status_mask |= VAR_28;
  if (VAR_38 & VAR_6)
   VAR_34->ignore_status_mask |= VAR_31;
 }

 if ((VAR_37 & VAR_2) == 0)
  VAR_34->ignore_status_mask |= VAR_29;

 VAR_41 = FUNC_1(VAR_34, VAR_16);
 VAR_41 &= ~VAR_17;
 if (FUNC_0(VAR_34, VAR_37))
  VAR_41 |= VAR_17;
 FUNC_3(VAR_34, VAR_16, VAR_41);

 FUNC_3(VAR_34, VAR_18, VAR_39 | VAR_19);

 FUNC_3(VAR_34, VAR_11, (uint8_t)VAR_43);
 FUNC_3(VAR_34, VAR_12, (uint8_t)(VAR_43 >> 8));

 FUNC_3(VAR_34, VAR_18, VAR_39);

 FUNC_3(VAR_34, VAR_13, VAR_40);

 FUNC_2(VAR_34, VAR_34->mctrl);

 FUNC_5(&VAR_34->lock, VAR_44);
}
