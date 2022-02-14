
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netvsc_device {scalar_t__ destroy; } ;
struct net_device_context {int vf_netdev; int nvdev; } ;
struct net_device {int features; int wanted_features; } ;
struct ndis_offload_params {void* rsc_ip_v6; void* rsc_ip_v4; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ndis_offload_params*,int ,int) ;
 struct net_device_context* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,struct netvsc_device*,struct ndis_offload_params*) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_4,
          netdev_features_t VAR_5)
{
 netdev_features_t VAR_6 = VAR_5 ^ VAR_4->features;
 struct net_device_context *VAR_7 = FUNC_1(VAR_4);
 struct netvsc_device *VAR_8 = FUNC_4(VAR_7->nvdev);
 struct net_device *VAR_9 = FUNC_4(VAR_7->vf_netdev);
 struct ndis_offload_params VAR_10;
 int VAR_11 = 0;

 if (!VAR_8 || VAR_8->destroy)
  return -VAR_0;

 if (!(VAR_6 & VAR_3))
  goto syncvf;

 FUNC_0(&VAR_10, 0, sizeof(struct ndis_offload_params));

 if (VAR_5 & VAR_3) {
  VAR_10.rsc_ip_v4 = VAR_2;
  VAR_10.rsc_ip_v6 = VAR_2;
 } else {
  VAR_10.rsc_ip_v4 = VAR_1;
  VAR_10.rsc_ip_v6 = VAR_1;
 }

 VAR_11 = FUNC_3(VAR_4, VAR_8, &VAR_10);

 if (VAR_11) {
  VAR_5 ^= VAR_3;
  VAR_4->features = VAR_5;
 }

syncvf:
 if (!VAR_9)
  return VAR_11;

 VAR_9->wanted_features = VAR_5;
 FUNC_2(VAR_9);

 return VAR_11;
}
