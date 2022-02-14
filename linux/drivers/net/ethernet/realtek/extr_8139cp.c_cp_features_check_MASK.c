
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {scalar_t__ gso_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct sk_buff *VAR_2,
        struct net_device *VAR_3,
        netdev_features_t VAR_4)
{
 if (FUNC_0(VAR_2)->gso_size > VAR_0)
  VAR_4 &= ~VAR_1;

 return FUNC_1(VAR_2, VAR_4);
}
