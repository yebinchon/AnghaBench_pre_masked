
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;




 struct sk_buff* FUNC_0 (struct net_device*,struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct net_device*,struct sock*,struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct net_device *VAR_0,
      struct sock *VAR_1,
      struct sk_buff *VAR_2,
      u16 VAR_3)
{
 switch (VAR_3) {
 case 129:
  return FUNC_1(VAR_0, VAR_1, VAR_2);
 case 128:
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 }

 return VAR_2;
}
