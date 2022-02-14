
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct tegra_pwm_chip {int clk_rate; int clk; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;


 void* FUNC_0 (unsigned long long,unsigned long long) ;
 int VAR_0 ;
 unsigned long long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pwm_device*) ;
 int FUNC_4 (struct tegra_pwm_chip*,int ,unsigned long) ;
 struct tegra_pwm_chip* FUNC_5 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_6(struct pwm_chip *VAR_7, struct pwm_device *VAR_8,
       int VAR_9, int VAR_10)
{
 struct tegra_pwm_chip *VAR_11 = FUNC_5(VAR_7);
 unsigned long long VAR_12 = VAR_9, VAR_13;
 unsigned long VAR_14;
 u32 VAR_15 = 0;
 int VAR_16;






 VAR_12 *= (1 << VAR_3);
 VAR_12 = FUNC_0(VAR_12, VAR_10);

 VAR_15 = (u32)VAR_12 << VAR_2;





 VAR_14 = VAR_11->clk_rate >> VAR_3;


 VAR_13 = FUNC_0(100ULL * VAR_1, VAR_10);
 VAR_14 = FUNC_0(100ULL * VAR_14, VAR_13);






 if (VAR_14 > 0)
  VAR_14--;





 if (VAR_14 >> VAR_6)
  return -VAR_0;

 VAR_15 |= VAR_14 << VAR_5;





 if (!FUNC_3(VAR_8)) {
  VAR_16 = FUNC_2(VAR_11->clk);
  if (VAR_16 < 0)
   return VAR_16;
 } else
  VAR_15 |= VAR_4;

 FUNC_4(VAR_11, VAR_8->hwpwm, VAR_15);




 if (!FUNC_3(VAR_8))
  FUNC_1(VAR_11->clk);

 return 0;
}
