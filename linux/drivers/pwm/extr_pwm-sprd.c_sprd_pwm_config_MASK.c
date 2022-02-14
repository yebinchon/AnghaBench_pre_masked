
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct sprd_pwm_chn {scalar_t__ clk_rate; } ;
struct sprd_pwm_chip {struct sprd_pwm_chn* chn; } ;
struct pwm_device {size_t hwpwm; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct sprd_pwm_chip*,size_t,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sprd_pwm_chip *VAR_6, struct pwm_device *VAR_7,
      int VAR_8, int VAR_9)
{
 struct sprd_pwm_chn *VAR_10 = &VAR_6->chn[VAR_7->hwpwm];
 u32 VAR_11, VAR_12;
 u64 VAR_13;
 VAR_12 = VAR_8 * VAR_3 / VAR_9;

 VAR_13 = (u64)VAR_10->clk_rate * VAR_9;
 FUNC_1(VAR_13, VAR_0);
 VAR_11 = FUNC_0(VAR_13, VAR_3) - 1;
 if (VAR_11 > VAR_5)
  VAR_11 = VAR_5;
 FUNC_2(VAR_6, VAR_7->hwpwm, VAR_4, VAR_11);
 FUNC_2(VAR_6, VAR_7->hwpwm, VAR_2, VAR_3);
 FUNC_2(VAR_6, VAR_7->hwpwm, VAR_1, VAR_12);

 return 0;
}
