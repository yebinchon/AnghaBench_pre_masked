
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_4__ {int owner; struct device* dev; int * ops; } ;
struct TYPE_3__ {int priority; int notifier_call; } ;
struct mmc_pwrseq_emmc {TYPE_2__ pwrseq; TYPE_1__ reset_nb; int reset_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*,int ) ;
 struct mmc_pwrseq_emmc* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct platform_device*,struct mmc_pwrseq_emmc*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_6)
{
 struct mmc_pwrseq_emmc *VAR_7;
 struct device *VAR_8 = &VAR_6->dev;

 VAR_7 = FUNC_4(VAR_8, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->reset_gpio = FUNC_3(VAR_8, "reset", VAR_2);
 if (FUNC_0(VAR_7->reset_gpio))
  return FUNC_1(VAR_7->reset_gpio);

 if (!FUNC_5(VAR_7->reset_gpio)) {





  VAR_7->reset_nb.notifier_call = VAR_5;
  VAR_7->reset_nb.priority = 255;
  FUNC_8(&VAR_7->reset_nb);
 } else {
  FUNC_2(VAR_8, "EMMC reset pin tied to a sleepy GPIO driver; reset on emergency-reboot disabled\n");
 }

 VAR_7->pwrseq.ops = &VAR_4;
 VAR_7->pwrseq.dev = VAR_8;
 VAR_7->pwrseq.owner = VAR_3;
 FUNC_7(VAR_6, VAR_7);

 return FUNC_6(&VAR_7->pwrseq);
}
