
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_imx27_chip {scalar_t__ mmio_base; } ;
struct pwm_chip {struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (scalar_t__) ;
 struct pwm_imx27_chip* FUNC_2 (struct pwm_chip*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct pwm_chip *VAR_3)
{
 struct pwm_imx27_chip *VAR_4 = FUNC_2(VAR_3);
 struct device *VAR_5 = VAR_3->dev;
 int VAR_6 = 0;
 u32 VAR_7;

 FUNC_4(VAR_1, VAR_4->mmio_base + VAR_0);
 do {
  FUNC_3(200, 1000);
  VAR_7 = FUNC_1(VAR_4->mmio_base + VAR_0);
 } while ((VAR_7 & VAR_1) &&
   (VAR_6++ < VAR_2));

 if (VAR_7 & VAR_1)
  FUNC_0(VAR_5, "software reset timeout\n");
}
