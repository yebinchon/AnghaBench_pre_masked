
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_config {int * init_data; int * dev; } ;
struct platform_device {int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,struct regulator_config*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct regulator_config VAR_4 = { };
 int VAR_5;

 VAR_4.dev = &VAR_3->dev;
 VAR_4.init_data = &VAR_1;

 VAR_2 = FUNC_3(&VAR_0, &VAR_4);
 if (FUNC_0(VAR_2)) {
  VAR_5 = FUNC_1(VAR_2);
  FUNC_2("Failed to register regulator: %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
