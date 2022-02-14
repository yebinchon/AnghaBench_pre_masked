
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct mmc_pwrseq_emmc {int pwrseq; int reset_nb; } ;


 int FUNC_0 (int *) ;
 struct mmc_pwrseq_emmc* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct mmc_pwrseq_emmc *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->reset_nb);
 FUNC_0(&VAR_1->pwrseq);

 return 0;
}
