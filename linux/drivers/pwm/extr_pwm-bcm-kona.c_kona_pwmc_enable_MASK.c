
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dev; } ;
struct kona_pwmc {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct pwm_chip*,struct pwm_device*,int ,int ) ;
 int FUNC_4 (struct pwm_device*) ;
 int FUNC_5 (struct pwm_device*) ;
 struct kona_pwmc* FUNC_6 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_7(struct pwm_chip *VAR_0, struct pwm_device *VAR_1)
{
 struct kona_pwmc *VAR_2 = FUNC_6(VAR_0);
 int VAR_3;

 VAR_3 = FUNC_1(VAR_2->clk);
 if (VAR_3 < 0) {
  FUNC_2(VAR_0->dev, "failed to enable clock: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_0, VAR_1, FUNC_4(VAR_1),
          FUNC_5(VAR_1));
 if (VAR_3 < 0) {
  FUNC_0(VAR_2->clk);
  return VAR_3;
 }

 return 0;
}
