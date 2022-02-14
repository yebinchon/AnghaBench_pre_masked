
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int owner; int * ops; struct device* dev; } ;
struct mmc_pwrseq_sd8787 {TYPE_1__ pwrseq; void* reset_gpio; void* pwrdn_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 void* FUNC_2 (struct device*,char*,int ) ;
 struct mmc_pwrseq_sd8787* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_5 (struct platform_device*,struct mmc_pwrseq_sd8787*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct mmc_pwrseq_sd8787 *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;

 VAR_6 = FUNC_3(VAR_7, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->pwrdn_gpio = FUNC_2(VAR_7, "powerdown", VAR_2);
 if (FUNC_0(VAR_6->pwrdn_gpio))
  return FUNC_1(VAR_6->pwrdn_gpio);

 VAR_6->reset_gpio = FUNC_2(VAR_7, "reset", VAR_2);
 if (FUNC_0(VAR_6->reset_gpio))
  return FUNC_1(VAR_6->reset_gpio);

 VAR_6->pwrseq.dev = VAR_7;
 VAR_6->pwrseq.ops = &VAR_4;
 VAR_6->pwrseq.owner = VAR_3;
 FUNC_5(VAR_5, VAR_6);

 return FUNC_4(&VAR_6->pwrseq);
}
