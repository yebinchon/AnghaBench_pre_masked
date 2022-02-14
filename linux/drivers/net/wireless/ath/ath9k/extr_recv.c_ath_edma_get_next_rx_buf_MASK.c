
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int dummy; } ;
struct ath_rxbuf {int dummy; } ;
struct ath_rx_status {int dummy; } ;
typedef enum ath9k_rx_qtype { ____Placeholder_ath9k_rx_qtype } ath9k_rx_qtype ;


 scalar_t__ FUNC_0 (struct ath_softc*,int,struct ath_rx_status*,struct ath_rxbuf**) ;

__attribute__((used)) static struct ath_rxbuf *FUNC_1(struct ath_softc *VAR_0,
      struct ath_rx_status *VAR_1,
      enum ath9k_rx_qtype VAR_2)
{
 struct ath_rxbuf *VAR_3 = ((void*)0);

 while (FUNC_0(VAR_0, VAR_2, VAR_1, &VAR_3)) {
  if (!VAR_3)
   continue;

  return VAR_3;
 }
 return ((void*)0);
}
