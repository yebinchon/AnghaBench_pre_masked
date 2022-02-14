
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int *,unsigned long long*) ;
 int FUNC_2 (char*,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
     struct device_attribute *VAR_3, char *VAR_4)
{
 acpi_status VAR_5;
 unsigned long long VAR_6;

 VAR_5 = FUNC_1(((void*)0), VAR_0, ((void*)0), &VAR_6);
 if (FUNC_0(VAR_5))
  return -VAR_1;

 return FUNC_2(VAR_4, "%s\n", VAR_6 ? "enabled" : "disabled");
}
