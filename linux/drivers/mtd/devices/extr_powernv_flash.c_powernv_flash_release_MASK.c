
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powernv_flash {int mtd; } ;
struct platform_device {int dev; } ;


 struct powernv_flash* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct powernv_flash *VAR_1 = FUNC_0(&(VAR_0->dev));


 return FUNC_1(&(VAR_1->mtd));
}
