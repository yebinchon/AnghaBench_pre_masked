
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int uartclk; int dev; int lock; } ;
struct TYPE_2__ {int read_status_mask; int ignore_status_mask; int status; int flags; int lock; struct omap8250_priv* private_data; } ;
struct uart_8250_port {unsigned char lcr; int fcr; TYPE_1__ port; int gpios; scalar_t__ dma; int ier; } ;
struct omap8250_priv {int scr; int calc_latency; int latency; int qos_work; int efr; int xoff; int xon; } ;
struct ktermios {int c_cflag; int c_iflag; int * c_cc; } ;


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
 int FUNC_0 (int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 unsigned char VAR_28 ;
 unsigned char VAR_29 ;
 unsigned char VAR_30 ;
 unsigned char VAR_31 ;
 unsigned char VAR_32 ;
 unsigned char VAR_33 ;
 unsigned char VAR_34 ;
 unsigned char VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 size_t VAR_48 ;
 size_t VAR_49 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct uart_8250_port*) ;
 int FUNC_4 (struct uart_port*,unsigned int,struct omap8250_priv*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct ktermios*) ;
 int FUNC_12 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_13 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;
 int FUNC_14 (struct uart_port*,int,unsigned int) ;
 struct uart_8250_port* FUNC_15 (struct uart_port*) ;

__attribute__((used)) static void FUNC_16(struct uart_port *VAR_50,
      struct ktermios *VAR_51,
      struct ktermios *VAR_52)
{
 struct uart_8250_port *VAR_53 = FUNC_15(VAR_50);
 struct omap8250_priv *VAR_54 = VAR_53->port.private_data;
 unsigned char VAR_55 = 0;
 unsigned int VAR_56;

 switch (VAR_51->c_cflag & VAR_3) {
 case 131:
  VAR_55 = VAR_32;
  break;
 case 130:
  VAR_55 = VAR_33;
  break;
 case 129:
  VAR_55 = VAR_34;
  break;
 default:
 case 128:
  VAR_55 = VAR_35;
  break;
 }

 if (VAR_51->c_cflag & VAR_4)
  VAR_55 |= VAR_31;
 if (VAR_51->c_cflag & VAR_17)
  VAR_55 |= VAR_29;
 if (!(VAR_51->c_cflag & VAR_19))
  VAR_55 |= VAR_28;
 if (VAR_51->c_cflag & VAR_0)
  VAR_55 |= VAR_30;




 VAR_56 = FUNC_13(VAR_50, VAR_51, VAR_52,
      VAR_50->uartclk / 16 / VAR_22,
      VAR_50->uartclk / 13);
 FUNC_4(VAR_50, VAR_56, VAR_54);





 FUNC_5(VAR_50->dev);
 FUNC_9(&VAR_50->lock);




 FUNC_14(VAR_50, VAR_51->c_cflag, VAR_56);

 VAR_53->port.read_status_mask = VAR_39 | VAR_41 | VAR_37;
 if (VAR_51->c_iflag & VAR_7)
  VAR_53->port.read_status_mask |= VAR_38 | VAR_40;
 if (VAR_51->c_iflag & (VAR_5 | VAR_18))
  VAR_53->port.read_status_mask |= VAR_36;




 VAR_53->port.ignore_status_mask = 0;
 if (VAR_51->c_iflag & VAR_6)
  VAR_53->port.ignore_status_mask |= VAR_40 | VAR_38;
 if (VAR_51->c_iflag & VAR_5) {
  VAR_53->port.ignore_status_mask |= VAR_36;




  if (VAR_51->c_iflag & VAR_6)
   VAR_53->port.ignore_status_mask |= VAR_39;
 }




 if ((VAR_51->c_cflag & VAR_1) == 0)
  VAR_53->port.ignore_status_mask |= VAR_37;




 VAR_53->ier &= ~VAR_27;
 if (FUNC_1(&VAR_53->port, VAR_51->c_cflag))
  VAR_53->ier |= VAR_27;

 VAR_53->lcr = VAR_55;
 VAR_53->fcr = VAR_24;
 VAR_53->fcr |= FUNC_0(VAR_21) << VAR_10;
 VAR_53->fcr |= FUNC_0(VAR_20) << VAR_9;

 VAR_54->scr = VAR_13 | VAR_14 |
  VAR_15;

 if (VAR_53->dma)
  VAR_54->scr |= VAR_11 |
   VAR_12;

 VAR_54->xon = VAR_51->c_cc[VAR_48];
 VAR_54->xoff = VAR_51->c_cc[VAR_49];

 VAR_54->efr = 0;
 VAR_53->port.status &= ~(VAR_44 | VAR_45 | VAR_46);

 if (VAR_51->c_cflag & VAR_2 && VAR_53->port.flags & VAR_42 &&
     !FUNC_2(VAR_53->gpios, VAR_26) &&
     !FUNC_2(VAR_53->gpios, VAR_25)) {

  VAR_53->port.status |= VAR_44 | VAR_45;
  VAR_54->efr |= VAR_23;
 } else if (VAR_53->port.flags & VAR_43) {
  if (VAR_51->c_iflag & VAR_8) {
   VAR_53->port.status |= VAR_46;
   VAR_54->efr |= VAR_16;
  }
 }
 FUNC_3(VAR_53);

 FUNC_10(&VAR_53->port.lock);
 FUNC_6(VAR_50->dev);
 FUNC_7(VAR_50->dev);


 VAR_54->calc_latency = VAR_47 * 64 * 8 / VAR_56;
 VAR_54->latency = VAR_54->calc_latency;

 FUNC_8(&VAR_54->qos_work);


 if (FUNC_11(VAR_51))
  FUNC_12(VAR_51, VAR_56, VAR_56);
}
