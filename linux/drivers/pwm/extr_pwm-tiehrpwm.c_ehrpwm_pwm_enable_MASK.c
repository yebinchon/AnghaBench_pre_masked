
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dev; } ;
struct TYPE_2__ {int dev; } ;
struct ehrpwm_pwm_chip {TYPE_1__ chip; int tbclk; int mmio_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ehrpwm_pwm_chip*,int ) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ) ;
 struct ehrpwm_pwm_chip* FUNC_6 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_7(struct pwm_chip *VAR_8, struct pwm_device *VAR_9)
{
 struct ehrpwm_pwm_chip *VAR_10 = FUNC_6(VAR_8);
 u16 VAR_11, VAR_12;
 int VAR_13;


 FUNC_5(VAR_8->dev);


 if (VAR_9->hwpwm) {
  VAR_11 = VAR_3;
  VAR_12 = VAR_4;
 } else {
  VAR_11 = VAR_1;
  VAR_12 = VAR_2;
 }


 FUNC_4(VAR_10->mmio_base, VAR_5, VAR_6,
        VAR_7);

 FUNC_4(VAR_10->mmio_base, VAR_0, VAR_12, VAR_11);


 FUNC_1(VAR_10, VAR_9->hwpwm);


 VAR_13 = FUNC_0(VAR_10->tbclk);
 if (VAR_13) {
  FUNC_2(VAR_8->dev, "Failed to enable TBCLK for %s: %d\n",
   FUNC_3(VAR_10->chip.dev), VAR_13);
  return VAR_13;
 }

 return 0;
}
