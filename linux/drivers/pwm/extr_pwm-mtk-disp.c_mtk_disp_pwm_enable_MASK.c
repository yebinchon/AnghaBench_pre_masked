
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct mtk_disp_pwm {TYPE_1__* data; int clk_main; int clk_mm; } ;
struct TYPE_2__ {int enable_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mtk_disp_pwm*,int ,int ,int ) ;
 struct mtk_disp_pwm* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_1, struct pwm_device *VAR_2)
{
 struct mtk_disp_pwm *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3->clk_main);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_1(VAR_3->clk_mm);
 if (VAR_4 < 0) {
  FUNC_0(VAR_3->clk_main);
  return VAR_4;
 }

 FUNC_2(VAR_3, VAR_0, VAR_3->data->enable_mask,
     VAR_3->data->enable_mask);

 return 0;
}
