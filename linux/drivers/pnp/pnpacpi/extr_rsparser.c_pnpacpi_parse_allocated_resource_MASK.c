
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dev; struct acpi_device* data; } ;
struct acpi_device {int handle; } ;
typedef scalar_t__ acpi_status ;
typedef int acpi_handle ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ,struct pnp_dev*) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct pnp_dev*) ;
 int VAR_3 ;

int FUNC_5(struct pnp_dev *VAR_4)
{
 struct acpi_device *VAR_5 = VAR_4->data;
 acpi_handle VAR_6 = VAR_5->handle;
 acpi_status VAR_7;

 FUNC_3(&VAR_4->dev, "parse allocated resources\n");

 FUNC_4(VAR_4);

 VAR_7 = FUNC_1(VAR_6, VAR_2,
         VAR_3, VAR_4);

 if (FUNC_0(VAR_7)) {
  if (VAR_7 != VAR_0)
   FUNC_2(&VAR_4->dev, "can't evaluate _CRS: %d", VAR_7);
  return -VAR_1;
 }
 return 0;
}
