
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int flags; unsigned int custom_divisor; int read_status_mask; int ignore_status_mask; int lock; int status; } ;
struct s3c24xx_uart_port {unsigned int baudclk_rate; TYPE_1__* info; struct clk* baudclk; } ;
struct s3c2410_uartcfg {unsigned int ulcon; scalar_t__ has_fracval; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {scalar_t__ has_divslot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 unsigned int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 unsigned int VAR_30 ;
 int VAR_31 ;
 unsigned int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_2 (struct clk*) ;
 unsigned int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (char*,...) ;
 unsigned int FUNC_6 (struct uart_port*,int ) ;
 struct s3c2410_uartcfg* FUNC_7 (struct uart_port*) ;
 unsigned int FUNC_8 (struct s3c24xx_uart_port*,unsigned int,struct clk**,unsigned int*) ;
 int FUNC_9 (struct uart_port*,unsigned int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 struct s3c24xx_uart_port* FUNC_12 (struct uart_port*) ;
 unsigned int FUNC_13 (struct uart_port*,struct ktermios*,struct ktermios*,int ,int) ;
 int FUNC_14 (struct uart_port*,int,unsigned int) ;
 unsigned int* VAR_37 ;
 int FUNC_15 (struct uart_port*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_16(struct uart_port *VAR_38,
           struct ktermios *VAR_39,
           struct ktermios *VAR_40)
{
 struct s3c2410_uartcfg *VAR_41 = FUNC_7(VAR_38);
 struct s3c24xx_uart_port *VAR_42 = FUNC_12(VAR_38);
 struct clk *VAR_43 = FUNC_0(-VAR_6);
 unsigned long VAR_44;
 unsigned int VAR_45, VAR_46, VAR_47 = 0;
 unsigned int VAR_48;
 unsigned int VAR_49;
 unsigned int VAR_50 = 0;




 VAR_39->c_cflag &= ~(VAR_7 | VAR_1);
 VAR_39->c_cflag |= VAR_0;





 VAR_45 = FUNC_13(VAR_38, VAR_39, VAR_40, 0, 3000000);
 VAR_46 = FUNC_8(VAR_42, VAR_45, &VAR_43, &VAR_47);
 if (VAR_45 == 38400 && (VAR_38->flags & VAR_35) == VAR_34)
  VAR_46 = VAR_38->custom_divisor;
 if (FUNC_1(VAR_43))
  return;



 if (VAR_42->baudclk != VAR_43) {
  FUNC_4(VAR_43);

  FUNC_9(VAR_38, VAR_47);

  if (!FUNC_1(VAR_42->baudclk)) {
   FUNC_2(VAR_42->baudclk);
   VAR_42->baudclk = FUNC_0(-VAR_6);
  }

  VAR_42->baudclk = VAR_43;
  VAR_42->baudclk_rate = VAR_43 ? FUNC_3(VAR_43) : 0;
 }

 if (VAR_42->info->has_divslot) {
  unsigned int VAR_51 = VAR_42->baudclk_rate / VAR_45;

  if (VAR_41->has_fracval) {
   VAR_50 = (VAR_51 & 15);
   FUNC_5("fracval = %04x\n", VAR_50);
  } else {
   VAR_50 = VAR_37[VAR_51 & 15];
   FUNC_5("udivslot = %04x (div %d)\n", VAR_50, VAR_51 & 15);
  }
 }

 switch (VAR_39->c_cflag & VAR_4) {
 case 131:
  FUNC_5("config: 5bits/char\n");
  VAR_48 = VAR_14;
  break;
 case 130:
  FUNC_5("config: 6bits/char\n");
  VAR_48 = VAR_15;
  break;
 case 129:
  FUNC_5("config: 7bits/char\n");
  VAR_48 = VAR_16;
  break;
 case 128:
 default:
  FUNC_5("config: 8bits/char\n");
  VAR_48 = VAR_17;
  break;
 }


 VAR_48 |= (VAR_41->ulcon & VAR_18);

 if (VAR_39->c_cflag & VAR_5)
  VAR_48 |= VAR_22;

 if (VAR_39->c_cflag & VAR_11) {
  if (VAR_39->c_cflag & VAR_12)
   VAR_48 |= VAR_21;
  else
   VAR_48 |= VAR_19;
 } else {
  VAR_48 |= VAR_20;
 }

 FUNC_10(&VAR_38->lock, VAR_44);

 FUNC_5("setting ulcon to %08x, brddiv to %d, udivslot %08x\n",
     VAR_48, VAR_46, VAR_50);

 FUNC_15(VAR_38, VAR_29, VAR_48);
 FUNC_15(VAR_38, VAR_23, VAR_46);

 VAR_38->status &= ~VAR_36;

 VAR_49 = FUNC_6(VAR_38, VAR_31);
 if (VAR_39->c_cflag & VAR_3) {
  VAR_49 |= VAR_30;

  VAR_49 &= ~VAR_32;
  VAR_38->status = VAR_36;
 } else {
  VAR_49 &= ~VAR_30;
 }
 FUNC_15(VAR_38, VAR_31, VAR_49);

 if (VAR_42->info->has_divslot)
  FUNC_15(VAR_38, VAR_33, VAR_50);

 FUNC_5("uart: ulcon = 0x%08x, ucon = 0x%08x, ufcon = 0x%08x\n",
     FUNC_6(VAR_38, VAR_29),
     FUNC_6(VAR_38, VAR_24),
     FUNC_6(VAR_38, VAR_28));




 FUNC_14(VAR_38, VAR_39->c_cflag, VAR_45);




 VAR_38->read_status_mask = VAR_26;
 if (VAR_39->c_iflag & VAR_10)
  VAR_38->read_status_mask |= VAR_25 |
   VAR_27;



 VAR_38->ignore_status_mask = 0;
 if (VAR_39->c_iflag & VAR_9)
  VAR_38->ignore_status_mask |= VAR_26;
 if (VAR_39->c_iflag & VAR_8 && VAR_39->c_iflag & VAR_9)
  VAR_38->ignore_status_mask |= VAR_25;




 if ((VAR_39->c_cflag & VAR_2) == 0)
  VAR_38->ignore_status_mask |= VAR_13;

 FUNC_11(&VAR_38->lock, VAR_44);
}
