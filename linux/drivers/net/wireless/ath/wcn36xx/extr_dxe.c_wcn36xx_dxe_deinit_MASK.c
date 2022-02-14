
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcn36xx {int dxe_rx_h_ch; int dxe_rx_l_ch; int * tx_ack_skb; int hw; int rx_irq; int tx_irq; } ;


 int FUNC_0 (int ,struct wcn36xx*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct wcn36xx*,int *) ;

void FUNC_3(struct wcn36xx *VAR_0)
{
 FUNC_0(VAR_0->tx_irq, VAR_0);
 FUNC_0(VAR_0->rx_irq, VAR_0);

 if (VAR_0->tx_ack_skb) {
  FUNC_1(VAR_0->hw, VAR_0->tx_ack_skb);
  VAR_0->tx_ack_skb = ((void*)0);
 }

 FUNC_2(VAR_0, &VAR_0->dxe_rx_l_ch);
 FUNC_2(VAR_0, &VAR_0->dxe_rx_h_ch);
}
