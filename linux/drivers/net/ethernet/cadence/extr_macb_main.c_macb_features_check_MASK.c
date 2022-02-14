
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
typedef int skb_frag_t ;
typedef int netdev_features_t ;
struct TYPE_4__ {scalar_t__ protocol; } ;
struct TYPE_3__ {unsigned int nr_frags; int * frags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 TYPE_1__* FUNC_5 (struct sk_buff*) ;
 unsigned int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static netdev_features_t FUNC_8(struct sk_buff *VAR_3,
          struct net_device *VAR_4,
          netdev_features_t VAR_5)
{
 unsigned int VAR_6, VAR_7;
 unsigned int VAR_8;




 if (!FUNC_4(VAR_3))
  return VAR_5;


 VAR_8 = FUNC_6(VAR_3);
 if (FUNC_1(VAR_3)->protocol == VAR_0)
  VAR_8 += FUNC_7(VAR_3);





 if (!FUNC_0(FUNC_3(VAR_3) - VAR_8, VAR_2))
  return VAR_5 & ~VAR_1;

 VAR_6 = FUNC_5(VAR_3)->nr_frags;

 VAR_6--;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  const skb_frag_t *VAR_9 = &FUNC_5(VAR_3)->frags[VAR_7];

  if (!FUNC_0(FUNC_2(VAR_9), VAR_2))
   return VAR_5 & ~VAR_1;
 }
 return VAR_5;
}
