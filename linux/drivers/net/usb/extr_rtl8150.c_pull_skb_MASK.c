
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_3__ {struct sk_buff** rx_skb_pool; } ;
typedef TYPE_1__ rtl8150_t ;


 int VAR_0 ;

__attribute__((used)) static inline struct sk_buff *FUNC_0(rtl8150_t *VAR_1)
{
 struct sk_buff *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1->rx_skb_pool[VAR_3]) {
   VAR_2 = VAR_1->rx_skb_pool[VAR_3];
   VAR_1->rx_skb_pool[VAR_3] = ((void*)0);
   return VAR_2;
  }
 }
 return ((void*)0);
}
