
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 struct sk_buff* FUNC_0 (struct net_device*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct sk_buff*) ;

unsigned int FUNC_2(struct net_device *VAR_0, unsigned int VAR_1)
{
 struct sk_buff *VAR_2;
 u8 VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 if (!VAR_2)
  return 0;

 FUNC_1(VAR_2);

 return VAR_3;
}
