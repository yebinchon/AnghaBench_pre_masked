
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct acpi_device {int handle; } ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int *,unsigned long long*) ;
 int FUNC_2 (struct input_dev*,int ,unsigned long long) ;
 int FUNC_3 (struct input_dev*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_2,
         struct input_dev *VAR_3)
{
 unsigned long long VAR_4;
 acpi_status VAR_5;

 VAR_5 = FUNC_1(VAR_2->handle, "TBMC", ((void*)0), &VAR_4);
 if (FUNC_0(VAR_5))
  return -VAR_0;


 FUNC_2(VAR_3, VAR_1, VAR_4);
 FUNC_3(VAR_3);

 return 0;
}
