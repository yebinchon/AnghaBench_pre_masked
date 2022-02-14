
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int encapsulation; } ;
struct port_info {struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int chip; } ;
struct adapter {TYPE_1__ params; } ;
typedef int netdev_features_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 struct port_info* FUNC_2 (struct net_device*) ;

__attribute__((used)) static netdev_features_t FUNC_3(struct sk_buff *VAR_3,
          struct net_device *VAR_4,
          netdev_features_t VAR_5)
{
 struct port_info *VAR_6 = FUNC_2(VAR_4);
 struct adapter *VAR_7 = VAR_6->adapter;

 if (FUNC_0(VAR_7->params.chip) < VAR_0)
  return VAR_5;


 if (!VAR_3->encapsulation || FUNC_1(VAR_3))
  return VAR_5;


 return VAR_5 & ~(VAR_1 | VAR_2);
}
