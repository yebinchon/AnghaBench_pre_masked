
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct da9150_charger {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int,struct da9150_charger*) ;
 struct da9150_charger* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*,char const*) ;

__attribute__((used)) static void FUNC_4(struct platform_device *VAR_0,
       const char *VAR_1)
{
 struct device *VAR_2 = &VAR_0->dev;
 struct da9150_charger *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, VAR_1);
 if (VAR_4 < 0) {
  FUNC_0(VAR_2, "Failed to get IRQ CHG_STATUS: %d\n", VAR_4);
  return;
 }

 FUNC_1(VAR_4, VAR_3);
}
