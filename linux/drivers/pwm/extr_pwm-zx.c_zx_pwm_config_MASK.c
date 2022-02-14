
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_pwm_chip {int wclk; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (unsigned long long,unsigned int) ;
 scalar_t__ FUNC_3 (struct pwm_device*) ;
 struct zx_pwm_chip* FUNC_4 (struct pwm_chip*) ;
 int FUNC_5 (struct zx_pwm_chip*,int ,int ,int ,int ) ;
 int FUNC_6 (struct zx_pwm_chip*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct pwm_chip *VAR_9, struct pwm_device *VAR_10,
    unsigned int VAR_11, unsigned int VAR_12)
{
 struct zx_pwm_chip *VAR_13 = FUNC_4(VAR_9);
 unsigned int VAR_14, VAR_15;
 unsigned long long VAR_16;
 unsigned int VAR_17 = 1;
 unsigned long VAR_18;


 VAR_18 = FUNC_1(VAR_13->wclk);

 while (1) {
  VAR_16 = VAR_18 / VAR_17;
  VAR_16 = VAR_16 * VAR_12;
  FUNC_2(VAR_16, VAR_1);

  if (VAR_16 < VAR_8)
   break;

  VAR_17++;

  if (VAR_17 > VAR_3)
   return -VAR_0;
 }


 VAR_14 = VAR_16;
 VAR_16 *= VAR_11;
 FUNC_2(VAR_16, VAR_12);
 VAR_15 = VAR_16;





 if (FUNC_3(VAR_10))
  FUNC_5(VAR_13, VAR_10->hwpwm, VAR_6, VAR_5, 0);


 FUNC_5(VAR_13, VAR_10->hwpwm, VAR_6, VAR_2,
   FUNC_0(VAR_17));
 FUNC_6(VAR_13, VAR_10->hwpwm, VAR_7, VAR_14);
 FUNC_6(VAR_13, VAR_10->hwpwm, VAR_4, VAR_15);


 if (FUNC_3(VAR_10))
  FUNC_5(VAR_13, VAR_10->hwpwm, VAR_6,
    VAR_5, VAR_5);

 return 0;
}
