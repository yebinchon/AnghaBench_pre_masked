
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {int dummy; } ;
struct net_device_context {int nvdev; int vf_netdev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,struct net_device*) ;
 int FUNC_1 (struct net_device*,struct net_device*) ;
 struct net_device_context* FUNC_2 (struct net_device*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct netvsc_device*) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_0)
{
 struct net_device_context *VAR_1 = FUNC_2(VAR_0);
 struct net_device *VAR_2;
 struct netvsc_device *VAR_3;

 FUNC_4();
 VAR_2 = FUNC_3(VAR_1->vf_netdev);
 if (VAR_2) {
  FUNC_1(VAR_2, VAR_0);
  FUNC_0(VAR_2, VAR_0);
 }

 VAR_3 = FUNC_3(VAR_1->nvdev);
 if (VAR_3)
  FUNC_6(VAR_3);
 FUNC_5();
}
