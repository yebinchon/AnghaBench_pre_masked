
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct bcm63xx_udc {int driver; int gadget; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bcm63xx_udc*) ;
 int FUNC_2 (struct bcm63xx_udc*) ;
 struct bcm63xx_udc* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct bcm63xx_udc *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1);
 FUNC_4(&VAR_1->gadget);
 FUNC_0(VAR_1->driver);

 FUNC_2(VAR_1);

 return 0;
}
