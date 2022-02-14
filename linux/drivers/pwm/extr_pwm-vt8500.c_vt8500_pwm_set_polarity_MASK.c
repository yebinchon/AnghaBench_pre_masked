
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vt8500_chip {scalar_t__ base; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct vt8500_chip*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 struct vt8500_chip* FUNC_3 (struct pwm_chip*) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_3,
       struct pwm_device *VAR_4,
       enum pwm_polarity VAR_5)
{
 struct vt8500_chip *VAR_6 = FUNC_3(VAR_3);
 u32 VAR_7;

 VAR_7 = FUNC_2(VAR_6->base + FUNC_0(VAR_4->hwpwm));

 if (VAR_5 == VAR_1)
  VAR_7 |= VAR_0;
 else
  VAR_7 &= ~VAR_0;

 FUNC_4(VAR_7, VAR_6->base + FUNC_0(VAR_4->hwpwm));
 FUNC_1(VAR_6, VAR_4->hwpwm, VAR_2);

 return 0;
}
