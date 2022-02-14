
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asus_wireless_data {scalar_t__ wq; int led; } ;
struct acpi_device {int dev; } ;


 struct asus_wireless_data* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_0)
{
 struct asus_wireless_data *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->wq) {
  FUNC_2(&VAR_0->dev, &VAR_1->led);
  FUNC_1(VAR_1->wq);
 }
 return 0;
}
