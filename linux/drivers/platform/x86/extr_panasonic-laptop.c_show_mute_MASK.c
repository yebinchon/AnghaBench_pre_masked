
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcc_acpi {int* sinf; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct acpi_device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct pcc_acpi* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct pcc_acpi*) ;
 int FUNC_2 (char*,int ,char*,int) ;
 struct acpi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3, struct device_attribute *VAR_4,
    char *VAR_5)
{
 struct acpi_device *VAR_6 = FUNC_3(VAR_3);
 struct pcc_acpi *VAR_7 = FUNC_0(VAR_6);

 if (!FUNC_1(VAR_7))
  return -VAR_0;

 return FUNC_2(VAR_5, VAR_1, "%u\n", VAR_7->sinf[VAR_2]);
}
