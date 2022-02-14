
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serdev_device {int dev; struct serdev_controller* ctrl; } ;
struct serdev_controller {int * serdev; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct serdev_device *VAR_0)
{
 struct serdev_controller *VAR_1 = VAR_0->ctrl;

 FUNC_0(&VAR_0->dev);
 VAR_1->serdev = ((void*)0);
}
