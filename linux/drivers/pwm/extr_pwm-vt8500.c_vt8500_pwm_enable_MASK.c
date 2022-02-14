
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vt8500_chip {scalar_t__ base; int clk; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct vt8500_chip*,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 struct vt8500_chip* FUNC_5 (struct pwm_chip*) ;
 int FUNC_6 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct pwm_chip *VAR_2, struct pwm_device *VAR_3)
{
 struct vt8500_chip *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;
 u32 VAR_6;

 VAR_5 = FUNC_1(VAR_4->clk);
 if (VAR_5 < 0) {
  FUNC_2(VAR_2->dev, "failed to enable clock\n");
  return VAR_5;
 }

 VAR_6 = FUNC_4(VAR_4->base + FUNC_0(VAR_3->hwpwm));
 VAR_6 |= VAR_0;
 FUNC_6(VAR_6, VAR_4->base + FUNC_0(VAR_3->hwpwm));
 FUNC_3(VAR_4, VAR_3->hwpwm, VAR_1);

 return 0;
}
