
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int protocol; int pkt_type; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 VAR_1->pkt_type = VAR_0;
 VAR_1->protocol = FUNC_0(VAR_1, VAR_2);

 FUNC_2(VAR_1);
 if (!FUNC_4(VAR_1))
  FUNC_3(VAR_1);
 FUNC_1(VAR_1);
}
