
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vudc {int gadget; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct vudc*) ;
 int FUNC_1 (struct vudc*) ;
 struct vudc* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct platform_device *VAR_0)
{
 struct vudc *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(&VAR_1->gadget);
 FUNC_0(VAR_1);
 FUNC_1(VAR_1);
 return 0;
}
