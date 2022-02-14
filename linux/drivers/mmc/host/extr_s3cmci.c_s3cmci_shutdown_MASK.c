
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3cmci_host {scalar_t__ irq_cd; int clk; } ;
struct platform_device {int dummy; } ;
struct mmc_host {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,struct s3cmci_host*) ;
 struct s3cmci_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (struct mmc_host*) ;
 struct mmc_host* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct s3cmci_host*) ;
 int FUNC_6 (struct s3cmci_host*) ;

__attribute__((used)) static void FUNC_7(struct platform_device *VAR_0)
{
 struct mmc_host *VAR_1 = FUNC_4(VAR_0);
 struct s3cmci_host *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->irq_cd >= 0)
  FUNC_1(VAR_2->irq_cd, VAR_2);

 FUNC_6(VAR_2);
 FUNC_5(VAR_2);
 FUNC_3(VAR_1);
 FUNC_0(VAR_2->clk);
}
