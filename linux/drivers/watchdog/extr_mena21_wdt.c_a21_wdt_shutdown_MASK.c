
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct a21_wdt_drv {int * gpios; } ;


 size_t VAR_0 ;
 struct a21_wdt_drv* FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_1)
{
 struct a21_wdt_drv *VAR_2 = FUNC_0(&VAR_1->dev);

 FUNC_1(VAR_2->gpios[VAR_0], 0);
}
