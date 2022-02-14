
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct igbvf_adapter {int flags; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct igbvf_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_2,
         netdev_features_t VAR_3)
{
 struct igbvf_adapter *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 & VAR_1)
  VAR_4->flags &= ~VAR_0;
 else
  VAR_4->flags |= VAR_0;

 return 0;
}
