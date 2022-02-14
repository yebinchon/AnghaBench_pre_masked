
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct acpi_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*) ;
 struct acpi_device* FUNC_4 (int ) ;
 struct acpi_device* FUNC_5 (int ) ;

__attribute__((used)) static struct acpi_device *FUNC_6(struct device *VAR_0)
{
 if (FUNC_0(VAR_0))
  return FUNC_4(FUNC_2(VAR_0));
 else if (FUNC_1(VAR_0))
  return FUNC_5(FUNC_3(VAR_0));

 return ((void*)0);
}
