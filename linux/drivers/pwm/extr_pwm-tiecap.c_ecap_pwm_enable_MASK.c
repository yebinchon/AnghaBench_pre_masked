
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct ecap_pwm_chip {scalar_t__ mmio_base; TYPE_1__ chip; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct ecap_pwm_chip* FUNC_2 (struct pwm_chip*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_3, struct pwm_device *VAR_4)
{
 struct ecap_pwm_chip *VAR_5 = FUNC_2(VAR_3);
 u16 VAR_6;


 FUNC_0(VAR_5->chip.dev);





 VAR_6 = FUNC_1(VAR_5->mmio_base + VAR_0);
 VAR_6 |= VAR_2 | VAR_1;
 FUNC_3(VAR_6, VAR_5->mmio_base + VAR_0);

 return 0;
}
