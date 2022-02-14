
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_imx1_chip {scalar_t__ mmio_base; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pwm_chip*) ;
 int FUNC_1 (scalar_t__) ;
 struct pwm_imx1_chip* FUNC_2 (struct pwm_chip*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct pwm_chip *VAR_2, struct pwm_device *VAR_3)
{
 struct pwm_imx1_chip *VAR_4 = FUNC_2(VAR_2);
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_4->mmio_base + VAR_0);
 VAR_5 &= ~VAR_1;
 FUNC_3(VAR_5, VAR_4->mmio_base + VAR_0);

 FUNC_0(VAR_2);
}
