
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sprd_pwm_chn {int clk_rate; TYPE_1__* clks; } ;
struct sprd_pwm_chip {int num_pwms; int dev; struct sprd_pwm_chn* chn; } ;
struct clk {int dummy; } ;
struct TYPE_2__ {struct clk* clk; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct clk*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int,TYPE_1__*) ;
 int * VAR_6 ;

__attribute__((used)) static int FUNC_3(struct sprd_pwm_chip *VAR_7)
{
 struct clk *VAR_8;
 int VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
  struct sprd_pwm_chn *VAR_11 = &VAR_7->chn[VAR_10];
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_3; ++VAR_12)
   VAR_11->clks[VAR_12].id =
    VAR_6[VAR_10 * VAR_3 + VAR_12];

  VAR_9 = FUNC_2(VAR_7->dev, VAR_3,
     VAR_11->clks);
  if (VAR_9) {
   if (VAR_9 == -VAR_1)
    break;

   if (VAR_9 != -VAR_2)
    FUNC_1(VAR_7->dev,
     "failed to get channel clocks\n");

   return VAR_9;
  }

  VAR_8 = VAR_11->clks[VAR_5].clk;
  VAR_11->clk_rate = FUNC_0(VAR_8);
 }

 if (!VAR_10) {
  FUNC_1(VAR_7->dev, "no available PWM channels\n");
  return -VAR_0;
 }

 VAR_7->num_pwms = VAR_10;

 return 0;
}
