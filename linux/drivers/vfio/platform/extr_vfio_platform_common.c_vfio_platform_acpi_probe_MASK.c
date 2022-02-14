
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vfio_platform_device {int acpihid; int name; } ;
struct device {int dummy; } ;
struct acpi_device {int dummy; } ;


 struct acpi_device* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct acpi_device*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct device*,char*,int ) ;

__attribute__((used)) static int FUNC_4(struct vfio_platform_device *VAR_4,
        struct device *VAR_5)
{
 struct acpi_device *VAR_6;

 if (VAR_3)
  return -VAR_2;

 VAR_6 = FUNC_0(VAR_5);
 if (!VAR_6) {
  FUNC_3(VAR_5, "ACPI companion device not found for %s\n",
   VAR_4->name);
  return -VAR_1;
 }




 return FUNC_1(!VAR_4->acpihid) ? -VAR_0 : 0;
}
