
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int rxbuf; struct ath_rx_edma* rx_edma; } ;
struct ath_softc {TYPE_1__ rx; } ;
struct ath_rxbuf {int list; } ;
struct ath_rx_edma {int rx_fifo; } ;
typedef enum ath9k_rx_qtype { ____Placeholder_ath9k_rx_qtype } ath9k_rx_qtype ;


 int FUNC_0 (int) ;
 struct ath_rxbuf* FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void FUNC_4(struct ath_softc *VAR_0,
     enum ath9k_rx_qtype VAR_1)
{
 struct ath_rxbuf *VAR_2;
 struct ath_rx_edma *VAR_3;
 struct sk_buff *VAR_4;

 VAR_3 = &VAR_0->rx.rx_edma[VAR_1];

 while ((VAR_4 = FUNC_2(&VAR_3->rx_fifo)) != ((void*)0)) {
  VAR_2 = FUNC_1(VAR_4);
  FUNC_0(!VAR_2);
  FUNC_3(&VAR_2->list, &VAR_0->rx.rxbuf);
 }
}
