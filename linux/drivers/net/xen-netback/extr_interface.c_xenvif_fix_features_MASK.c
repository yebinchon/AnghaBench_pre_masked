
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xenvif {int gso_mask; int ipv6_csum; int ip_csum; int can_sg; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct xenvif* FUNC_1 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_7,
 netdev_features_t VAR_8)
{
 struct xenvif *VAR_9 = FUNC_1(VAR_7);

 if (!VAR_9->can_sg)
  VAR_8 &= ~VAR_2;
 if (~(VAR_9->gso_mask) & FUNC_0(VAR_5))
  VAR_8 &= ~VAR_3;
 if (~(VAR_9->gso_mask) & FUNC_0(VAR_6))
  VAR_8 &= ~VAR_4;
 if (!VAR_9->ip_csum)
  VAR_8 &= ~VAR_1;
 if (!VAR_9->ipv6_csum)
  VAR_8 &= ~VAR_0;

 return VAR_8;
}
