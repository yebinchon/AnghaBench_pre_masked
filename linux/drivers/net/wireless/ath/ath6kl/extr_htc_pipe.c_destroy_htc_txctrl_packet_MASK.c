
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct htc_packet {struct sk_buff* skb; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct htc_packet*) ;

__attribute__((used)) static void FUNC_2(struct htc_packet *VAR_0)
{
 struct sk_buff *VAR_1;
 VAR_1 = VAR_0->skb;
 FUNC_0(VAR_1);
 FUNC_1(VAR_0);
}
