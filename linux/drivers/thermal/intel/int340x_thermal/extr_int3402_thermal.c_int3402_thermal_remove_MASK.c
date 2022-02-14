
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct int3402_thermal_data {int int340x_zone; int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 struct int3402_thermal_data* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_2)
{
 struct int3402_thermal_data *VAR_3 = FUNC_2(VAR_2);

 FUNC_0(VAR_3->handle,
       VAR_0, VAR_1);
 FUNC_1(VAR_3->int340x_zone);

 return 0;
}
