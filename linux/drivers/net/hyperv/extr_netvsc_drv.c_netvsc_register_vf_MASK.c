
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int dummy; } ;
struct net_device_context {int vf_netdev; int nvdev; } ;
struct net_device {scalar_t__ addr_len; int features; int wanted_features; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ,char*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct net_device*,char*,int ,int) ;
 int FUNC_6 (struct net_device*,char*,int ) ;
 struct net_device_context* FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct net_device*,struct net_device*) ;
 int FUNC_10 (int ,struct net_device*) ;
 struct netvsc_device* FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_3)
{
 struct net_device_context *VAR_4;
 struct netvsc_device *VAR_5;
 struct net_device *VAR_6;
 int VAR_7;

 if (VAR_3->addr_len != VAR_0)
  return VAR_1;

 VAR_6 = FUNC_3(VAR_3);
 if (!VAR_6)
  return VAR_1;

 VAR_4 = FUNC_7(VAR_6);
 VAR_5 = FUNC_11(VAR_4->nvdev);
 if (!VAR_5 || FUNC_11(VAR_4->vf_netdev))
  return VAR_1;





 if (!FUNC_4(FUNC_2(VAR_6), FUNC_2(VAR_3))) {
  VAR_7 = FUNC_0(VAR_3,
            FUNC_2(VAR_6), "eth%d");
  if (VAR_7)
   FUNC_5(VAR_3,
       "could not move to same namespace as %s: %d\n",
       VAR_6->name, VAR_7);
  else
   FUNC_6(VAR_3,
        "VF moved to namespace with: %s\n",
        VAR_6->name);
  return VAR_1;
 }

 FUNC_6(VAR_6, "VF registering: %s\n", VAR_3->name);

 if (FUNC_9(VAR_3, VAR_6) != 0)
  return VAR_1;

 FUNC_1(VAR_3);
 FUNC_10(VAR_4->vf_netdev, VAR_3);

 VAR_3->wanted_features = VAR_6->features;
 FUNC_8(VAR_3);

 return VAR_2;
}
