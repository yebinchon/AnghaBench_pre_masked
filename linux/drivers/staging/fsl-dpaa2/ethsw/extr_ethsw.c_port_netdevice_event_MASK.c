
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct netdev_notifier_changeupper_info {scalar_t__ linking; struct net_device* upper_dev; } ;
struct net_device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,struct net_device*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static int FUNC_6(struct notifier_block *VAR_2,
    unsigned long VAR_3, void *VAR_4)
{
 struct net_device *VAR_5 = FUNC_1(VAR_4);
 struct netdev_notifier_changeupper_info *VAR_6 = VAR_4;
 struct net_device *VAR_7;
 int VAR_8 = 0;

 if (!FUNC_0(VAR_5))
  return VAR_1;


 if (VAR_3 == VAR_0) {
  VAR_7 = VAR_6->upper_dev;
  if (FUNC_2(VAR_7)) {
   if (VAR_6->linking)
    VAR_8 = FUNC_4(VAR_5, VAR_7);
   else
    VAR_8 = FUNC_5(VAR_5);
  }
 }

 return FUNC_3(VAR_8);
}
