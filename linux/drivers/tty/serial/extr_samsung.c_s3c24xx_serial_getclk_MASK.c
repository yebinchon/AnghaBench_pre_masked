
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct s3c24xx_uart_port {struct s3c24xx_uart_info* info; TYPE_2__ port; TYPE_1__* cfg; } ;
struct s3c24xx_uart_info {unsigned int def_clk_sel; unsigned int num_clks; scalar_t__ has_divslot; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {int clk_sel; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_0 ;
 struct clk* FUNC_1 (int ,char*) ;
 unsigned long FUNC_2 (struct clk*) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_4(struct s3c24xx_uart_port *VAR_1,
   unsigned int VAR_2, struct clk **VAR_3,
   unsigned int *VAR_4)
{
 struct s3c24xx_uart_info *VAR_5 = VAR_1->info;
 struct clk *VAR_6;
 unsigned long VAR_7;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12 = 0;
 char VAR_13[VAR_0];
 int VAR_14, VAR_15 = (1 << 30) - 1;

 VAR_11 = (VAR_1->cfg->clk_sel) ? VAR_1->cfg->clk_sel :
   VAR_1->info->def_clk_sel;
 for (VAR_8 = 0; VAR_8 < VAR_5->num_clks; VAR_8++) {
  if (!(VAR_11 & (1 << VAR_8)))
   continue;

  FUNC_3(VAR_13, "clk_uart_baud%d", VAR_8);
  VAR_6 = FUNC_1(VAR_1->port.dev, VAR_13);
  if (FUNC_0(VAR_6))
   continue;

  VAR_7 = FUNC_2(VAR_6);
  if (!VAR_7)
   continue;

  if (VAR_1->info->has_divslot) {
   unsigned long VAR_16 = VAR_7 / VAR_2;
   VAR_10 = VAR_16 / 16;
   VAR_9 = VAR_7 / VAR_16;
  } else {
   VAR_10 = (VAR_7 + (8 * VAR_2)) / (16 * VAR_2);
   VAR_9 = VAR_7 / (VAR_10 * 16);
  }
  VAR_10--;

  VAR_14 = VAR_2 - VAR_9;
  if (VAR_14 < 0)
   VAR_14 = -VAR_14;

  if (VAR_14 < VAR_15) {
   *VAR_3 = VAR_6;
   VAR_12 = VAR_10;
   *VAR_4 = VAR_8;
   VAR_15 = VAR_14;
  }
 }

 return VAR_12;
}
