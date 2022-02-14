
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa_info {int dummy; } ;
struct platform_device {int dev; } ;
struct flash_platform_data {int dummy; } ;


 struct flash_platform_data* FUNC_0 (int *) ;
 struct sa_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct sa_info*,struct flash_platform_data*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct sa_info *VAR_1 = FUNC_1(VAR_0);
 struct flash_platform_data *VAR_2 = FUNC_0(&VAR_0->dev);

 FUNC_2(VAR_1, VAR_2);

 return 0;
}
