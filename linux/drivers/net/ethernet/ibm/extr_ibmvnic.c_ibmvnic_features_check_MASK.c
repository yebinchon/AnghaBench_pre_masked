
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int gso_size; int gso_segs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static netdev_features_t FUNC_2(struct sk_buff *VAR_1,
      struct net_device *VAR_2,
      netdev_features_t VAR_3)
{




 if (FUNC_0(VAR_1)) {
  if (FUNC_1(VAR_1)->gso_size < 224 ||
      FUNC_1(VAR_1)->gso_segs == 1)
   VAR_3 &= ~VAR_0;
 }

 return VAR_3;
}
