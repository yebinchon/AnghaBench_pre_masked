
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vt8500_chip {int clk; scalar_t__ base; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct vt8500_chip*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 struct vt8500_chip* FUNC_4 (struct pwm_chip*) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_6(struct pwm_chip *VAR_2, struct pwm_device *VAR_3)
{
 struct vt8500_chip *VAR_4 = FUNC_4(VAR_2);
 u32 VAR_5;

 VAR_5 = FUNC_3(VAR_4->base + FUNC_0(VAR_3->hwpwm));
 VAR_5 &= ~VAR_0;
 FUNC_5(VAR_5, VAR_4->base + FUNC_0(VAR_3->hwpwm));
 FUNC_2(VAR_4, VAR_3->hwpwm, VAR_1);

 FUNC_1(VAR_4->clk);
}
