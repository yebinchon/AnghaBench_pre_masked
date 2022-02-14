
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm2xxx_charger {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct pm2xxx_charger*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_4, int VAR_5)
{
 struct pm2xxx_charger *VAR_6 = VAR_4;
 int VAR_7 = 0;

 if (VAR_5 & VAR_0)
  VAR_7 = FUNC_1(VAR_6, VAR_5);

 if (VAR_5 & (VAR_3 |
    VAR_1 | VAR_2)) {
  FUNC_0(VAR_6->dev,
   "Watchdog occurred for precharge, CC and CV charge\n");
 }

 return VAR_7;
}
