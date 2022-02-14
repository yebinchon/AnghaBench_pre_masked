
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pwm_imx27_chip {scalar_t__ mmio_base; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {struct device* dev; } ;
struct device {int dummy; } ;


 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct pwm_device*) ;
 int FUNC_5 (scalar_t__) ;
 struct pwm_imx27_chip* FUNC_6 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_7(struct pwm_chip *VAR_4,
         struct pwm_device *VAR_5)
{
 struct pwm_imx27_chip *VAR_6 = FUNC_6(VAR_4);
 struct device *VAR_7 = VAR_4->dev;
 unsigned int VAR_8;
 int VAR_9;
 u32 VAR_10;

 VAR_10 = FUNC_5(VAR_6->mmio_base + VAR_0);
 VAR_9 = FUNC_1(VAR_1, VAR_10);
 if (VAR_9 == VAR_2) {
  VAR_8 = FUNC_0(FUNC_4(VAR_5),
      VAR_3);
  FUNC_3(VAR_8);

  VAR_10 = FUNC_5(VAR_6->mmio_base + VAR_0);
  if (VAR_9 == FUNC_1(VAR_1, VAR_10))
   FUNC_2(VAR_7, "there is no free FIFO slot\n");
 }
}
