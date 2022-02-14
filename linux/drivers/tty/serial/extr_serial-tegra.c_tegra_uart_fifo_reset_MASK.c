
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u8 ;
struct tegra_uart_port {unsigned long fcr_shadow; scalar_t__ rts_active; TYPE_1__* cdata; } ;
struct TYPE_2__ {scalar_t__ fifo_mode_enable_status; scalar_t__ allow_txfifo_reset_fifo_mode; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tegra_uart_port*,int) ;
 unsigned int FUNC_1 (struct tegra_uart_port*,int ) ;
 int FUNC_2 (struct tegra_uart_port*,int) ;
 int FUNC_3 (struct tegra_uart_port*) ;
 int FUNC_4 (struct tegra_uart_port*,unsigned long,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct tegra_uart_port *VAR_8, u8 VAR_9)
{
 unsigned long VAR_10 = VAR_8->fcr_shadow;
 unsigned int VAR_11, VAR_12 = 10000;

 if (VAR_8->rts_active)
  FUNC_0(VAR_8, 0);

 if (VAR_8->cdata->allow_txfifo_reset_fifo_mode) {
  VAR_10 |= VAR_9 & (VAR_1 | VAR_2);
  FUNC_4(VAR_8, VAR_10, VAR_0);
 } else {
  VAR_10 &= ~VAR_3;
  FUNC_4(VAR_8, VAR_10, VAR_0);
  FUNC_5(60);
  VAR_10 |= VAR_9 & (VAR_1 | VAR_2);
  FUNC_4(VAR_8, VAR_10, VAR_0);
  VAR_10 |= VAR_3;
  FUNC_4(VAR_8, VAR_10, VAR_0);
  if (VAR_8->cdata->fifo_mode_enable_status)
   FUNC_3(VAR_8);
 }


 FUNC_1(VAR_8, VAR_7);






 FUNC_2(VAR_8, 32);

 do {
  VAR_11 = FUNC_1(VAR_8, VAR_4);
  if ((VAR_11 | VAR_6) && !(VAR_11 & VAR_5))
   break;
  FUNC_5(1);
 } while (--VAR_12);

 if (VAR_8->rts_active)
  FUNC_0(VAR_8, 1);
}
