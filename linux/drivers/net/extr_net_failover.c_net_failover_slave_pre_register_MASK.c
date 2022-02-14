
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_failover_info {int primary_dev; int standby_dev; } ;
struct TYPE_2__ {scalar_t__ parent; } ;
struct net_device {int features; int name; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*,char*,int ,...) ;
 struct net_failover_info* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2,
        struct net_device *VAR_3)
{
 struct net_device *VAR_4, *VAR_5;
 struct net_failover_info *VAR_6;
 bool VAR_7;

 VAR_6 = FUNC_2(VAR_3);
 VAR_4 = FUNC_3(VAR_6->standby_dev);
 VAR_5 = FUNC_3(VAR_6->primary_dev);
 VAR_7 = VAR_2->dev.parent == VAR_3->dev.parent;
 if (VAR_7 ? VAR_4 : VAR_5) {
  FUNC_1(VAR_3, "%s attempting to register as slave dev when %s already present\n",
      VAR_2->name,
      VAR_7 ? "standby" : "primary");
  return -VAR_0;
 }





 if (!VAR_7 && (!VAR_2->dev.parent ||
      !FUNC_0(VAR_2->dev.parent)))
  return -VAR_0;

 if (VAR_3->features & VAR_1 &&
     FUNC_4(VAR_3)) {
  FUNC_1(VAR_3, "Device %s is VLAN challenged and failover device has VLAN set up\n",
      VAR_3->name);
  return -VAR_0;
 }

 return 0;
}
