
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl8169_private {int Rx_databuff; int tx_skb; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct rtl8169_private*) ;
 int FUNC_2 (struct rtl8169_private*) ;

__attribute__((used)) static int FUNC_3(struct rtl8169_private *VAR_0)
{
 FUNC_1(VAR_0);

 FUNC_0(VAR_0->tx_skb, 0, sizeof(VAR_0->tx_skb));
 FUNC_0(VAR_0->Rx_databuff, 0, sizeof(VAR_0->Rx_databuff));

 return FUNC_2(VAR_0);
}
