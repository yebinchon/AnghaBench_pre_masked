
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int c_cflag; } ;
struct tty_struct {size_t index; int hw_stopped; TYPE_1__ termios; struct mxser_port* driver_data; } ;
struct mxser_port {scalar_t__ type; int rx_trigger; unsigned int IER; unsigned int MCR; int read_status_mask; int ignore_status_mask; scalar_t__ ioaddr; TYPE_2__* board; int port; } ;
struct TYPE_4__ {scalar_t__ chip_flag; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;




 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ FUNC_0 (struct tty_struct*) ;
 scalar_t__ FUNC_1 (struct tty_struct*) ;
 scalar_t__ FUNC_2 (struct tty_struct*) ;
 scalar_t__ FUNC_3 (struct tty_struct*) ;
 scalar_t__ FUNC_4 (struct tty_struct*) ;
 scalar_t__ FUNC_5 (struct tty_struct*) ;
 scalar_t__ FUNC_6 (struct tty_struct*) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_7 (struct tty_struct*) ;
 int FUNC_8 (struct tty_struct*) ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 scalar_t__ VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 scalar_t__ VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 unsigned int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 unsigned int VAR_31 ;
 scalar_t__ VAR_32 ;
 unsigned char VAR_33 ;
 unsigned char FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct tty_struct*,int ) ;
 scalar_t__* VAR_34 ;
 int FUNC_15 (struct mxser_port*) ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (scalar_t__,int ) ;
 int FUNC_18 (unsigned int,scalar_t__) ;
 int FUNC_19 (struct tty_struct*) ;
 int FUNC_20 (int *,unsigned int) ;
 int FUNC_21 (int *,unsigned int) ;
 int FUNC_22 (struct tty_struct*) ;

__attribute__((used)) static int FUNC_23(struct tty_struct *VAR_35)
{
 struct mxser_port *VAR_36 = VAR_35->driver_data;
 unsigned VAR_37, VAR_38, VAR_39;
 int VAR_40 = 0;
 unsigned char VAR_41;

 VAR_37 = VAR_35->termios.c_cflag;
 if (!VAR_36->ioaddr)
  return VAR_40;

 if (VAR_34[VAR_35->index] == 0)
  FUNC_14(VAR_35, FUNC_19(VAR_35));


 switch (VAR_37 & VAR_3) {
 case 131:
  VAR_38 = 0x00;
  break;
 case 130:
  VAR_38 = 0x01;
  break;
 case 129:
  VAR_38 = 0x02;
  break;
 case 128:
  VAR_38 = 0x03;
  break;
 default:
  VAR_38 = 0x00;
  break;
 }
 if (VAR_37 & VAR_4)
  VAR_38 |= 0x04;
 if (VAR_37 & VAR_6)
  VAR_38 |= VAR_22;
 if (!(VAR_37 & VAR_7))
  VAR_38 |= VAR_21;
 if (VAR_37 & VAR_1)
  VAR_38 |= VAR_23;

 if ((VAR_36->type == VAR_10) || (VAR_36->type == VAR_8)) {
  if (VAR_36->board->chip_flag) {
   VAR_39 = VAR_12;
   VAR_39 |= VAR_5;
   FUNC_15(VAR_36);
  } else
   VAR_39 = 0;
 } else {
  VAR_39 = VAR_12;
  if (VAR_36->board->chip_flag) {
   VAR_39 |= VAR_5;
   FUNC_15(VAR_36);
  } else {
   switch (VAR_36->rx_trigger) {
   case 1:
    VAR_39 |= VAR_13;
    break;
   case 4:
    VAR_39 |= VAR_15;
    break;
   case 8:
    VAR_39 |= VAR_16;
    break;
   default:
    VAR_39 |= VAR_14;
    break;
   }
  }
 }


 VAR_36->IER &= ~VAR_18;
 VAR_36->MCR &= ~VAR_31;
 FUNC_21(&VAR_36->port, VAR_37 & VAR_2);
 if (VAR_37 & VAR_2) {
  VAR_36->IER |= VAR_18;
  if ((VAR_36->type == VAR_9) || (VAR_36->board->chip_flag)) {
   VAR_36->MCR |= VAR_31;
  } else {
   VAR_41 = FUNC_9(VAR_36->ioaddr + VAR_32);
   if (VAR_35->hw_stopped) {
    if (VAR_41 & VAR_33) {
     VAR_35->hw_stopped = 0;
     if (VAR_36->type != VAR_9 &&
       !VAR_36->board->chip_flag) {
      FUNC_18(VAR_36->IER & ~VAR_19,
       VAR_36->ioaddr +
       VAR_17);
      VAR_36->IER |= VAR_19;
      FUNC_18(VAR_36->IER, VAR_36->ioaddr +
        VAR_17);
     }
     FUNC_22(VAR_35);
    }
   } else {
    if (!(VAR_41 & VAR_33)) {
     VAR_35->hw_stopped = 1;
     if ((VAR_36->type != VAR_9) &&
       (!VAR_36->board->chip_flag)) {
      VAR_36->IER &= ~VAR_19;
      FUNC_18(VAR_36->IER, VAR_36->ioaddr +
        VAR_17);
     }
    }
   }
  }
 }
 FUNC_18(VAR_36->MCR, VAR_36->ioaddr + VAR_30);
 FUNC_20(&VAR_36->port, ~VAR_37 & VAR_0);
 if (~VAR_37 & VAR_0)
  VAR_36->IER |= VAR_18;
 FUNC_18(VAR_36->IER, VAR_36->ioaddr + VAR_17);




 VAR_36->read_status_mask = VAR_27 | VAR_29 | VAR_25;
 if (FUNC_3(VAR_35))
  VAR_36->read_status_mask |= VAR_26 | VAR_28;
 if (FUNC_0(VAR_35) || FUNC_6(VAR_35))
  VAR_36->read_status_mask |= VAR_24;

 VAR_36->ignore_status_mask = 0;

 if (FUNC_1(VAR_35)) {
  VAR_36->ignore_status_mask |= VAR_24;
  VAR_36->read_status_mask |= VAR_24;




  if (FUNC_2(VAR_35)) {
   VAR_36->ignore_status_mask |=
      VAR_27 |
      VAR_28 |
      VAR_26;
   VAR_36->read_status_mask |=
      VAR_27 |
      VAR_28 |
      VAR_26;
  }
 }
 if (VAR_36->board->chip_flag) {
  FUNC_17(VAR_36->ioaddr, FUNC_7(VAR_35));
  FUNC_16(VAR_36->ioaddr, FUNC_8(VAR_35));
  if (FUNC_5(VAR_35)) {
   FUNC_12(
     VAR_36->ioaddr);
  } else {
   FUNC_10(
     VAR_36->ioaddr);
  }
  if (FUNC_4(VAR_35)) {
   FUNC_13(
     VAR_36->ioaddr);
  } else {
   FUNC_11(
     VAR_36->ioaddr);
  }
 }


 FUNC_18(VAR_39, VAR_36->ioaddr + VAR_11);
 FUNC_18(VAR_38, VAR_36->ioaddr + VAR_20);

 return VAR_40;
}
