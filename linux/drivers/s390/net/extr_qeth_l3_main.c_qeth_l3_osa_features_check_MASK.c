
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct net_device*,int ) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct sk_buff *VAR_1,
          struct net_device *VAR_2,
          netdev_features_t VAR_3)
{
 if (FUNC_1(VAR_1) != 4)
  VAR_3 &= ~VAR_0;
 return FUNC_0(VAR_1, VAR_2, VAR_3);
}
