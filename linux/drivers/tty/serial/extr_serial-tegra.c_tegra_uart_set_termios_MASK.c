
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int lock; } ;
struct TYPE_4__ {int ignore_status_mask; int dev; } ;
struct tegra_uart_port {unsigned int ier_shadow; unsigned int lcr_shadow; int symb_bit; unsigned int mcr_shadow; TYPE_2__ uport; scalar_t__ rts_active; TYPE_1__* cdata; int uart_clk; } ;
struct ktermios {int c_cflag; int c_iflag; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {scalar_t__ support_clk_src_div; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 struct clk* FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct clk*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct tegra_uart_port*,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct tegra_uart_port*,unsigned int) ;
 int FUNC_7 (struct tegra_uart_port*,int ) ;
 int FUNC_8 (struct tegra_uart_port*,unsigned int,int ) ;
 struct tegra_uart_port* FUNC_9 (struct uart_port*) ;
 scalar_t__ FUNC_10 (struct ktermios*) ;
 int FUNC_11 (struct ktermios*,unsigned int,unsigned int) ;
 unsigned int FUNC_12 (struct uart_port*,struct ktermios*,struct ktermios*,unsigned long,unsigned long) ;
 int FUNC_13 (struct uart_port*,int,unsigned int) ;

__attribute__((used)) static void FUNC_14(struct uart_port *VAR_24,
  struct ktermios *VAR_25, struct ktermios *VAR_26)
{
 struct tegra_uart_port *VAR_27 = FUNC_9(VAR_24);
 unsigned int VAR_28;
 unsigned long VAR_29;
 unsigned int VAR_30;
 int VAR_31 = 1;
 struct clk *VAR_32 = FUNC_0(VAR_27->uart_clk);
 unsigned long VAR_33 = FUNC_1(VAR_32);
 int VAR_34 = (VAR_27->cdata->support_clk_src_div) ? 0x7FFF : 0xFFFF;
 int VAR_35;

 VAR_34 *= 16;
 FUNC_4(&VAR_24->lock, VAR_29);


 if (VAR_27->rts_active)
  FUNC_3(VAR_27, 0);


 FUNC_8(VAR_27, VAR_27->ier_shadow | VAR_11, VAR_10);
 FUNC_7(VAR_27, VAR_10);
 FUNC_8(VAR_27, 0, VAR_10);
 FUNC_7(VAR_27, VAR_10);


 VAR_30 = VAR_27->lcr_shadow;
 VAR_30 &= ~VAR_14;


 VAR_25->c_cflag &= ~VAR_0;

 if ((VAR_25->c_cflag & VAR_6) == VAR_6) {
  VAR_31++;
  if (VAR_25->c_cflag & VAR_7) {
   VAR_30 |= VAR_14;
   VAR_30 &= ~VAR_13;
   VAR_30 &= ~VAR_15;
  } else {
   VAR_30 |= VAR_14;
   VAR_30 |= VAR_13;
   VAR_30 &= ~VAR_15;
  }
 }

 VAR_30 &= ~VAR_20;
 switch (VAR_25->c_cflag & VAR_3) {
 case 130:
  VAR_30 |= VAR_17;
  VAR_31 += 5;
  break;
 case 129:
  VAR_30 |= VAR_18;
  VAR_31 += 6;
  break;
 case 128:
  VAR_30 |= VAR_19;
  VAR_31 += 7;
  break;
 default:
  VAR_30 |= VAR_20;
  VAR_31 += 8;
  break;
 }


 if (VAR_25->c_cflag & VAR_4) {
  VAR_30 |= VAR_16;
  VAR_31 += 2;
 } else {
  VAR_30 &= ~VAR_16;
  VAR_31++;
 }

 FUNC_8(VAR_27, VAR_30, VAR_12);
 VAR_27->lcr_shadow = VAR_30;
 VAR_27->symb_bit = VAR_31;


 VAR_28 = FUNC_12(VAR_24, VAR_25, VAR_26,
   VAR_33/VAR_34,
   VAR_33/16);
 FUNC_5(&VAR_24->lock, VAR_29);
 VAR_35 = FUNC_6(VAR_27, VAR_28);
 if (VAR_35 < 0) {
  FUNC_2(VAR_27->uport.dev, "Failed to set baud rate\n");
  return;
 }
 if (FUNC_10(VAR_25))
  FUNC_11(VAR_25, VAR_28, VAR_28);
 FUNC_4(&VAR_24->lock, VAR_29);


 if (VAR_25->c_cflag & VAR_2) {
  VAR_27->mcr_shadow |= VAR_8;
  VAR_27->mcr_shadow &= ~VAR_9;
  FUNC_8(VAR_27, VAR_27->mcr_shadow, VAR_23);

  if (VAR_27->rts_active)
   FUNC_3(VAR_27, 1);
 } else {
  VAR_27->mcr_shadow &= ~VAR_8;
  VAR_27->mcr_shadow &= ~VAR_9;
  FUNC_8(VAR_27, VAR_27->mcr_shadow, VAR_23);
 }


 FUNC_13(VAR_24, VAR_25->c_cflag, VAR_28);


 FUNC_7(VAR_27, VAR_10);


 FUNC_8(VAR_27, VAR_27->ier_shadow, VAR_10);
 FUNC_7(VAR_27, VAR_10);

 VAR_27->uport.ignore_status_mask = 0;

 if ((VAR_25->c_cflag & VAR_1) == 0)
  VAR_27->uport.ignore_status_mask |= VAR_22;
 if (VAR_25->c_iflag & VAR_5)
  VAR_27->uport.ignore_status_mask |= VAR_21;

 FUNC_5(&VAR_24->lock, VAR_29);
}
