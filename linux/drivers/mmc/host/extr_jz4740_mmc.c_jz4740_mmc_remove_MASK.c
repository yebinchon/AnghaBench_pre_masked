
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct jz4740_mmc_host {int mmc; scalar_t__ use_dma; int irq; int timeout_timer; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct jz4740_mmc_host*) ;
 int FUNC_2 (struct jz4740_mmc_host*) ;
 int FUNC_3 (struct jz4740_mmc_host*) ;
 int FUNC_4 (struct jz4740_mmc_host*,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct jz4740_mmc_host* FUNC_7 (struct platform_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct jz4740_mmc_host *VAR_1 = FUNC_7(VAR_0);

 FUNC_0(&VAR_1->timeout_timer);
 FUNC_4(VAR_1, 0xff, 0);
 FUNC_3(VAR_1);

 FUNC_6(VAR_1->mmc);

 FUNC_1(VAR_1->irq, VAR_1);

 if (VAR_1->use_dma)
  FUNC_2(VAR_1);

 FUNC_5(VAR_1->mmc);

 return 0;
}
