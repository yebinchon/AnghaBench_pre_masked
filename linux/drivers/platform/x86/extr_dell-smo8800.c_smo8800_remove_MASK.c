
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smo8800_device {int miscdev; int irq; } ;
struct acpi_device {int dev; struct smo8800_device* driver_data; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,struct smo8800_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_0)
{
 struct smo8800_device *VAR_1 = VAR_0->driver_data;

 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_2(&VAR_1->miscdev);
 FUNC_0(&VAR_0->dev, "device /dev/freefall unregistered\n");
 return 0;
}
