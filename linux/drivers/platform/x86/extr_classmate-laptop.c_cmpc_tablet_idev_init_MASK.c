
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct input_dev {TYPE_1__ dev; int swbit; int evbit; } ;
struct acpi_device {int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned long long*) ;
 int FUNC_2 (struct input_dev*,int ,int) ;
 int FUNC_3 (struct input_dev*) ;
 int FUNC_4 (int ,int ) ;
 struct acpi_device* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct input_dev *VAR_2)
{
 unsigned long long VAR_3 = 0;
 struct acpi_device *VAR_4;

 FUNC_4(VAR_0, VAR_2->evbit);
 FUNC_4(VAR_1, VAR_2->swbit);

 VAR_4 = FUNC_5(VAR_2->dev.parent);
 if (FUNC_0(FUNC_1(VAR_4->handle, &VAR_3))) {
  FUNC_2(VAR_2, VAR_1, !VAR_3);
  FUNC_3(VAR_2);
 }
}
