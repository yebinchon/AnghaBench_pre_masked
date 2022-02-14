
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct rtllib_network {int dummy; } ;
struct rtllib_device {struct rtllib_network current_network; } ;


 struct sk_buff* FUNC_0 (struct rtllib_network*,struct rtllib_device*,int ) ;
 struct sk_buff* FUNC_1 (struct rtllib_network*,struct rtllib_device*,int ) ;
 int FUNC_2 (struct sk_buff*,struct rtllib_device*) ;

void FUNC_3(struct rtllib_device *VAR_0, bool VAR_1, u16 VAR_2)
{
 struct rtllib_network *VAR_3 = &VAR_0->current_network;
 struct sk_buff *VAR_4;

 if (VAR_1)
  VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_2);
 else
  VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_2);

 if (VAR_4)
  FUNC_2(VAR_4, VAR_0);
}
