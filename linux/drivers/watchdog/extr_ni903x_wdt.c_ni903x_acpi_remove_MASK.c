
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni903x_wdt {int wdd; } ;
struct acpi_device {int dummy; } ;


 struct ni903x_wdt* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_0)
{
 struct ni903x_wdt *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->wdd);
 FUNC_2(&VAR_1->wdd);

 return 0;
}
