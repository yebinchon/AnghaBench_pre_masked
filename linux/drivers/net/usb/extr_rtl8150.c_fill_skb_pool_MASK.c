
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {struct sk_buff** rx_skb_pool; } ;
typedef TYPE_1__ rtl8150_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_2(rtl8150_t *VAR_2)
{
 struct sk_buff *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2->rx_skb_pool[VAR_4])
   continue;
  VAR_3 = FUNC_0(VAR_0 + 2);
  if (!VAR_3) {
   return;
  }
  FUNC_1(VAR_3, 2);
  VAR_2->rx_skb_pool[VAR_4] = VAR_3;
 }
}
