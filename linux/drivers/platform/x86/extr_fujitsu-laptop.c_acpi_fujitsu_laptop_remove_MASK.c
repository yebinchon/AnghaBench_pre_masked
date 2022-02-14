
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fujitsu_laptop {int fifo; } ;
struct acpi_device {int dummy; } ;


 struct fujitsu_laptop* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_0)
{
 struct fujitsu_laptop *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);

 FUNC_2(&VAR_1->fifo);

 return 0;
}
