
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct platform_device {int dummy; } ;
struct lpc32xx_nand_host {int clk; int io_base; int dma_chan; int nand_chip; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct lpc32xx_nand_host*) ;
 int FUNC_4 (int *) ;
 struct lpc32xx_nand_host* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 uint32_t VAR_2;
 struct lpc32xx_nand_host *VAR_3 = FUNC_5(VAR_1);

 FUNC_4(&VAR_3->nand_chip);
 FUNC_2(VAR_3->dma_chan);


 VAR_2 = FUNC_6(FUNC_0(VAR_3->io_base));
 VAR_2 &= ~VAR_0;
 FUNC_7(VAR_2, FUNC_0(VAR_3->io_base));

 FUNC_1(VAR_3->clk);
 FUNC_3(VAR_3);

 return 0;
}
