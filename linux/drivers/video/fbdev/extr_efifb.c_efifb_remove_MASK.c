
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct fb_info*) ;
 struct fb_info* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct fb_info*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct fb_info *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(VAR_2);
 FUNC_2(&VAR_1->dev.kobj, VAR_0);
 FUNC_0(VAR_2);

 return 0;
}
