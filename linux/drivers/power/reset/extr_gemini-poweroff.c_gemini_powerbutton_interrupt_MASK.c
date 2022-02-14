
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gemini_powercon {int dev; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct gemini_powercon *VAR_6 = VAR_5;
 u32 VAR_7;


 VAR_7 = FUNC_2(VAR_6->base + VAR_1);
 VAR_7 |= VAR_0;
 FUNC_3(VAR_7, VAR_6->base + VAR_1);

 VAR_7 = FUNC_2(VAR_6->base + VAR_2);
 VAR_7 &= 0x70U;
 switch (VAR_7) {
 case 130:





  FUNC_0(VAR_6->dev, "infrared poweroff - ignored\n");
  break;
 case 128:
  FUNC_0(VAR_6->dev, "RTC poweroff\n");
  FUNC_1(1);
  break;
 case 129:
  FUNC_0(VAR_6->dev, "poweroff button pressed\n");
  FUNC_1(1);
  break;
 default:
  FUNC_0(VAR_6->dev, "other power management IRQ\n");
  break;
 }

 return VAR_3;
}
