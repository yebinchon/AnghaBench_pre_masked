
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct madera_pin_private {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;

__attribute__((used)) static u16 FUNC_1(struct madera_pin_private *VAR_1,
          unsigned int VAR_2)
{
 switch (VAR_2) {
 case 4:
  return 0;
 case 8:
  return 2 << VAR_0;
 default:
  break;
 }

 FUNC_0(VAR_1->dev, "%u mA not a valid drive strength", VAR_2);

 return 0;
}
