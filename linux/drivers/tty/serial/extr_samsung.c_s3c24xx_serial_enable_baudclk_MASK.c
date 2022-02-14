
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct device* dev; } ;
struct s3c24xx_uart_port {TYPE_2__ port; int baudclk_rate; struct clk* baudclk; TYPE_1__* cfg; struct s3c24xx_uart_info* info; } ;
struct s3c24xx_uart_info {unsigned int def_clk_sel; int num_clks; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {int clk_sel; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_1 ;
 struct clk* FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (char*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct s3c24xx_uart_port *VAR_2)
{
 struct device *VAR_3 = VAR_2->port.dev;
 struct s3c24xx_uart_info *VAR_4 = VAR_2->info;
 char VAR_5[VAR_1];
 unsigned int VAR_6;
 struct clk *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_6 = VAR_2->cfg->clk_sel ? : VAR_4->def_clk_sel;
 for (VAR_8 = 0; VAR_8 < VAR_4->num_clks; VAR_8++) {
  if (!(VAR_6 & (1 << VAR_8)))
   continue;

  FUNC_6(VAR_5, "clk_uart_baud%d", VAR_8);
  VAR_7 = FUNC_1(VAR_3, VAR_5);
  if (FUNC_0(VAR_7))
   continue;

  VAR_9 = FUNC_3(VAR_7);
  if (VAR_9) {
   FUNC_4(VAR_7);
   continue;
  }

  VAR_2->baudclk = VAR_7;
  VAR_2->baudclk_rate = FUNC_2(VAR_7);
  FUNC_5(&VAR_2->port, VAR_8);

  return 0;
 }

 return -VAR_0;
}
