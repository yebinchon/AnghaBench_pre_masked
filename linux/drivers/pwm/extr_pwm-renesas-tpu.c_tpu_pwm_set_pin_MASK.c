
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tpu_pwm_device {int polarity; int channel; TYPE_2__* tpu; } ;
typedef enum tpu_pin_state { ____Placeholder_tpu_pin_state } tpu_pin_state ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*,int ,char const* const) ;
 int FUNC_1 (struct tpu_pwm_device*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct tpu_pwm_device *VAR_6,
       enum tpu_pin_state VAR_7)
{
 static const char * const VAR_8[] = { "inactive", "PWM", "active" };

 FUNC_0(&VAR_6->tpu->pdev->dev, "%u: configuring pin as %s\n",
  VAR_6->channel, VAR_8[VAR_7]);

 switch (VAR_7) {
 case 129:
  FUNC_1(VAR_6, VAR_5,
         VAR_6->polarity == VAR_0 ?
         VAR_3 : VAR_1);
  break;
 case 128:
  FUNC_1(VAR_6, VAR_5,
         VAR_6->polarity == VAR_0 ?
         VAR_2 : VAR_4);
  break;
 case 130:
  FUNC_1(VAR_6, VAR_5,
         VAR_6->polarity == VAR_0 ?
         VAR_1 : VAR_3);
  break;
 }
}
