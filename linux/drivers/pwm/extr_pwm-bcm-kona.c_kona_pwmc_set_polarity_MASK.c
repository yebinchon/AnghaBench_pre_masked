
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {unsigned int hwpwm; } ;
struct pwm_chip {int dev; } ;
struct kona_pwmc {int clk; scalar_t__ base; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct kona_pwmc*,unsigned int) ;
 int FUNC_5 (struct kona_pwmc*,unsigned int) ;
 unsigned int FUNC_6 (scalar_t__) ;
 struct kona_pwmc* FUNC_7 (struct pwm_chip*) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct pwm_chip *VAR_2, struct pwm_device *VAR_3,
      enum pwm_polarity VAR_4)
{
 struct kona_pwmc *VAR_5 = FUNC_7(VAR_2);
 unsigned int VAR_6 = VAR_3->hwpwm;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_5->clk);
 if (VAR_8 < 0) {
  FUNC_3(VAR_2->dev, "failed to enable clock: %d\n", VAR_8);
  return VAR_8;
 }

 FUNC_5(VAR_5, VAR_6);

 VAR_7 = FUNC_6(VAR_5->base + VAR_0);

 if (VAR_4 == VAR_1)
  VAR_7 |= 1 << FUNC_0(VAR_6);
 else
  VAR_7 &= ~(1 << FUNC_0(VAR_6));

 FUNC_8(VAR_7, VAR_5->base + VAR_0);

 FUNC_4(VAR_5, VAR_6);

 FUNC_1(VAR_5->clk);

 return 0;
}
