
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct mxs_pwm_chip {int clk; scalar_t__ base; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned long long VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned long* VAR_7 ;
 int FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned long long,int) ;
 int FUNC_6 (struct pwm_device*) ;
 struct mxs_pwm_chip* FUNC_7 (struct pwm_chip*) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_9(struct pwm_chip *VAR_8, struct pwm_device *VAR_9,
     int VAR_10, int VAR_11)
{
 struct mxs_pwm_chip *VAR_12 = FUNC_7(VAR_8);
 int VAR_13, VAR_14 = 0;
 unsigned int VAR_15, VAR_16;
 unsigned long VAR_17;
 unsigned long long VAR_18;

 VAR_17 = FUNC_3(VAR_12->clk);
 while (1) {
  VAR_18 = VAR_17 / VAR_7[VAR_14];
  VAR_18 = VAR_18 * VAR_11;
  FUNC_5(VAR_18, 1000000000);
  if (VAR_18 < VAR_4)
   break;
  VAR_14++;
  if (VAR_14 >= VAR_2)
   return -VAR_0;
 }

 VAR_15 = VAR_18;
 VAR_18 *= VAR_10;
 FUNC_5(VAR_18, VAR_11);
 VAR_16 = VAR_18;





 if (!FUNC_6(VAR_9)) {
  VAR_13 = FUNC_4(VAR_12->clk);
  if (VAR_13)
   return VAR_13;
 }

 FUNC_8(VAR_16 << 16,
   VAR_12->base + VAR_5 + VAR_9->hwpwm * 0x20);
 FUNC_8(FUNC_1(VAR_15) | VAR_1 |
        VAR_3 | FUNC_0(VAR_14),
   VAR_12->base + VAR_6 + VAR_9->hwpwm * 0x20);




 if (!FUNC_6(VAR_9))
  FUNC_2(VAR_12->clk);

 return 0;
}
