
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucsi_acpi {int ucsi; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 struct ucsi_acpi* FUNC_2 (struct platform_device*) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct ucsi_acpi *VAR_3 = FUNC_2(VAR_2);

 FUNC_3(VAR_3->ucsi);

 FUNC_1(FUNC_0(&VAR_2->dev), VAR_0,
       VAR_1);

 return 0;
}
