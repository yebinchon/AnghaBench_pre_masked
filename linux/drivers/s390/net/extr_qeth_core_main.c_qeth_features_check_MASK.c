
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {unsigned int data; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {unsigned int gso_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ) ;
 unsigned int FUNC_3 (struct sk_buff*) ;
 unsigned int FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ) ;

netdev_features_t FUNC_7(struct sk_buff *VAR_1,
          struct net_device *VAR_2,
          netdev_features_t VAR_3)
{







 if (FUNC_2(VAR_1, VAR_3)) {

  unsigned int VAR_4 = VAR_1->data - FUNC_4(VAR_1);
  unsigned int VAR_5 = FUNC_5(VAR_1)->gso_size;
  unsigned int VAR_6 = FUNC_3(VAR_1);


  if (FUNC_0(VAR_6 + VAR_4 + VAR_5) <= FUNC_1(0))
   VAR_3 &= ~VAR_0;
 }

 return FUNC_6(VAR_1, VAR_3);
}
