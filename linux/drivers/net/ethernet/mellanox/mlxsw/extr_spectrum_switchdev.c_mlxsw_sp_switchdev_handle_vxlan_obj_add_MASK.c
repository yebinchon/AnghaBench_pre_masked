
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switchdev_notifier_port_obj_info {TYPE_1__* obj; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int id; } ;



 int FUNC_0 (struct net_device*,struct switchdev_notifier_port_obj_info*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_0,
     struct switchdev_notifier_port_obj_info *
     VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->obj->id) {
 case 128:
  VAR_2 = FUNC_0(VAR_0,
        VAR_1);
  break;
 default:
  break;
 }

 return VAR_2;
}
