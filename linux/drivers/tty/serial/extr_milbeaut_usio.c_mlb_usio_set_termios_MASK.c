
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {unsigned long uartclk; int read_status_mask; int ignore_status_mask; int lock; scalar_t__ membase; TYPE_1__* dev; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct TYPE_2__ {int of_node; } ;


 unsigned long FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 unsigned int VAR_30 ;
 unsigned int VAR_31 ;
 unsigned int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 unsigned int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 unsigned long FUNC_4 (struct uart_port*,struct ktermios*,struct ktermios*,int ,unsigned long) ;
 int FUNC_5 (struct uart_port*,int,unsigned long) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int FUNC_7 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_41,
   struct ktermios *VAR_42, struct ktermios *VAR_43)
{
 unsigned int VAR_44, VAR_45 = VAR_32;
 unsigned long VAR_46, VAR_47, VAR_48;

 switch (VAR_42->c_cflag & VAR_2) {
 case 131:
  VAR_44 = VAR_8;
  break;
 case 130:
  VAR_44 = VAR_9;
  break;
 case 129:
  VAR_44 = VAR_10;
  break;
 case 128:
 default:
  VAR_44 = VAR_11;
  break;
 }

 if (VAR_42->c_cflag & VAR_3)
  VAR_45 |= VAR_31;

 if (VAR_42->c_cflag & VAR_39) {
  VAR_44 |= VAR_13;
  if (VAR_42->c_cflag & VAR_40)
   VAR_44 |= VAR_12;
 }

 if (FUNC_1(VAR_41->dev->of_node, "auto-flow-control") ||
   (VAR_42->c_cflag & VAR_1))
  VAR_44 |= VAR_7;

 VAR_47 = FUNC_4(VAR_41, VAR_42, VAR_43, 0, VAR_41->uartclk);
 if (VAR_47 > 1)
  VAR_48 = VAR_41->uartclk / VAR_47 - 1;
 else
  VAR_48 = 0;

 FUNC_2(&VAR_41->lock, VAR_46);
 FUNC_5(VAR_41, VAR_42->c_cflag, VAR_47);
 VAR_41->read_status_mask = VAR_34 | VAR_36 |
     VAR_38;
 if (VAR_42->c_iflag & VAR_6)
  VAR_41->read_status_mask |= VAR_33 | VAR_35;

 VAR_41->ignore_status_mask = 0;
 if (VAR_42->c_iflag & VAR_5)
  VAR_41->ignore_status_mask |= VAR_33 | VAR_35;
 if ((VAR_42->c_iflag & VAR_4) && (VAR_42->c_iflag & VAR_5))
  VAR_41->ignore_status_mask |= VAR_34;
 if ((VAR_42->c_cflag & VAR_0) == 0)
  VAR_41->ignore_status_mask |= VAR_36;

 FUNC_6(0, VAR_41->membase + VAR_23);
 FUNC_6(VAR_30, VAR_41->membase + VAR_23);
 FUNC_6(VAR_37, VAR_41->membase + VAR_25);
 FUNC_7(0, VAR_41->membase + VAR_22);
 FUNC_6(VAR_45, VAR_41->membase + VAR_24);
 FUNC_6(VAR_44, VAR_41->membase + VAR_20);
 FUNC_7(VAR_48, VAR_41->membase + VAR_19);
 FUNC_7(0, VAR_41->membase + VAR_22);
 FUNC_7(VAR_14 | VAR_15 | VAR_16 |
        VAR_17 | VAR_18,
        VAR_41->membase + VAR_22);
 FUNC_7(0, VAR_41->membase + VAR_21);
 FUNC_7(FUNC_0(12), VAR_41->membase + VAR_21);
 FUNC_6(VAR_26 | VAR_27 | VAR_28 |
        VAR_29, VAR_41->membase + VAR_23);
 FUNC_3(&VAR_41->lock, VAR_46);
}
