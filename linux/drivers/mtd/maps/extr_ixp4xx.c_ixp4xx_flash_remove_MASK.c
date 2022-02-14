
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ixp4xx_flash_info {scalar_t__ mtd; } ;
struct flash_platform_data {int (* exit ) () ;} ;


 struct flash_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct ixp4xx_flash_info* FUNC_3 (struct platform_device*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct flash_platform_data *VAR_1 = FUNC_0(&VAR_0->dev);
 struct ixp4xx_flash_info *VAR_2 = FUNC_3(VAR_0);

 if(!VAR_2)
  return 0;

 if (VAR_2->mtd) {
  FUNC_2(VAR_2->mtd);
  FUNC_1(VAR_2->mtd);
 }

 if (VAR_1->exit)
  VAR_1->exit();

 return 0;
}
