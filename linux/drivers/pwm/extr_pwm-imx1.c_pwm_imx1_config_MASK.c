
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_imx1_chip {scalar_t__ mmio_base; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 struct pwm_imx1_chip* FUNC_1 (struct pwm_chip*) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct pwm_chip *VAR_2,
      struct pwm_device *VAR_3, int VAR_4, int VAR_5)
{
 struct pwm_imx1_chip *VAR_6 = FUNC_1(VAR_2);
 u32 VAR_7, VAR_8;
 VAR_7 = FUNC_0(VAR_6->mmio_base + VAR_0);
 VAR_8 = VAR_7 * VAR_4 / VAR_5;

 FUNC_2(VAR_7 - VAR_8, VAR_6->mmio_base + VAR_1);

 return 0;
}
