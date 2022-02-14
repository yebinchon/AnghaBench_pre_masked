
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rndis_device {int link_state; } ;
struct netvsc_device {struct rndis_device* extension; } ;
struct net_device_context {int nvdev; int vf_netdev; } ;
struct net_device {int name; } ;


 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 struct net_device_context* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*,int ,int) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct netvsc_device*,struct net_device*) ;
 int FUNC_7 (struct netvsc_device*) ;
 void* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_0)
{
 struct net_device_context *VAR_1 = FUNC_2(VAR_0);
 struct net_device *VAR_2 = FUNC_8(VAR_1->vf_netdev);
 struct netvsc_device *VAR_3 = FUNC_8(VAR_1->nvdev);
 struct rndis_device *VAR_4;
 int VAR_5 = 0;

 FUNC_4(VAR_0);


 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5 != 0) {
  FUNC_1(VAR_0, "unable to open device (ret %d).\n", VAR_5);
  return VAR_5;
 }

 VAR_4 = VAR_3->extension;
 if (!VAR_4->link_state) {
  FUNC_5(VAR_0);
  FUNC_6(VAR_3, VAR_0);
 }

 if (VAR_2) {




  VAR_5 = FUNC_0(VAR_2, ((void*)0));
  if (VAR_5)
   FUNC_3(VAR_0,
        "unable to open slave: %s: %d\n",
        VAR_2->name, VAR_5);
 }
 return 0;
}
