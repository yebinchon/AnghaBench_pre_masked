
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int owner; int * ops; struct device* dev; } ;
struct mmc_pwrseq_simple {TYPE_1__ pwrseq; int power_off_delay_us; int post_power_on_delay_ms; int reset_gpios; int ext_clk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*,int *) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*,int ) ;
 struct mmc_pwrseq_simple* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_7 (struct platform_device*,struct mmc_pwrseq_simple*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_7)
{
 struct mmc_pwrseq_simple *VAR_8;
 struct device *VAR_9 = &VAR_7->dev;

 VAR_8 = FUNC_5(VAR_9, sizeof(*VAR_8), VAR_3);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->ext_clk = FUNC_3(VAR_9, "ext_clock");
 if (FUNC_0(VAR_8->ext_clk) && FUNC_1(VAR_8->ext_clk) != -VAR_0)
  return FUNC_1(VAR_8->ext_clk);

 VAR_8->reset_gpios = FUNC_4(VAR_9, "reset",
       VAR_4);
 if (FUNC_0(VAR_8->reset_gpios) &&
     FUNC_1(VAR_8->reset_gpios) != -VAR_0 &&
     FUNC_1(VAR_8->reset_gpios) != -VAR_2) {
  return FUNC_1(VAR_8->reset_gpios);
 }

 FUNC_2(VAR_9, "post-power-on-delay-ms",
     &VAR_8->post_power_on_delay_ms);
 FUNC_2(VAR_9, "power-off-delay-us",
     &VAR_8->power_off_delay_us);

 VAR_8->pwrseq.dev = VAR_9;
 VAR_8->pwrseq.ops = &VAR_6;
 VAR_8->pwrseq.owner = VAR_5;
 FUNC_7(VAR_7, VAR_8);

 return FUNC_6(&VAR_8->pwrseq);
}
