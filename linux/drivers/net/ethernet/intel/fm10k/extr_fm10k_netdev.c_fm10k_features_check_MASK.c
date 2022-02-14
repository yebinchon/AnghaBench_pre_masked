
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int encapsulation; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static netdev_features_t FUNC_1(struct sk_buff *VAR_2,
           struct net_device *VAR_3,
           netdev_features_t VAR_4)
{
 if (!VAR_2->encapsulation || FUNC_0(VAR_2))
  return VAR_4;

 return VAR_4 & ~(VAR_0 | VAR_1);
}
