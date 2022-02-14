
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_failover_info {int primary_stats; int primary_dev; int standby_stats; int standby_dev; } ;
struct TYPE_2__ {scalar_t__ parent; } ;
struct net_device {int mtu; int name; int max_mtu; int min_mtu; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int *) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct net_device*) ;
 int FUNC_5 (struct net_device*,struct net_device*) ;
 int FUNC_6 (struct net_device*,int *) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*,int) ;
 int FUNC_9 (struct net_device*,struct net_device*) ;
 int FUNC_10 (struct net_device*,struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*,struct net_device*,struct net_device*) ;
 int FUNC_13 (struct net_device*,char*,int ,int) ;
 int FUNC_14 (struct net_device*,char*,char*,int ) ;
 struct net_failover_info* FUNC_15 (struct net_device*) ;
 int FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct net_device*) ;
 scalar_t__ FUNC_18 (struct net_device*) ;
 int FUNC_19 (int ,struct net_device*) ;
 struct net_device* FUNC_20 (int ) ;
 int FUNC_21 (struct net_device*,struct net_device*) ;

__attribute__((used)) static int FUNC_22(struct net_device *VAR_2,
           struct net_device *VAR_3)
{
 struct net_device *VAR_4, *VAR_5;
 struct net_failover_info *VAR_6;
 bool VAR_7;
 u32 VAR_8;
 int VAR_9;


 VAR_8 = VAR_2->mtu;
 VAR_9 = FUNC_8(VAR_2, VAR_3->mtu);
 if (VAR_9) {
  FUNC_13(VAR_3, "unable to change mtu of %s to %u register failed\n",
      VAR_2->name, VAR_3->mtu);
  goto done;
 }

 FUNC_3(VAR_2);

 if (FUNC_18(VAR_3)) {
  VAR_9 = FUNC_6(VAR_2, ((void*)0));
  if (VAR_9 && (VAR_9 != -VAR_0)) {
   FUNC_13(VAR_3, "Opening slave %s failed err:%d\n",
       VAR_2->name, VAR_9);
   goto err_dev_open;
  }
 }

 FUNC_16(VAR_3);
 FUNC_9(VAR_2, VAR_3);
 FUNC_4(VAR_2, VAR_3);
 FUNC_17(VAR_3);

 VAR_9 = FUNC_21(VAR_2, VAR_3);
 if (VAR_9) {
  FUNC_13(VAR_3, "Failed to add vlan ids to device %s err:%d\n",
      VAR_2->name, VAR_9);
  goto err_vlan_add;
 }

 VAR_6 = FUNC_15(VAR_3);
 VAR_4 = FUNC_20(VAR_6->standby_dev);
 VAR_5 = FUNC_20(VAR_6->primary_dev);
 VAR_7 = VAR_2->dev.parent == VAR_3->dev.parent;

 if (VAR_7) {
  FUNC_19(VAR_6->standby_dev, VAR_2);
  VAR_4 = VAR_2;
  FUNC_2(VAR_4, &VAR_6->standby_stats);
 } else {
  FUNC_19(VAR_6->primary_dev, VAR_2);
  VAR_5 = VAR_2;
  FUNC_2(VAR_5, &VAR_6->primary_stats);
  VAR_3->min_mtu = VAR_2->min_mtu;
  VAR_3->max_mtu = VAR_2->max_mtu;
 }

 FUNC_12(VAR_2, VAR_5, VAR_4);
 FUNC_11(VAR_3);

 FUNC_0(VAR_1, VAR_2);

 FUNC_14(VAR_3, "failover %s slave:%s registered\n",
      VAR_7 ? "standby" : "primary", VAR_2->name);

 return 0;

err_vlan_add:
 FUNC_10(VAR_2, VAR_3);
 FUNC_5(VAR_2, VAR_3);
 FUNC_1(VAR_2);
err_dev_open:
 FUNC_7(VAR_2);
 FUNC_8(VAR_2, VAR_8);
done:
 return VAR_9;
}
