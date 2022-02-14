
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct ecap_pwm_chip {TYPE_1__ chip; scalar_t__ mmio_base; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 struct ecap_pwm_chip* FUNC_3 (struct pwm_chip*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_3, struct pwm_device *VAR_4,
     enum pwm_polarity VAR_5)
{
 struct ecap_pwm_chip *VAR_6 = FUNC_3(VAR_3);
 u16 VAR_7;

 FUNC_0(VAR_6->chip.dev);

 VAR_7 = FUNC_2(VAR_6->mmio_base + VAR_0);

 if (VAR_5 == VAR_2)

  VAR_7 |= VAR_1;
 else

  VAR_7 &= ~VAR_1;

 FUNC_4(VAR_7, VAR_6->mmio_base + VAR_0);

 FUNC_1(VAR_6->chip.dev);

 return 0;
}
