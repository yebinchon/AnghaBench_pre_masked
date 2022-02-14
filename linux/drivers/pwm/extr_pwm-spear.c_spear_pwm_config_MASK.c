
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct spear_pwm_chip {int clk; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int,int) ;
 int FUNC_4 (struct spear_pwm_chip*,int ,int ,unsigned long) ;
 struct spear_pwm_chip* FUNC_5 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_6(struct pwm_chip *VAR_11, struct pwm_device *VAR_12,
       int VAR_13, int VAR_14)
{
 struct spear_pwm_chip *VAR_15 = FUNC_5(VAR_11);
 u64 VAR_16, VAR_17, VAR_18;
 unsigned long VAR_19 = VAR_3, VAR_20, VAR_21;
 int VAR_22;
 VAR_18 = FUNC_2(VAR_15->clk);
 while (1) {
  VAR_17 = 1000000000;
  VAR_17 *= 1 + VAR_19;
  VAR_16 = VAR_18 * VAR_14;
  VAR_20 = FUNC_3(VAR_16, VAR_17);
  VAR_16 = VAR_18 * VAR_13;
  VAR_21 = FUNC_3(VAR_16, VAR_17);


  if (VAR_20 < VAR_10 || VAR_21 < VAR_7)
   return -VAR_0;





  if (VAR_20 > VAR_9 || VAR_21 > VAR_6) {
   if (++VAR_19 > VAR_2)
    return -VAR_0;
   continue;
  }
  break;
 }





 VAR_22 = FUNC_1(VAR_15->clk);
 if (VAR_22)
  return VAR_22;

 FUNC_4(VAR_15, VAR_12->hwpwm, VAR_1,
   VAR_19 << VAR_4);
 FUNC_4(VAR_15, VAR_12->hwpwm, VAR_5, VAR_21);
 FUNC_4(VAR_15, VAR_12->hwpwm, VAR_8, VAR_20);
 FUNC_0(VAR_15->clk);

 return 0;
}
