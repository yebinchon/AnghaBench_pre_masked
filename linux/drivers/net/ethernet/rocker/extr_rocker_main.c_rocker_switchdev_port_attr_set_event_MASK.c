
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switchdev_notifier_port_attr_info {int handled; int trans; int attr; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct net_device*,int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_0,
  struct switchdev_notifier_port_attr_info *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1->attr,
       VAR_1->trans);

 VAR_1->handled = 1;
 return FUNC_0(VAR_2);
}
