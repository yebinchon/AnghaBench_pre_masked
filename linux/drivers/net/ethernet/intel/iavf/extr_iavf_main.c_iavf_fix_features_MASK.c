
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct iavf_adapter {TYPE_1__* vf_res; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int vf_cap_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct iavf_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_1(struct net_device *VAR_4,
        netdev_features_t VAR_5)
{
 struct iavf_adapter *VAR_6 = FUNC_0(VAR_4);

 if (!(VAR_6->vf_res->vf_cap_flags & VAR_3))
  VAR_5 &= ~(VAR_2 |
         VAR_1 |
         VAR_0);

 return VAR_5;
}
