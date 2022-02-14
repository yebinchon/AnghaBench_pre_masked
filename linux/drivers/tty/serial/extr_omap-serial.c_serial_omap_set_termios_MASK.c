
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int uartclk; } ;
struct TYPE_3__ {unsigned int fifosize; int read_status_mask; int ignore_status_mask; int status; int flags; int line; int dev; int lock; int mctrl; } ;
struct uart_omap_port {unsigned int calc_latency; unsigned int latency; unsigned int dll; unsigned int dlh; unsigned char mdr1; int fcr; unsigned char ier; unsigned char lcr; unsigned char scr; unsigned char efr; unsigned char mcr; int errata; TYPE_1__ port; int dev; int qos_work; } ;
struct ktermios {int c_cflag; int c_iflag; unsigned char* c_cc; } ;


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
 unsigned char VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned char VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 unsigned char VAR_26 ;
 int VAR_27 ;
 unsigned char VAR_28 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 unsigned char VAR_37 ;
 int VAR_38 ;
 unsigned char VAR_39 ;
 unsigned char VAR_40 ;
 unsigned char VAR_41 ;
 unsigned char VAR_42 ;
 unsigned char VAR_43 ;
 unsigned char VAR_44 ;
 unsigned char VAR_45 ;
 unsigned char VAR_46 ;
 unsigned char VAR_47 ;
 unsigned char VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 unsigned char VAR_56 ;
 unsigned char VAR_57 ;
 int VAR_58 ;
 unsigned char VAR_59 ;
 unsigned char VAR_60 ;
 unsigned char VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 unsigned int VAR_71 ;
 size_t VAR_72 ;
 size_t VAR_73 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 unsigned char FUNC_6 (struct uart_omap_port*,int ) ;
 int FUNC_7 (struct uart_port*,unsigned int) ;
 unsigned int FUNC_8 (struct uart_port*,unsigned int) ;
 int FUNC_9 (struct uart_omap_port*,unsigned char) ;
 int FUNC_10 (TYPE_1__*,int ) ;
 int FUNC_11 (struct uart_omap_port*,int ,unsigned char) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 struct uart_omap_port* FUNC_14 (struct uart_port*) ;
 unsigned int FUNC_15 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_16 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void
FUNC_17(struct uart_port *VAR_74, struct ktermios *VAR_75,
   struct ktermios *VAR_76)
{
 struct uart_omap_port *VAR_77 = FUNC_14(VAR_74);
 unsigned char VAR_78 = 0;
 unsigned long VAR_79 = 0;
 unsigned int VAR_80, VAR_81;

 switch (VAR_75->c_cflag & VAR_4) {
 case 131:
  VAR_78 = VAR_45;
  break;
 case 130:
  VAR_78 = VAR_46;
  break;
 case 129:
  VAR_78 = VAR_47;
  break;
 default:
 case 128:
  VAR_78 = VAR_48;
  break;
 }

 if (VAR_75->c_cflag & VAR_5)
  VAR_78 |= VAR_44;
 if (VAR_75->c_cflag & VAR_19)
  VAR_78 |= VAR_42;
 if (!(VAR_75->c_cflag & VAR_21))
  VAR_78 |= VAR_41;
 if (VAR_75->c_cflag & VAR_1)
  VAR_78 |= VAR_43;





 VAR_80 = FUNC_15(VAR_74, VAR_75, VAR_76, 0, VAR_74->uartclk/13);
 VAR_81 = FUNC_8(VAR_74, VAR_80);


 VAR_77->calc_latency = (VAR_71 * VAR_77->port.fifosize) / (VAR_80 / 8);
 VAR_77->latency = VAR_77->calc_latency;
 FUNC_5(&VAR_77->qos_work);

 VAR_77->dll = VAR_81 & 0xff;
 VAR_77->dlh = VAR_81 >> 8;
 VAR_77->mdr1 = VAR_61;

 VAR_77->fcr = VAR_34 | VAR_35 |
   VAR_33;





 FUNC_2(VAR_77->dev);
 FUNC_12(&VAR_77->port.lock, VAR_79);




 FUNC_16(VAR_74, VAR_75->c_cflag, VAR_80);

 VAR_77->port.read_status_mask = VAR_52 | VAR_54 | VAR_50;
 if (VAR_75->c_iflag & VAR_8)
  VAR_77->port.read_status_mask |= VAR_51 | VAR_53;
 if (VAR_75->c_iflag & (VAR_0 | VAR_20))
  VAR_77->port.read_status_mask |= VAR_49;




 VAR_77->port.ignore_status_mask = 0;
 if (VAR_75->c_iflag & VAR_7)
  VAR_77->port.ignore_status_mask |= VAR_53 | VAR_51;
 if (VAR_75->c_iflag & VAR_6) {
  VAR_77->port.ignore_status_mask |= VAR_49;




  if (VAR_75->c_iflag & VAR_7)
   VAR_77->port.ignore_status_mask |= VAR_52;
 }




 if ((VAR_75->c_cflag & VAR_2) == 0)
  VAR_77->port.ignore_status_mask |= VAR_50;




 VAR_77->ier &= ~VAR_37;
 if (FUNC_0(&VAR_77->port, VAR_75->c_cflag))
  VAR_77->ier |= VAR_37;
 FUNC_11(VAR_77, VAR_36, VAR_77->ier);
 FUNC_11(VAR_77, VAR_38, VAR_78);
 VAR_77->lcr = VAR_78;
 VAR_77->scr = 0;







