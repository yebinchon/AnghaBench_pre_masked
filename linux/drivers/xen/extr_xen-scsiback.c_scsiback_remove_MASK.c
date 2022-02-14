
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenbus_device {int dev; } ;
struct vscsibk_info {scalar_t__ irq; } ;


 struct vscsibk_info* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct vscsibk_info*) ;
 int FUNC_3 (struct vscsibk_info*) ;

__attribute__((used)) static int FUNC_4(struct xenbus_device *VAR_0)
{
 struct vscsibk_info *VAR_1 = FUNC_0(&VAR_0->dev);

 if (VAR_1->irq)
  FUNC_2(VAR_1);

 FUNC_3(VAR_1);

 FUNC_1(&VAR_0->dev, ((void*)0));

 return 0;
}
