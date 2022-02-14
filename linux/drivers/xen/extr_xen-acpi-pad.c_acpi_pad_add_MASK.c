
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (int ,int ,int ,struct acpi_device*) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_5)
{
 acpi_status VAR_6;

 FUNC_4(FUNC_2(VAR_5), VAR_2);
 FUNC_4(FUNC_1(VAR_5), VAR_1);

 VAR_6 = FUNC_3(VAR_5->handle,
  VAR_0, VAR_4, VAR_5);
 if (FUNC_0(VAR_6))
  return -VAR_3;

 return 0;
}
