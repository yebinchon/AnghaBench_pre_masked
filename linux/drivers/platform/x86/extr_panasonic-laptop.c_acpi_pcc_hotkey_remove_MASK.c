
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcc_acpi {struct pcc_acpi* sinf; int input_dev; int backlight; } ;
struct TYPE_2__ {int kobj; } ;
struct acpi_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 struct pcc_acpi* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pcc_acpi*) ;
 int VAR_1 ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(struct acpi_device *VAR_2)
{
 struct pcc_acpi *VAR_3 = FUNC_0(VAR_2);

 if (!VAR_2 || !VAR_3)
  return -VAR_0;

 FUNC_4(&VAR_2->dev.kobj, &VAR_1);

 FUNC_1(VAR_3->backlight);

 FUNC_2(VAR_3->input_dev);

 FUNC_3(VAR_3->sinf);
 FUNC_3(VAR_3);

 return 0;
}
