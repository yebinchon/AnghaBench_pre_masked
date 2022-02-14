
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imxfb_info {int enabled; int map_dma; scalar_t__ regs; int clk_ipg; int clk_ahb; int clk_per; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct imxfb_info *VAR_7)
{
 int VAR_8;

 if (VAR_7->enabled)
  return 0;

 FUNC_2("Enabling LCD controller\n");

 FUNC_4(VAR_7->map_dma, VAR_7->regs + VAR_5);


 FUNC_4(0x00000000, VAR_7->regs + VAR_3);


 FUNC_4(FUNC_3(VAR_7->regs + VAR_2) & ~(VAR_0 | VAR_1),
  VAR_7->regs + VAR_2);





 FUNC_4(VAR_6, VAR_7->regs + VAR_4);

 VAR_8 = FUNC_1(VAR_7->clk_ipg);
 if (VAR_8)
  goto err_enable_ipg;

 VAR_8 = FUNC_1(VAR_7->clk_ahb);
 if (VAR_8)
  goto err_enable_ahb;

 VAR_8 = FUNC_1(VAR_7->clk_per);
 if (VAR_8)
  goto err_enable_per;

 VAR_7->enabled = 1;
 return 0;

err_enable_per:
 FUNC_0(VAR_7->clk_ahb);
err_enable_ahb:
 FUNC_0(VAR_7->clk_ipg);
err_enable_ipg:
 FUNC_4(0, VAR_7->regs + VAR_4);

 return VAR_8;
}
