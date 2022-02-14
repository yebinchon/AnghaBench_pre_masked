
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct guid_block {int notify_id; } ;
struct wmi_block {TYPE_1__* acpi_device; struct guid_block gblock; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;
struct TYPE_2__ {int handle; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static acpi_status FUNC_2(struct wmi_block *VAR_2, int VAR_3)
{
 struct guid_block *VAR_4 = ((void*)0);
 char VAR_5[5];
 acpi_status VAR_6;
 acpi_handle VAR_7;

 VAR_4 = &VAR_2->gblock;
 VAR_7 = VAR_2->acpi_device->handle;

 FUNC_1(VAR_5, 5, "WE%02X", VAR_4->notify_id);
 VAR_6 = FUNC_0(VAR_7, VAR_5, VAR_3);

 if (VAR_6 != VAR_1 && VAR_6 != VAR_0)
  return VAR_6;
 else
  return VAR_1;
}
