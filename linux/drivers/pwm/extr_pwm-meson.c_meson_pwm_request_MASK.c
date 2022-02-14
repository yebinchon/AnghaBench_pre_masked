
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {size_t hwpwm; } ;
struct pwm_chip {struct device* dev; } ;
struct meson_pwm_channel {scalar_t__ clk; scalar_t__ clk_parent; } ;
struct meson_pwm {struct meson_pwm_channel* channels; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct device*,char*,int ,int,...) ;
 struct meson_pwm_channel* FUNC_4 (struct pwm_device*) ;
 int FUNC_5 (struct pwm_device*,struct meson_pwm_channel*) ;
 struct meson_pwm* FUNC_6 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_7(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct meson_pwm *VAR_2 = FUNC_6(VAR_0);
 struct meson_pwm_channel *VAR_3;
 struct device *VAR_4 = VAR_0->dev;
 int VAR_5;

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3)
  return 0;

 VAR_3 = &VAR_2->channels[VAR_1->hwpwm];

 if (VAR_3->clk_parent) {
  VAR_5 = FUNC_2(VAR_3->clk, VAR_3->clk_parent);
  if (VAR_5 < 0) {
   FUNC_3(VAR_4, "failed to set parent %s for %s: %d\n",
    FUNC_0(VAR_3->clk_parent),
    FUNC_0(VAR_3->clk), VAR_5);
    return VAR_5;
  }
 }

 VAR_5 = FUNC_1(VAR_3->clk);
 if (VAR_5 < 0) {
  FUNC_3(VAR_4, "failed to enable clock %s: %d\n",
   FUNC_0(VAR_3->clk), VAR_5);
  return VAR_5;
 }

 return FUNC_5(VAR_1, VAR_3);
}
