
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpiphp_context {int dummy; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 struct acpiphp_context* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpiphp_context*) ;
 int FUNC_2 (int ,struct acpiphp_context*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_1, u32 VAR_2)
{
 struct acpiphp_context *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_2(VAR_2, VAR_3);
 FUNC_1(VAR_3);
 return 0;
}
