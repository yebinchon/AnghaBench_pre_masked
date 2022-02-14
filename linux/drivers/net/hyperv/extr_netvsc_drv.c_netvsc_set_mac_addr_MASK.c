
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_data; } ;
struct netvsc_device {int dummy; } ;
struct net_device_context {int nvdev; int vf_netdev; } ;
struct net_device {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,struct sockaddr*,int *) ;
 int FUNC_1 (struct net_device*,void*) ;
 int FUNC_2 (struct net_device*,void*) ;
 int FUNC_3 (int ,int ,int ) ;
 struct net_device_context* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct netvsc_device*,int ) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_2, void *VAR_3)
{
 struct net_device_context *VAR_4 = FUNC_4(VAR_2);
 struct net_device *VAR_5 = FUNC_6(VAR_4->vf_netdev);
 struct netvsc_device *VAR_6 = FUNC_6(VAR_4->nvdev);
 struct sockaddr *VAR_7 = VAR_3;
 int VAR_8;

 VAR_8 = FUNC_2(VAR_2, VAR_3);
 if (VAR_8)
  return VAR_8;

 if (!VAR_6)
  return -VAR_0;

 if (VAR_5) {
  VAR_8 = FUNC_0(VAR_5, VAR_7, ((void*)0));
  if (VAR_8)
   return VAR_8;
 }

 VAR_8 = FUNC_5(VAR_6, VAR_7->sa_data);
 if (!VAR_8) {
  FUNC_1(VAR_2, VAR_3);
 } else if (VAR_5) {

  FUNC_3(VAR_7->sa_data, VAR_2->dev_addr, VAR_1);
  FUNC_0(VAR_5, VAR_7, ((void*)0));
 }

 return VAR_8;
}
