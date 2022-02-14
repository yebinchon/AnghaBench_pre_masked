
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_notifier_port_obj_info {int handled; int obj; int trans; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 int FUNC_2 (struct net_device*,int ) ;

__attribute__((used)) static int
FUNC_3(unsigned long VAR_1, struct net_device *VAR_2,
   struct switchdev_notifier_port_obj_info *VAR_3)
{
 int VAR_4 = -VAR_0;

 switch (VAR_1) {
 case 129:
  VAR_4 = FUNC_1(VAR_2, VAR_3->obj,
      VAR_3->trans);
  break;
 case 128:
  VAR_4 = FUNC_2(VAR_2, VAR_3->obj);
  break;
 }

 VAR_3->handled = 1;
 return FUNC_0(VAR_4);
}
