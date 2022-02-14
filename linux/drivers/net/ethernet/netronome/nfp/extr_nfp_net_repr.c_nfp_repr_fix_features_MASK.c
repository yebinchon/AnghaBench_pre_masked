
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfp_repr {TYPE_3__* dst; } ;
struct net_device {int features; } ;
typedef int netdev_features_t ;
struct TYPE_4__ {struct net_device* lower_dev; } ;
struct TYPE_5__ {TYPE_1__ port_info; } ;
struct TYPE_6__ {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int) ;
 struct nfp_repr* FUNC_1 (struct net_device*) ;

__attribute__((used)) static netdev_features_t
FUNC_2(struct net_device *VAR_6, netdev_features_t VAR_7)
{
 struct nfp_repr *VAR_8 = FUNC_1(VAR_6);
 netdev_features_t VAR_9 = VAR_7;
 netdev_features_t VAR_10;
 struct net_device *VAR_11;

 VAR_11 = VAR_8->dst->u.port_info.lower_dev;

 VAR_10 = VAR_11->features;
 if (VAR_10 & (VAR_3 | VAR_2))
  VAR_10 |= VAR_0;

 VAR_7 = FUNC_0(VAR_7, VAR_10);
 VAR_7 |= VAR_9 & (VAR_5 | VAR_1);
 VAR_7 |= VAR_4;

 return VAR_7;
}
