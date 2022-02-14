
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct mtk_disp_pwm {int clk_main; int clk_mm; TYPE_1__* data; } ;
struct TYPE_2__ {int enable_mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mtk_disp_pwm*,int ,int ,int) ;
 struct mtk_disp_pwm* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_3(struct pwm_chip *VAR_1, struct pwm_device *VAR_2)
{
 struct mtk_disp_pwm *VAR_3 = FUNC_2(VAR_1);

 FUNC_1(VAR_3, VAR_0, VAR_3->data->enable_mask,
     0x0);

 FUNC_0(VAR_3->clk_mm);
 FUNC_0(VAR_3->clk_main);
}
