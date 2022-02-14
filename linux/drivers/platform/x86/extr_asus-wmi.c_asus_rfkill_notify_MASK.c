
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct asus_wmi {int hotplug_work; int hotplug_workqueue; } ;
typedef int acpi_handle ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void FUNC_1(acpi_handle VAR_1, u32 VAR_2, void *VAR_3)
{
 struct asus_wmi *VAR_4 = VAR_3;

 if (VAR_2 != VAR_0)
  return;
 FUNC_0(VAR_4->hotplug_workqueue, &VAR_4->hotplug_work);
}
