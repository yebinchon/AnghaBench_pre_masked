
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int daddr; } ;


 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 struct sk_buff* FUNC_4 (struct net_device*,struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct net_device*,struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct net_device *VAR_0,
      struct sock *VAR_1,
      struct sk_buff *VAR_2)
{

 if (FUNC_2(FUNC_0(VAR_2)->daddr) ||
     FUNC_1(FUNC_0(VAR_2)->daddr))
  return VAR_2;

 if (FUNC_3(VAR_0))
  return FUNC_4(VAR_0, VAR_1, VAR_2);

 return FUNC_5(VAR_0, VAR_2);
}
