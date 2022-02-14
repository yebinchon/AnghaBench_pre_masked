
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct marvell_nfc {int core_clk; int reg_clk; int dma_chan; scalar_t__ use_dma; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct marvell_nfc*) ;
 struct marvell_nfc* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct marvell_nfc *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(VAR_1);

 if (VAR_1->use_dma) {
  FUNC_2(VAR_1->dma_chan);
  FUNC_1(VAR_1->dma_chan);
 }

 FUNC_0(VAR_1->reg_clk);
 FUNC_0(VAR_1->core_clk);

 return 0;
}
