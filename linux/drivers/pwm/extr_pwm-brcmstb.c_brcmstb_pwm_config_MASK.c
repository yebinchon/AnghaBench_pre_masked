
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef unsigned int u32 ;
struct pwm_device {unsigned int hwpwm; } ;
struct pwm_chip {int dummy; } ;
struct brcmstb_pwm {int lock; int clk; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (unsigned int) ;
 unsigned long VAR_10 ;
 unsigned int FUNC_4 (struct brcmstb_pwm*,int ) ;
 int FUNC_5 (struct brcmstb_pwm*,unsigned long,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct brcmstb_pwm* FUNC_10 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_11(struct pwm_chip *VAR_11, struct pwm_device *VAR_12,
         int VAR_13, int VAR_14)
{
 struct brcmstb_pwm *VAR_15 = FUNC_10(VAR_11);
 unsigned long VAR_16, VAR_17, VAR_18 = VAR_0;
 unsigned int VAR_19 = VAR_12->hwpwm;
 u32 VAR_20;






 if (VAR_13 == VAR_14) {
  VAR_17 = VAR_9;
  VAR_16 = VAR_9 - 1;
  goto done;
 }

 while (1) {
  u64 VAR_21, VAR_22;





  VAR_21 = (u64)FUNC_6(VAR_15->clk) * (u64)VAR_18;
  FUNC_7(VAR_21, 1 << VAR_4);

  VAR_22 = VAR_14 * VAR_21;
  FUNC_7(VAR_22, VAR_6);
  VAR_16 = VAR_22;

  VAR_22 = (VAR_13 + 1) * VAR_21;
  FUNC_7(VAR_22, VAR_6);
  VAR_17 = VAR_22;





  if (VAR_16 == VAR_10 || (VAR_17 < VAR_8 && VAR_13))
   return -VAR_5;


  if (VAR_16 <= VAR_9 && VAR_17 <= VAR_9)
   break;







  VAR_18 >>= 1;





  if (VAR_18 < VAR_1)
   return -VAR_5;
 }

done:





 FUNC_8(&VAR_15->lock);
 FUNC_5(VAR_15, VAR_18 >> 8, FUNC_1(VAR_19));
 FUNC_5(VAR_15, VAR_18 & 0xff, FUNC_0(VAR_19));


 VAR_20 = FUNC_4(VAR_15, VAR_7);
 VAR_20 |= VAR_2 << (VAR_19 * VAR_3);
 FUNC_5(VAR_15, VAR_20, VAR_7);


 FUNC_5(VAR_15, VAR_16, FUNC_3(VAR_19));
 FUNC_5(VAR_15, VAR_17, FUNC_2(VAR_19));
 FUNC_9(&VAR_15->lock);

 return 0;
}
