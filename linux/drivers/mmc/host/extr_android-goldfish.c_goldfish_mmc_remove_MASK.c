
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct mmc_host {int dummy; } ;
struct goldfish_mmc_host {int reg_base; int phys_base; int virt_base; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int ,struct goldfish_mmc_host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mmc_host*) ;
 struct mmc_host* FUNC_5 (struct goldfish_mmc_host*) ;
 int FUNC_6 (struct mmc_host*) ;
 struct goldfish_mmc_host* FUNC_7 (struct platform_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_1)
{
 struct goldfish_mmc_host *VAR_2 = FUNC_7(VAR_1);
 struct mmc_host *VAR_3 = FUNC_5(VAR_2);

 FUNC_0(VAR_2 == ((void*)0));

 FUNC_6(VAR_3);
 FUNC_2(VAR_2->irq, VAR_2);
 FUNC_1(&VAR_1->dev, VAR_0, VAR_2->virt_base, VAR_2->phys_base);
 FUNC_3(VAR_2->reg_base);
 FUNC_4(VAR_3);
 return 0;
}
