
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int handle; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int *,unsigned long long*) ;

__attribute__((used)) static inline int FUNC_3(struct acpi_device *VAR_3)
{
 unsigned long long VAR_4;
 acpi_status VAR_5;

 VAR_5 = FUNC_2(VAR_3->handle, VAR_2,
           ((void*)0), &VAR_4);
 if (FUNC_1(VAR_5))
  return VAR_4;
 else {
  FUNC_0((VAR_0,
      "evaluation error HKEY.SQTY\n"));
  return -VAR_1;
 }
}
