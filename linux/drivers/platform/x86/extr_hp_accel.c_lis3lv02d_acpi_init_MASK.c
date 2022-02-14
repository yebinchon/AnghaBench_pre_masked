
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lis3lv02d {struct acpi_device* bus_priv; } ;
struct acpi_device {int handle; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct lis3lv02d *VAR_3)
{
 struct acpi_device *VAR_4 = VAR_3->bus_priv;
 if (FUNC_0(VAR_4->handle, VAR_2,
     ((void*)0), ((void*)0)) != VAR_0)
  return -VAR_1;

 return 0;
}
