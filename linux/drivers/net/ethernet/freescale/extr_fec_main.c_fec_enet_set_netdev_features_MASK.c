
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int features; } ;
struct fec_enet_private {int csum_flags; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct fec_enet_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_1(struct net_device *VAR_2,
 netdev_features_t VAR_3)
{
 struct fec_enet_private *VAR_4 = FUNC_0(VAR_2);
 netdev_features_t VAR_5 = VAR_3 ^ VAR_2->features;

 VAR_2->features = VAR_3;


 if (VAR_5 & VAR_1) {
  if (VAR_3 & VAR_1)
   VAR_4->csum_flags |= VAR_0;
  else
   VAR_4->csum_flags &= ~VAR_0;
 }
}
