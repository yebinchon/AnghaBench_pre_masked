
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usba_udc {int num_ep; int * usba_ep; int gadget; } ;
struct platform_device {int dev; } ;


 int FUNC_0 (int *,int ) ;
 struct usba_udc* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usba_udc*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct usba_udc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->dev, 0);
 FUNC_2(&VAR_1->gadget);

 for (VAR_2 = 1; VAR_2 < VAR_1->num_ep; VAR_2++)
  FUNC_4(&VAR_1->usba_ep[VAR_2]);
 FUNC_3(VAR_1);

 return 0;
}
