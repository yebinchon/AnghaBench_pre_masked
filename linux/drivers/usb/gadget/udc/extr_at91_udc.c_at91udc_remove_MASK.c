
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct at91_udc {int iclk; int fclk; int lock; scalar_t__ driver; int gadget; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 struct at91_udc* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct at91_udc*,int ) ;
 int FUNC_5 (struct at91_udc*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct at91_udc *VAR_2 = FUNC_3(VAR_1);
 unsigned long VAR_3;

 FUNC_0("remove\n");

 FUNC_8(&VAR_2->gadget);
 if (VAR_2->driver)
  return -VAR_0;

 FUNC_6(&VAR_2->lock, VAR_3);
 FUNC_4(VAR_2, 0);
 FUNC_7(&VAR_2->lock, VAR_3);

 FUNC_2(&VAR_1->dev, 0);
 FUNC_5(VAR_2);
 FUNC_1(VAR_2->fclk);
 FUNC_1(VAR_2->iclk);

 return 0;
}
