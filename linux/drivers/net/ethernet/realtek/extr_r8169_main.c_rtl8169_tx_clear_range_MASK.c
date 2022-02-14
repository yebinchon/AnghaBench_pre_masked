
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct sk_buff {int dummy; } ;
struct rtl8169_private {scalar_t__ TxDescArray; struct ring_info* tx_skb; } ;
struct ring_info {unsigned int len; struct sk_buff* skb; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct ring_info*,scalar_t__) ;
 int FUNC_2 (struct rtl8169_private*) ;

__attribute__((used)) static void FUNC_3(struct rtl8169_private *VAR_1, u32 VAR_2,
       unsigned int VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  unsigned int VAR_5 = (VAR_2 + VAR_4) % VAR_0;
  struct ring_info *VAR_6 = VAR_1->tx_skb + VAR_5;
  unsigned int VAR_7 = VAR_6->len;

  if (VAR_7) {
   struct sk_buff *VAR_8 = VAR_6->skb;

   FUNC_1(FUNC_2(VAR_1), VAR_6,
          VAR_1->TxDescArray + VAR_5);
   if (VAR_8) {
    FUNC_0(VAR_8);
    VAR_6->skb = ((void*)0);
   }
  }
 }
}
