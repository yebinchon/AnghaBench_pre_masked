
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;


 int FUNC_0 (struct sk_buff*,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct sk_buff *VAR_0,
          struct net_device *VAR_1,
          netdev_features_t VAR_2)
{
 VAR_2 = FUNC_0(VAR_0, VAR_2);
 VAR_2 = FUNC_1(VAR_0, VAR_2);

 return VAR_2;
}
