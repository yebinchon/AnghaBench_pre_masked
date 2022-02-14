
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_3__ {int base; unsigned int npwm; int * ops; int * dev; } ;
struct pwm_mediatek_chip {TYPE_1__ chip; TYPE_2__* soc; void** clk_pwms; void* clk_main; void* clk_top; void* regs; } ;
struct platform_device {int dev; } ;
typedef int name ;
struct TYPE_4__ {unsigned int num_pwms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,char*,...) ;
 void* FUNC_3 (int *,char*) ;
 void* FUNC_4 (int *,struct resource*) ;
 void** FUNC_5 (int *,unsigned int,int,int ) ;
 struct pwm_mediatek_chip* FUNC_6 (int *,int,int ) ;
 TYPE_2__* FUNC_7 (int *) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct pwm_mediatek_chip*) ;
 int VAR_3 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*,int,char*,unsigned int) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_4)
{
 struct pwm_mediatek_chip *VAR_5;
 struct resource *VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_5 = FUNC_6(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->soc = FUNC_7(&VAR_4->dev);

 VAR_6 = FUNC_8(VAR_4, VAR_2, 0);
 VAR_5->regs = FUNC_4(&VAR_4->dev, VAR_6);
 if (FUNC_0(VAR_5->regs))
  return FUNC_1(VAR_5->regs);

 VAR_5->clk_pwms = FUNC_5(&VAR_4->dev, VAR_5->soc->num_pwms,
        sizeof(*VAR_5->clk_pwms), VAR_1);
 if (!VAR_5->clk_pwms)
  return -VAR_0;

 VAR_5->clk_top = FUNC_3(&VAR_4->dev, "top");
 if (FUNC_0(VAR_5->clk_top)) {
  FUNC_2(&VAR_4->dev, "clock: top fail: %ld\n",
   FUNC_1(VAR_5->clk_top));
  return FUNC_1(VAR_5->clk_top);
 }

 VAR_5->clk_main = FUNC_3(&VAR_4->dev, "main");
 if (FUNC_0(VAR_5->clk_main)) {
  FUNC_2(&VAR_4->dev, "clock: main fail: %ld\n",
   FUNC_1(VAR_5->clk_main));
  return FUNC_1(VAR_5->clk_main);
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->soc->num_pwms; VAR_7++) {
  char VAR_9[8];

  FUNC_11(VAR_9, sizeof(VAR_9), "pwm%d", VAR_7 + 1);

  VAR_5->clk_pwms[VAR_7] = FUNC_3(&VAR_4->dev, VAR_9);
  if (FUNC_0(VAR_5->clk_pwms[VAR_7])) {
   FUNC_2(&VAR_4->dev, "clock: %s fail: %ld\n",
    VAR_9, FUNC_1(VAR_5->clk_pwms[VAR_7]));
   return FUNC_1(VAR_5->clk_pwms[VAR_7]);
  }
 }

 FUNC_9(VAR_4, VAR_5);

 VAR_5->chip.dev = &VAR_4->dev;
 VAR_5->chip.ops = &VAR_3;
 VAR_5->chip.base = -1;
 VAR_5->chip.npwm = VAR_5->soc->num_pwms;

 VAR_8 = FUNC_10(&VAR_5->chip);
 if (VAR_8 < 0) {
  FUNC_2(&VAR_4->dev, "pwmchip_add() failed: %d\n", VAR_8);
  return VAR_8;
 }

 return 0;
}
