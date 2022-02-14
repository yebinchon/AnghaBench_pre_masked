
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int dev; } ;
struct samsung_pwm_chip {TYPE_1__ chip; scalar_t__ base; } ;
struct samsung_pwm_channel {int tin_ns; int period_ns; int duty_ns; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,...) ;
 struct samsung_pwm_channel* FUNC_3 (struct pwm_device*) ;
 unsigned long FUNC_4 (struct samsung_pwm_chip*,int ,int) ;
 int FUNC_5 (struct samsung_pwm_chip*,struct pwm_device*) ;
 int FUNC_6 (scalar_t__) ;
 struct samsung_pwm_chip* FUNC_7 (struct pwm_chip*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct pwm_chip *VAR_2, struct pwm_device *VAR_3,
    int VAR_4, int VAR_5, bool VAR_6)
{
 struct samsung_pwm_chip *VAR_7 = FUNC_7(VAR_2);
 struct samsung_pwm_channel *VAR_8 = FUNC_3(VAR_3);
 u32 VAR_9 = VAR_8->tin_ns, VAR_10, VAR_11, VAR_12;






 if (VAR_5 > VAR_1)
  return -VAR_0;

 VAR_10 = FUNC_6(VAR_7->base + FUNC_1(VAR_3->hwpwm));
 VAR_12 = FUNC_6(VAR_7->base + FUNC_0(VAR_3->hwpwm));


 ++VAR_10;


 if (VAR_8->period_ns != VAR_5 || VAR_6) {
  unsigned long VAR_13;
  u32 VAR_14;

  VAR_14 = VAR_1 / VAR_5;

  FUNC_2(VAR_7->chip.dev, "duty_ns=%d, period_ns=%d (%u)\n",
      VAR_4, VAR_5, VAR_14);

  VAR_13 = FUNC_4(VAR_7, VAR_3->hwpwm, VAR_14);

  FUNC_2(VAR_7->chip.dev, "tin_rate=%lu\n", VAR_13);

  VAR_9 = VAR_1 / VAR_13;
  VAR_10 = VAR_5 / VAR_9;
 }


 if (VAR_10 <= 1)
  return -VAR_0;


 VAR_11 = VAR_4 / VAR_9;


 if (!VAR_11)
  ++VAR_11;

 VAR_11 = VAR_10 - VAR_11;


 --VAR_10;

 --VAR_11;

 FUNC_2(VAR_7->chip.dev,
    "tin_ns=%u, tcmp=%u/%u\n", VAR_9, VAR_11, VAR_10);


 FUNC_8(VAR_10, VAR_7->base + FUNC_1(VAR_3->hwpwm));
 FUNC_8(VAR_11, VAR_7->base + FUNC_0(VAR_3->hwpwm));






 if (VAR_12 == (u32) -1) {
  FUNC_2(VAR_7->chip.dev, "Forcing manual update");
  FUNC_5(VAR_7, VAR_3);
 }

 VAR_8->period_ns = VAR_5;
 VAR_8->tin_ns = VAR_9;
 VAR_8->duty_ns = VAR_4;

 return 0;
}
