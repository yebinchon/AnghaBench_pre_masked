
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct acpi_device {int handle; } ;


 int VAR_0 ;
 struct acpi_device* FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;
 int VAR_4 ;
 int FUNC_5 (struct acpi_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct acpi_device *VAR_6 = FUNC_0(&VAR_5->dev);

 FUNC_3(VAR_6->handle, VAR_1,
       VAR_3);
 FUNC_2(VAR_6->handle,
    VAR_0, &VAR_2);
 FUNC_5(VAR_6);
 FUNC_4(&VAR_4, FUNC_1(0, 0));

 return 0;
}
