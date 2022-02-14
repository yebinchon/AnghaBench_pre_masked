
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xenbus_device_id {int dummy; } ;
struct xenbus_device {int dev; } ;
struct netfront_info {TYPE_1__* netdev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int ** sysfs_groups; } ;


 scalar_t__ FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,struct netfront_info*) ;
 struct netfront_info* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct xenbus_device*,int,char*) ;
 struct net_device* FUNC_5 (struct xenbus_device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct xenbus_device *VAR_1,
     const struct xenbus_device_id *VAR_2)
{
 int VAR_3;
 struct net_device *VAR_4;
 struct netfront_info *VAR_5;

 VAR_4 = FUNC_5(VAR_1);
 if (FUNC_0(VAR_4)) {
  VAR_3 = FUNC_1(VAR_4);
  FUNC_4(VAR_1, VAR_3, "creating netdev");
  return VAR_3;
 }

 VAR_5 = FUNC_3(VAR_4);
 FUNC_2(&VAR_1->dev, VAR_5);




 return 0;
}
