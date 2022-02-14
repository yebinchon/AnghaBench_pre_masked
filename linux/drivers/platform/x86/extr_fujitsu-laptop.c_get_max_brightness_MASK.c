
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fujitsu_bl {unsigned long long max_brightness; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 struct fujitsu_bl* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ,char*,int *,unsigned long long*) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_1)
{
 struct fujitsu_bl *VAR_2 = FUNC_1(VAR_1);
 unsigned long long VAR_3 = 0;
 acpi_status VAR_4 = VAR_0;

 FUNC_3(VAR_1->handle, "get max lcd level via RBLL\n");

 VAR_4 = FUNC_2(VAR_1->handle, "RBLL", ((void*)0), &VAR_3);
 if (FUNC_0(VAR_4))
  return -1;

 VAR_2->max_brightness = VAR_3;

 return VAR_2->max_brightness;
}
