
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device_info {int dummy; } ;
struct netvsc_device {scalar_t__ destroy; } ;
struct net_device_context {int nvdev; int vf_netdev; } ;
struct net_device {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct netvsc_device_info*) ;
 int FUNC_2 (struct net_device*,char*) ;
 struct net_device_context* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,struct netvsc_device_info*) ;
 int FUNC_5 (struct net_device*,struct netvsc_device*) ;
 struct netvsc_device_info* FUNC_6 (struct netvsc_device*) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2, int VAR_3)
{
 struct net_device_context *VAR_4 = FUNC_3(VAR_2);
 struct net_device *VAR_5 = FUNC_7(VAR_4->vf_netdev);
 struct netvsc_device *VAR_6 = FUNC_7(VAR_4->nvdev);
 int VAR_7 = VAR_2->mtu;
 struct netvsc_device_info *VAR_8;
 int VAR_9 = 0;

 if (!VAR_6 || VAR_6->destroy)
  return -VAR_0;

 VAR_8 = FUNC_6(VAR_6);

 if (!VAR_8)
  return -VAR_1;


 if (VAR_5) {
  VAR_9 = FUNC_0(VAR_5, VAR_3);
  if (VAR_9)
   goto out;
 }

 VAR_9 = FUNC_5(VAR_2, VAR_6);
 if (VAR_9)
  goto rollback_vf;

 VAR_2->mtu = VAR_3;

 VAR_9 = FUNC_4(VAR_2, VAR_8);
 if (!VAR_9)
  goto out;


 VAR_2->mtu = VAR_7;

 if (FUNC_4(VAR_2, VAR_8))
  FUNC_2(VAR_2, "restoring mtu failed\n");
rollback_vf:
 if (VAR_5)
  FUNC_0(VAR_5, VAR_7);

out:
 FUNC_1(VAR_8);
 return VAR_9;
}
