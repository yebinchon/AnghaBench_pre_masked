
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int netdev_features_t ;
struct TYPE_2__ {int gso_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct sk_buff*,int ) ;
 int FUNC_5 (struct sk_buff*,int ) ;

__attribute__((used)) static netdev_features_t FUNC_6(struct sk_buff *VAR_1,
           struct net_device *VAR_2,
           netdev_features_t VAR_3)
{
 if (FUNC_3(FUNC_1(VAR_1) &&
       (FUNC_2(VAR_1)->gso_size > 9000) &&
       !FUNC_0(VAR_1, 9700)))
  VAR_3 &= ~VAR_0;

 VAR_3 = FUNC_4(VAR_1, VAR_3);
 return FUNC_5(VAR_1, VAR_3);
}
