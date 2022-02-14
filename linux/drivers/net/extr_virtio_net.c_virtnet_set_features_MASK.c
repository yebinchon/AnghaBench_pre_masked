
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct virtnet_info {scalar_t__ guest_offloads; scalar_t__ guest_offloads_capable; scalar_t__ xdp_queue_pairs; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct virtnet_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct virtnet_info*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
    netdev_features_t VAR_3)
{
 struct virtnet_info *VAR_4 = FUNC_0(VAR_2);
 u64 VAR_5;
 int VAR_6;

 if ((VAR_2->features ^ VAR_3) & VAR_1) {
  if (VAR_4->xdp_queue_pairs)
   return -VAR_0;

  if (VAR_3 & VAR_1)
   VAR_5 = VAR_4->guest_offloads_capable;
  else
   VAR_5 = 0;

  VAR_6 = FUNC_1(VAR_4, VAR_5);
  if (VAR_6)
   return VAR_6;
  VAR_4->guest_offloads = VAR_5;
 }

 return 0;
}
