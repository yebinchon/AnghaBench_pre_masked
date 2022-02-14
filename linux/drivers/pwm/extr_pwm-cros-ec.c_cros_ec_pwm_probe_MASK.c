
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_chip {int of_pwm_n_cells; int base; int npwm; int of_xlate; int * ops; struct device* dev; } ;
struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct cros_ec_pwm_device {struct cros_ec_device* ec; struct pwm_chip chip; } ;
struct cros_ec_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cros_ec_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct cros_ec_device* FUNC_3 (int ) ;
 struct cros_ec_pwm_device* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct platform_device*,struct cros_ec_pwm_device*) ;
 int FUNC_6 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct cros_ec_device *VAR_6 = FUNC_3(VAR_5->dev.parent);
 struct device *VAR_7 = &VAR_5->dev;
 struct cros_ec_pwm_device *VAR_8;
 struct pwm_chip *VAR_9;
 int VAR_10;

 if (!VAR_6) {
  FUNC_2(VAR_7, "no parent EC device\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_4(VAR_7, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;
 VAR_9 = &VAR_8->chip;
 VAR_8->ec = VAR_6;


 VAR_9->dev = VAR_7;
 VAR_9->ops = &VAR_3;
 VAR_9->of_xlate = VAR_4;
 VAR_9->of_pwm_n_cells = 1;
 VAR_9->base = -1;
 VAR_10 = FUNC_0(VAR_6);
 if (VAR_10 < 0) {
  FUNC_2(VAR_7, "Couldn't find PWMs: %d\n", VAR_10);
  return VAR_10;
 }
 VAR_9->npwm = VAR_10;
 FUNC_1(VAR_7, "Probed %u PWMs\n", VAR_9->npwm);

 VAR_10 = FUNC_6(VAR_9);
 if (VAR_10 < 0) {
  FUNC_2(VAR_7, "cannot register PWM: %d\n", VAR_10);
  return VAR_10;
 }

 FUNC_5(VAR_5, VAR_8);

 return VAR_10;
}
