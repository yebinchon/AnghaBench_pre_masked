
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct ath_rxbuf* buf_hold; } ;
struct ath_softc {TYPE_1__ rx; } ;
struct ath_rxbuf {int dummy; } ;


 int FUNC_0 (struct ath_softc*,struct ath_rxbuf*,int) ;

__attribute__((used)) static void FUNC_1(struct ath_softc *VAR_0, struct ath_rxbuf *VAR_1,
         bool VAR_2)
{
 if (VAR_0->rx.buf_hold)
  FUNC_0(VAR_0, VAR_0->rx.buf_hold, VAR_2);

 VAR_0->rx.buf_hold = VAR_1;
}
