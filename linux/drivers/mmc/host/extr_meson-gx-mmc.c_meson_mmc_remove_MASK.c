
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct meson_host {int mmc; int core_clk; int mmc_clk; int bounce_dma_addr; int bounce_buf; int bounce_buf_size; int dev; int dram_access_quirk; int descs_dma_addr; int descs; int irq; scalar_t__ regs; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 struct meson_host* FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,struct meson_host*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 struct meson_host *VAR_3 = FUNC_1(&VAR_2->dev);

 FUNC_5(VAR_3->mmc);


 FUNC_6(0, VAR_3->regs + VAR_1);
 FUNC_3(VAR_3->irq, VAR_3);

 FUNC_2(VAR_3->dev, VAR_0,
     VAR_3->descs, VAR_3->descs_dma_addr);

 if (!VAR_3->dram_access_quirk)
  FUNC_2(VAR_3->dev, VAR_3->bounce_buf_size,
      VAR_3->bounce_buf, VAR_3->bounce_dma_addr);

 FUNC_0(VAR_3->mmc_clk);
 FUNC_0(VAR_3->core_clk);

 FUNC_4(VAR_3->mmc);
 return 0;
}
