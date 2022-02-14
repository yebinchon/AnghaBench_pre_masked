
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct puv3_pwm_chip {int clk; scalar_t__ base; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 unsigned long long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (unsigned long long,int) ;
 struct puv3_pwm_chip* FUNC_4 (struct pwm_chip*) ;
 int FUNC_5 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct pwm_chip *VAR_5, struct pwm_device *VAR_6,
      int VAR_7, int VAR_8)
{
 unsigned long VAR_9, VAR_10, VAR_11, VAR_12;
 struct puv3_pwm_chip *VAR_13 = FUNC_4(VAR_5);
 unsigned long long VAR_14;

 VAR_14 = FUNC_1(VAR_13->clk);
 VAR_14 = VAR_14 * VAR_8;
 FUNC_3(VAR_14, 1000000000);
 VAR_9 = VAR_14;

 if (VAR_9 < 1)
  VAR_9 = 1;

 VAR_10 = (VAR_9 - 1) / 1024;
 VAR_11 = VAR_9 / (VAR_10 + 1) - 1;

 if (VAR_10 > 63)
  return -VAR_0;

 if (VAR_7 == VAR_8)
  VAR_12 = VAR_1;
 else
  VAR_12 = (VAR_11 + 1) * VAR_7 / VAR_8;





 FUNC_2(VAR_13->clk);

 FUNC_5(VAR_10, VAR_13->base + VAR_4);
 FUNC_5(VAR_11 - VAR_12, VAR_13->base + VAR_2);
 FUNC_5(VAR_11, VAR_13->base + VAR_3);

 FUNC_0(VAR_13->clk);

 return 0;
}
