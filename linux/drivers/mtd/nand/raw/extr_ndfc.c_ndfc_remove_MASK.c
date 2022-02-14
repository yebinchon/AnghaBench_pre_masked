
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct ndfc_controller {int chip; } ;
struct mtd_info {int name; } ;


 struct ndfc_controller* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct mtd_info* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ndfc_controller *VAR_1 = FUNC_0(&VAR_0->dev);
 struct mtd_info *VAR_2 = FUNC_3(&VAR_1->chip);

 FUNC_2(&VAR_1->chip);
 FUNC_1(VAR_2->name);

 return 0;
}
