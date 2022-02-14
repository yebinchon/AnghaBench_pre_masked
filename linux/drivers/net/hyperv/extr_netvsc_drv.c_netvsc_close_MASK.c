
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int dummy; } ;
struct net_device_context {int nvdev; int vf_netdev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 struct net_device_context* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct netvsc_device*,struct net_device*) ;
 int FUNC_4 (struct netvsc_device*) ;
 int FUNC_5 (struct netvsc_device*) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_0)
{
 struct net_device_context *VAR_1 = FUNC_2(VAR_0);
 struct net_device *VAR_2
  = FUNC_6(VAR_1->vf_netdev);
 struct netvsc_device *VAR_3 = FUNC_6(VAR_1->nvdev);
 int VAR_4;

 FUNC_3(VAR_3, VAR_0);


 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 != 0) {
  FUNC_1(VAR_0, "unable to close device (ret %d).\n", VAR_4);
  return VAR_4;
 }

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  FUNC_1(VAR_0, "Ring buffer not empty after closing rndis\n");

 if (VAR_2)
  FUNC_0(VAR_2);

 return VAR_4;
}
