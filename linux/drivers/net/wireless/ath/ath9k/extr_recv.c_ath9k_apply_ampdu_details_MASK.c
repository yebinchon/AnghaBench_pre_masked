
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_rx_status {int flag; int ampdu_reference; } ;
struct TYPE_2__ {int ampdu_ref; } ;
struct ath_softc {TYPE_1__ rx; } ;
struct ath_rx_status {int rs_flags; int rs_moreaggr; scalar_t__ rs_isaggr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct ath_softc *VAR_5,
 struct ath_rx_status *VAR_6, struct ieee80211_rx_status *VAR_7)
{
 if (VAR_6->rs_isaggr) {
  VAR_7->flag |= VAR_2 | VAR_4;

  VAR_7->ampdu_reference = VAR_5->rx.ampdu_ref;

  if (!VAR_6->rs_moreaggr) {
   VAR_7->flag |= VAR_3;
   VAR_5->rx.ampdu_ref++;
  }

  if (VAR_6->rs_flags & VAR_0)
   VAR_7->flag |= VAR_1;
 }
}
