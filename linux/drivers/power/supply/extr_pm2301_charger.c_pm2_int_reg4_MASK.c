
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm2xxx_charger {int dev; int failure_case; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pm2xxx_charger*,int) ;
 int FUNC_2 (struct pm2xxx_charger*,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_6, int VAR_7)
{
 struct pm2xxx_charger *VAR_8 = VAR_6;
 int VAR_9 = 0;

 if (VAR_7 & VAR_4) {
  VAR_8->failure_case = VAR_5;
  VAR_9 = FUNC_2(VAR_8, VAR_7 &
      VAR_4);
  FUNC_0(VAR_8->dev, "VSYSTEM overvoltage detected\n");
 }

 if (VAR_7 & (VAR_2 |
    VAR_3 |
    VAR_0 |
    VAR_1)) {
  FUNC_0(VAR_8->dev, "BTEMP die temperature is too Low/High\n");
  VAR_9 = FUNC_1(VAR_8, VAR_7 &
   (VAR_2 |
   VAR_3 |
   VAR_0 |
   VAR_1));
 }

 return VAR_9;
}
