
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_rtc_registers {int cr; int prer; } ;
struct stm32_rtc {scalar_t__ base; int rtc_ck; TYPE_1__* data; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {struct stm32_rtc_registers regs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct stm32_rtc*) ;
 int FUNC_5 (struct stm32_rtc*) ;
 int FUNC_6 (struct stm32_rtc*) ;
 int FUNC_7 (struct stm32_rtc*) ;
 int FUNC_8 (struct stm32_rtc*) ;
 int FUNC_9 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5,
     struct stm32_rtc *VAR_6)
{
 const struct stm32_rtc_registers *VAR_7 = &VAR_6->data->regs;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14;
 int VAR_15 = 0;

 VAR_14 = FUNC_0(VAR_6->rtc_ck);


 VAR_11 = VAR_1 >> VAR_2;
 VAR_12 = VAR_3 >> VAR_4;

 for (VAR_9 = VAR_11; VAR_9 + 1 > 0; VAR_9--) {
  VAR_10 = (VAR_14 / (VAR_9 + 1)) - 1;

  if (((VAR_10 + 1) * (VAR_9 + 1)) == VAR_14)
   break;
 }





 if ((VAR_10 > VAR_12) || (VAR_9 > VAR_11)) {
  VAR_9 = VAR_11;
  VAR_10 = (VAR_14 / (VAR_9 + 1)) - 1;

  FUNC_2(&VAR_5->dev, "rtc_ck is %s\n",
    (VAR_14 < ((VAR_9 + 1) * (VAR_10 + 1))) ?
    "fast" : "slow");
 }

 FUNC_8(VAR_6);

 VAR_15 = FUNC_4(VAR_6);
 if (VAR_15) {
  FUNC_1(&VAR_5->dev,
   "Can't enter in init mode. Prescaler config failed.\n");
  goto end;
 }

 VAR_8 = (VAR_10 << VAR_4) & VAR_3;
 FUNC_9(VAR_8, VAR_6->base + VAR_7->prer);
 VAR_8 |= (VAR_9 << VAR_2) & VAR_1;
 FUNC_9(VAR_8, VAR_6->base + VAR_7->prer);


 VAR_13 = FUNC_3(VAR_6->base + VAR_7->cr);
 VAR_13 &= ~VAR_0;
 FUNC_9(VAR_13, VAR_6->base + VAR_7->cr);

 FUNC_5(VAR_6);

 VAR_15 = FUNC_6(VAR_6);
end:
 FUNC_7(VAR_6);

 return VAR_15;
}
