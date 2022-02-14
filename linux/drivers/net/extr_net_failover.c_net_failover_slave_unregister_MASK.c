
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_failover_info {int primary_dev; int standby_dev; int failover_stats; } ;
struct TYPE_2__ {scalar_t__ parent; } ;
struct net_device {int name; int max_mtu; int min_mtu; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,int *) ;
 int FUNC_4 (struct net_device*,struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,char*,char*,int ) ;
 struct net_failover_info* FUNC_9 (struct net_device*) ;
 struct net_device* FUNC_10 (int ) ;
 int FUNC_11 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_1,
      struct net_device *VAR_2)
{
 struct net_device *VAR_3, *VAR_4;
 struct net_failover_info *VAR_5;
 bool VAR_6;

 VAR_5 = FUNC_9(VAR_2);
 VAR_4 = FUNC_10(VAR_5->primary_dev);
 VAR_3 = FUNC_10(VAR_5->standby_dev);

 if (FUNC_1(VAR_1 != VAR_4 && VAR_1 != VAR_3))
  return -VAR_0;

 FUNC_11(VAR_1, VAR_2);
 FUNC_6(VAR_1, VAR_2);
 FUNC_4(VAR_1, VAR_2);
 FUNC_2(VAR_1);

 VAR_5 = FUNC_9(VAR_2);
 FUNC_3(VAR_2, &VAR_5->failover_stats);

 VAR_6 = VAR_1->dev.parent == VAR_2->dev.parent;
 if (VAR_6) {
  FUNC_0(VAR_5->standby_dev, ((void*)0));
 } else {
  FUNC_0(VAR_5->primary_dev, ((void*)0));
  if (VAR_3) {
   VAR_2->min_mtu = VAR_3->min_mtu;
   VAR_2->max_mtu = VAR_3->max_mtu;
  }
 }

 FUNC_5(VAR_1);

 FUNC_7(VAR_2);

 FUNC_8(VAR_2, "failover %s slave:%s unregistered\n",
      VAR_6 ? "standby" : "primary", VAR_1->name);

 return 0;
}
