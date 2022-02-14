
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 if (FUNC_0(VAR_1)) {
  FUNC_1("Found legacy ATKD device (%s)\n", VAR_1);
  FUNC_1("WMI device present, but legacy ATKD device is also "
   "present and enabled\n");
  FUNC_1("You probably booted with acpi_osi=\"Linux\" or "
   "acpi_osi=\"!Windows 2009\"\n");
  FUNC_1("Can't load eeepc-wmi, use default acpi_osi "
   "(preferred) or eeepc-laptop\n");
  return -VAR_0;
 }
 return 0;
}
