
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm2xxx_charger {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(void *VAR_6, int VAR_7)
{
 struct pm2xxx_charger *VAR_8 = VAR_6;
 int VAR_9 = 0;

 if (VAR_7 & (VAR_3 | VAR_0)) {
  FUNC_0(VAR_8->dev, "VMPWR drop to VBAT level\n");
 }

 if (VAR_7 & (VAR_5 |
   VAR_2 |
   VAR_4 |
   VAR_1)) {
  FUNC_0(VAR_8->dev, "Falling/Rising edge on WPWR1/2\n");
 }

 return VAR_9;
}
