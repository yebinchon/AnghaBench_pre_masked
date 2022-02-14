
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;




 struct sk_buff* FUNC_0 (struct net_device*,struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct net_device*,struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct net_device *VAR_0,
      struct sk_buff *VAR_1,
      u16 VAR_2)
{
 switch (VAR_2) {
 case 129:
  return FUNC_1(VAR_0, VAR_1);
 case 128:
  return FUNC_0(VAR_0, VAR_1);
 }

 return VAR_1;
}
