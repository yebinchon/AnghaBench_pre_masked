
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int lock; int dev; } ;
struct tegra_uart_port {unsigned int current_baud; unsigned long required_rate; unsigned long lcr_shadow; TYPE_2__ uport; int uart_clk; void* configured_rate; scalar_t__ n_adjustable_baud_rates; TYPE_1__* cdata; } ;
struct TYPE_3__ {scalar_t__ support_clk_src_div; } ;


 unsigned int FUNC_0 (unsigned long,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,char*,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct tegra_uart_port*) ;
 unsigned long FUNC_7 (struct tegra_uart_port*,unsigned int,unsigned long) ;
 int FUNC_8 (struct tegra_uart_port*,int ) ;
 int FUNC_9 (struct tegra_uart_port*,int) ;
 int FUNC_10 (struct tegra_uart_port*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_11(struct tegra_uart_port *VAR_5, unsigned int VAR_6)
{
 unsigned long VAR_7;
 unsigned int VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 if (VAR_5->current_baud == VAR_6)
  return 0;

 if (VAR_5->cdata->support_clk_src_div) {
  VAR_7 = VAR_6 * 16;
  VAR_5->required_rate = VAR_7;

  if (VAR_5->n_adjustable_baud_rates)
   VAR_7 = FUNC_7(VAR_5, VAR_6, VAR_7);

  VAR_11 = FUNC_2(VAR_5->uart_clk, VAR_7);
  if (VAR_11 < 0) {
   FUNC_3(VAR_5->uport.dev,
    "clk_set_rate() failed for rate %lu\n", VAR_7);
   return VAR_11;
  }
  VAR_5->configured_rate = FUNC_1(VAR_5->uart_clk);
  VAR_8 = 1;
  VAR_11 = FUNC_6(VAR_5);
  if (VAR_11 < 0)
   return VAR_11;
 } else {
  VAR_7 = FUNC_1(VAR_5->uart_clk);
  VAR_8 = FUNC_0(VAR_7, VAR_6 * 16);
 }

 FUNC_4(&VAR_5->uport.lock, VAR_10);
 VAR_9 = VAR_5->lcr_shadow;
 VAR_9 |= VAR_2;
 FUNC_10(VAR_5, VAR_9, VAR_1);

 FUNC_10(VAR_5, VAR_8 & 0xFF, VAR_4);
 FUNC_10(VAR_5, ((VAR_8 >> 8) & 0xFF), VAR_0);

 VAR_9 &= ~VAR_2;
 FUNC_10(VAR_5, VAR_9, VAR_1);


 FUNC_8(VAR_5, VAR_3);
 FUNC_5(&VAR_5->uport.lock, VAR_10);

 VAR_5->current_baud = VAR_6;


 FUNC_9(VAR_5, 2);
 return 0;
}
