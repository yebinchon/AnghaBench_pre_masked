
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sh_flctl {int chip; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (struct sh_flctl*) ;
 int FUNC_1 (int *) ;
 struct sh_flctl* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct sh_flctl *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1);
 FUNC_1(&VAR_1->chip);
 FUNC_3(&VAR_0->dev);

 return 0;
}
