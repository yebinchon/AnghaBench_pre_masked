
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * type; int * bus; int * parent; } ;
struct serdev_device {int write_lock; int write_comp; TYPE_1__ dev; struct serdev_controller* ctrl; } ;
struct serdev_controller {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 struct serdev_device* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

struct serdev_device *FUNC_4(struct serdev_controller *VAR_3)
{
 struct serdev_device *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->ctrl = VAR_3;
 FUNC_0(&VAR_4->dev);
 VAR_4->dev.parent = &VAR_3->dev;
 VAR_4->dev.bus = &VAR_1;
 VAR_4->dev.type = &VAR_2;
 FUNC_1(&VAR_4->write_comp);
 FUNC_3(&VAR_4->write_lock);
 return VAR_4;
}
