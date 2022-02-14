
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct uart_port {int read_status_mask; int ignore_status_mask; int dev; } ;
struct sccnxp_port {int lock; TYPE_1__* chip; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct TYPE_2__ {long flags; } ;


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
 long VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 struct sccnxp_port* FUNC_0 (int ) ;
 int FUNC_1 (struct uart_port*,int ,int) ;
 int FUNC_2 (struct uart_port*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (struct ktermios*) ;
 int FUNC_6 (struct ktermios*,int,int) ;
 int FUNC_7 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_8 (struct uart_port*,int,int) ;

__attribute__((used)) static void FUNC_9(struct uart_port *VAR_35,
          struct ktermios *VAR_36, struct ktermios *VAR_37)
{
 struct sccnxp_port *VAR_38 = FUNC_0(VAR_35->dev);
 unsigned long VAR_39;
 u8 VAR_40, VAR_41;
 int VAR_42;

 FUNC_3(&VAR_38->lock, VAR_39);


 VAR_36->c_cflag &= ~VAR_1;


 FUNC_1(VAR_35, VAR_28, VAR_5 |
            VAR_8 | VAR_10);
 FUNC_1(VAR_35, VAR_28, VAR_7);
 FUNC_1(VAR_35, VAR_28, VAR_6);
 FUNC_1(VAR_35, VAR_28, VAR_3);


 switch (VAR_36->c_cflag & VAR_12) {
 case 131:
  VAR_40 = VAR_17;
  break;
 case 130:
  VAR_40 = VAR_18;
  break;
 case 129:
  VAR_40 = VAR_19;
  break;
 case 128:
 default:
  VAR_40 = VAR_20;
  break;
 }


 if (VAR_36->c_cflag & VAR_25) {
  if (VAR_36->c_cflag & VAR_27)
   VAR_40 |= VAR_22;
 } else
  VAR_40 |= VAR_21;


 VAR_41 = (VAR_36->c_cflag & VAR_13) ? VAR_24 : VAR_23;


 FUNC_1(VAR_35, VAR_28, VAR_4);
 FUNC_1(VAR_35, VAR_30, VAR_40);
 FUNC_1(VAR_35, VAR_30, VAR_41);


 VAR_35->read_status_mask = VAR_33;
 if (VAR_36->c_iflag & VAR_16)
  VAR_35->read_status_mask |= VAR_34 | VAR_32;
 if (VAR_36->c_iflag & (VAR_14 | VAR_0 | VAR_26))
  VAR_35->read_status_mask |= VAR_31;


 VAR_35->ignore_status_mask = 0;
 if (VAR_36->c_iflag & VAR_14)
  VAR_35->ignore_status_mask |= VAR_31;
 if (VAR_36->c_iflag & VAR_15)
  VAR_35->ignore_status_mask |= VAR_34;
 if (!(VAR_36->c_cflag & VAR_2))
  VAR_35->ignore_status_mask |= VAR_34 | VAR_33 | VAR_32 | VAR_31;


 VAR_42 = FUNC_7(VAR_35, VAR_36, VAR_37, 50,
      (VAR_38->chip->flags & VAR_29) ?
      230400 : 38400);
 VAR_42 = FUNC_2(VAR_35, VAR_42);


 FUNC_8(VAR_35, VAR_36->c_cflag, VAR_42);


 if (FUNC_5(VAR_36))
  FUNC_6(VAR_36, VAR_42, VAR_42);


 FUNC_1(VAR_35, VAR_28, VAR_9 | VAR_11);

 FUNC_4(&VAR_38->lock, VAR_39);
}
