
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netfront_info {TYPE_1__* xbdev; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int otherend; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct netfront_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct net_device *VAR_4,
 netdev_features_t VAR_5)
{
 struct netfront_info *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5 & VAR_1 &&
     !FUNC_1(VAR_6->xbdev->otherend, "feature-sg", 0))
  VAR_5 &= ~VAR_1;

 if (VAR_5 & VAR_0 &&
     !FUNC_1(VAR_6->xbdev->otherend,
      "feature-ipv6-csum-offload", 0))
  VAR_5 &= ~VAR_0;

 if (VAR_5 & VAR_2 &&
     !FUNC_1(VAR_6->xbdev->otherend, "feature-gso-tcpv4", 0))
  VAR_5 &= ~VAR_2;

 if (VAR_5 & VAR_3 &&
     !FUNC_1(VAR_6->xbdev->otherend, "feature-gso-tcpv6", 0))
  VAR_5 &= ~VAR_3;

 return VAR_5;
}
