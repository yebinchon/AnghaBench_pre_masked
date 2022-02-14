
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
typedef int acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int ,int *,struct device*,int *) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,int ) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct device*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 acpi_handle VAR_6;
 acpi_status VAR_7;

 FUNC_9(VAR_5, FUNC_2(FUNC_1(VAR_5)));

 if (!FUNC_7(VAR_5))
  return -VAR_2;

 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6)
  return -VAR_1;


 VAR_7 = FUNC_3(VAR_0, VAR_6, 1,
         VAR_3,
         ((void*)0), VAR_5, ((void*)0));
 if (FUNC_0(VAR_7)) {
  FUNC_4(VAR_5, "failed to probe PMU devices\n");
  FUNC_8(VAR_7);
 }

 FUNC_5(VAR_5, "node%d: pmu uncore registered\n", FUNC_6(VAR_5));
 return 0;
}