 FUNC_11(VAR_77, VAR_38, VAR_39);
 FUNC_11(VAR_77, VAR_22, 0);
 FUNC_11(VAR_77, VAR_23, 0);
 FUNC_11(VAR_77, VAR_38, 0);

 FUNC_11(VAR_77, VAR_38, VAR_40);

 VAR_77->efr = FUNC_6(VAR_77, VAR_24) & ~VAR_26;
 VAR_77->efr &= ~VAR_28;
 FUNC_11(VAR_77, VAR_24, VAR_77->efr | VAR_26);

 FUNC_11(VAR_77, VAR_38, VAR_39);
 VAR_77->mcr = FUNC_6(VAR_77, VAR_55) & ~VAR_56;
 FUNC_11(VAR_77, VAR_55, VAR_77->mcr | VAR_56);


 VAR_77->scr |= VAR_14;
 VAR_77->fcr &= ~VAR_12;
 VAR_77->fcr &= ~VAR_13;
 VAR_77->fcr |= VAR_31 | VAR_32 |
  VAR_33;

 FUNC_11(VAR_77, VAR_30, VAR_77->fcr);
 FUNC_11(VAR_77, VAR_38, VAR_40);

 FUNC_11(VAR_77, VAR_62, VAR_77->scr);


 FUNC_11(VAR_77, VAR_38, VAR_39);
 FUNC_11(VAR_77, VAR_55, VAR_77->mcr);
 FUNC_11(VAR_77, VAR_38, VAR_40);
 FUNC_11(VAR_77, VAR_24, VAR_77->efr);
 FUNC_11(VAR_77, VAR_38, VAR_39);



 if (VAR_77->errata & VAR_29)
  FUNC_9(VAR_77, VAR_77->mdr1);
 else
  FUNC_11(VAR_77, VAR_58, VAR_77->mdr1);

 FUNC_11(VAR_77, VAR_38, VAR_40);
 FUNC_11(VAR_77, VAR_24, VAR_77->efr | VAR_26);

 FUNC_11(VAR_77, VAR_38, 0);
 FUNC_11(VAR_77, VAR_36, 0);
 FUNC_11(VAR_77, VAR_38, VAR_40);

 FUNC_11(VAR_77, VAR_22, VAR_77->dll);
 FUNC_11(VAR_77, VAR_23, VAR_77->dlh);

 FUNC_11(VAR_77, VAR_38, 0);
 FUNC_11(VAR_77, VAR_36, VAR_77->ier);
 FUNC_11(VAR_77, VAR_38, VAR_40);

 FUNC_11(VAR_77, VAR_24, VAR_77->efr);
 FUNC_11(VAR_77, VAR_38, VAR_78);

 if (!FUNC_7(VAR_74, VAR_80))
  VAR_77->mdr1 = VAR_59;
 else
  VAR_77->mdr1 = VAR_60;

 if (VAR_77->errata & VAR_29)
  FUNC_9(VAR_77, VAR_77->mdr1);
 else
  FUNC_11(VAR_77, VAR_58, VAR_77->mdr1);


 FUNC_11(VAR_77, VAR_38, VAR_40);


 FUNC_11(VAR_77, VAR_65, VAR_75->c_cc[VAR_72]);
 FUNC_11(VAR_77, VAR_64, VAR_75->c_cc[VAR_73]);


 FUNC_11(VAR_77, VAR_24, VAR_77->efr | VAR_26);
 FUNC_11(VAR_77, VAR_38, VAR_39);
 FUNC_11(VAR_77, VAR_55, VAR_77->mcr | VAR_56);

 FUNC_11(VAR_77, VAR_63, VAR_18);

 VAR_77->port.status &= ~(VAR_68 | VAR_69 | VAR_70);

 if (VAR_75->c_cflag & VAR_3 && VAR_77->port.flags & VAR_66) {

  VAR_77->port.status |= VAR_68 | VAR_69;
  VAR_77->efr |= VAR_25;
 } else {

  VAR_77->efr &= ~(VAR_25 | VAR_27);
 }

 if (VAR_77->port.flags & VAR_67) {

  VAR_77->efr &= VAR_15;






  if (VAR_75->c_iflag & VAR_11)
   VAR_77->efr |= VAR_16;






  if (VAR_75->c_iflag & VAR_10) {
   VAR_77->port.status |= VAR_70;
   VAR_77->efr |= VAR_17;
  }







  if (VAR_75->c_iflag & VAR_9)
   VAR_77->mcr |= VAR_57;
  else
   VAR_77->mcr &= ~VAR_57;
 }
 FUNC_11(VAR_77, VAR_55, VAR_77->mcr);
 FUNC_11(VAR_77, VAR_38, VAR_40);
 FUNC_11(VAR_77, VAR_24, VAR_77->efr);
 FUNC_11(VAR_77, VAR_38, VAR_77->lcr);

 FUNC_10(&VAR_77->port, VAR_77->port.mctrl);

 FUNC_13(&VAR_77->port.lock, VAR_79);
 FUNC_3(VAR_77->dev);
 FUNC_4(VAR_77->dev);
 FUNC_1(VAR_77->port.dev, "serial_omap_set_termios+%d\n", VAR_77->port.line);
}
