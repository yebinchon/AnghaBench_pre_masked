
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s3cmci_host {TYPE_2__* mem; int base; int irq; int dma; int pio_tasklet; int clk; } ;
struct TYPE_3__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mmc_host {int dummy; } ;
struct TYPE_4__ {int start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct s3cmci_host*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct mmc_host*) ;
 struct s3cmci_host* FUNC_7 (struct mmc_host*) ;
 struct mmc_host* FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (struct s3cmci_host*) ;
 int FUNC_12 (struct platform_device*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_0)
{
 struct mmc_host *VAR_1 = FUNC_8(VAR_0);
 struct s3cmci_host *VAR_2 = FUNC_7(VAR_1);
 int VAR_3;

 FUNC_12(VAR_0);

 FUNC_1(VAR_2->clk);

 FUNC_13(&VAR_2->pio_tasklet);

 if (FUNC_11(VAR_2))
  FUNC_2(VAR_2->dma);

 FUNC_3(VAR_2->irq, VAR_2);

 if (!VAR_0->dev.of_node)
  for (VAR_3 = FUNC_0(5); VAR_3 <= FUNC_0(10); VAR_3++)
   FUNC_4(VAR_3);

 FUNC_5(VAR_2->base);
 FUNC_9(VAR_2->mem->start, FUNC_10(VAR_2->mem));

 FUNC_6(VAR_1);
 return 0;
}
