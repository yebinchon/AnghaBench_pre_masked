
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,struct sk_buff*,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static u16 FUNC_3(struct net_device *VAR_0, struct sk_buff *VAR_1,
       struct net_device *VAR_2)
{
 u16 VAR_3;




 if (FUNC_2(VAR_1))
  VAR_3 = FUNC_1(VAR_1);
 else
  VAR_3 = FUNC_0(VAR_0, VAR_1, ((void*)0));

 return VAR_3;
}
