
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int protocol; int ip_summed; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,int const*,int) ;
 int FUNC_4 (struct sk_buff*,int,int) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_1, const u8 *VAR_2,
          int VAR_3, int VAR_4, int VAR_5)
{
 struct sk_buff *VAR_6;

 VAR_6 = FUNC_1(VAR_1, VAR_3);
 if (!VAR_6)
  return;
 FUNC_3(VAR_6, VAR_2, VAR_3);





 FUNC_4(VAR_6, VAR_4, VAR_5);

 VAR_6->ip_summed = VAR_0;
 VAR_6->protocol = FUNC_0(VAR_6, VAR_1);
 FUNC_2(VAR_6);
}
