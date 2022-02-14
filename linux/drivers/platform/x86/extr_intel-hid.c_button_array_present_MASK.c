
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
typedef int acpi_handle ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,unsigned long long*) ;

__attribute__((used)) static bool FUNC_3(struct platform_device *VAR_3)
{
 acpi_handle VAR_4 = FUNC_0(&VAR_3->dev);
 unsigned long long VAR_5;

 if (FUNC_2(VAR_4, VAR_1,
          &VAR_5)) {

  if (VAR_5 & 0x60000)
   return 1;
 }

 if (FUNC_2(VAR_4, VAR_0,
          &VAR_5)) {
  if (VAR_5 & 0x20000)
   return 1;
 }

 if (FUNC_1(VAR_2))
  return 1;

 return 0;
}
