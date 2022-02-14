
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ab8500_charger {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct ab8500_charger *VAR_7, int VAR_8)
{
 int VAR_9;

 if (VAR_8) {

  VAR_9 = FUNC_0(VAR_7->dev, VAR_0,
   VAR_1,
   (VAR_6 | VAR_5));
  if (VAR_9) {
   FUNC_1(VAR_7->dev, "Power ON LED failed\n");
   return VAR_9;
  }

  VAR_9 = FUNC_0(VAR_7->dev, VAR_0,
   VAR_2,
   VAR_4);
  if (VAR_9) {
   FUNC_1(VAR_7->dev, "Set LED PWM duty cycle failed\n");
   return VAR_9;
  }
 } else {

  VAR_9 = FUNC_0(VAR_7->dev, VAR_0,
   VAR_1,
   VAR_3);
  if (VAR_9) {
   FUNC_1(VAR_7->dev, "Power-off LED failed\n");
   return VAR_9;
  }
 }

 return VAR_9;
}
