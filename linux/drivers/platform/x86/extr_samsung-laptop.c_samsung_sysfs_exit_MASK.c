
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct samsung_laptop {struct platform_device* platform_device; } ;
struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct samsung_laptop *VAR_1)
{
 struct platform_device *VAR_2 = VAR_1->platform_device;

 FUNC_0(&VAR_2->dev.kobj, &VAR_0);
}
