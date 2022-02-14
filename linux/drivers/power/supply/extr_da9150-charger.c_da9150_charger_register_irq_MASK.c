
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct da9150_charger {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int,...) ;
 struct da9150_charger* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*,char const*) ;
 int FUNC_3 (int,int *,int ,int ,char const*,struct da9150_charger*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1,
           irq_handler_t VAR_2,
           const char *VAR_3)
{
 struct device *VAR_4 = &VAR_1->dev;
 struct da9150_charger *VAR_5 = FUNC_1(VAR_1);
 int VAR_6, VAR_7;

 VAR_6 = FUNC_2(VAR_1, VAR_3);
 if (VAR_6 < 0) {
  FUNC_0(VAR_4, "Failed to get IRQ CHG_STATUS: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_7 = FUNC_3(VAR_6, ((void*)0), VAR_2, VAR_0, VAR_3,
       VAR_5);
 if (VAR_7)
  FUNC_0(VAR_4, "Failed to request IRQ %d: %d\n", VAR_6, VAR_7);

 return VAR_7;
}
