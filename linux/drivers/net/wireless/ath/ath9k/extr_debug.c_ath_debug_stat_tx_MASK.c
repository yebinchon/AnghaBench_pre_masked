
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ath_txq {int axq_qnum; } ;
struct ath_tx_status {int ts_status; int ts_flags; } ;
struct TYPE_6__ {TYPE_1__* txstats; } ;
struct TYPE_7__ {TYPE_2__ stats; } ;
struct ath_softc {TYPE_3__ debug; } ;
struct ath_buf {TYPE_4__* bf_mpdu; } ;
struct TYPE_8__ {scalar_t__ len; } ;
struct TYPE_5__ {int tx_bytes_all; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct ath_softc*,int,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (struct ath_buf*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

void FUNC_2(struct ath_softc *VAR_21, struct ath_buf *VAR_22,
         struct ath_tx_status *VAR_23, struct ath_txq *VAR_24,
         unsigned int VAR_25)
{
 int VAR_26 = VAR_24->axq_qnum;

 FUNC_0(VAR_21, VAR_26, VAR_17);
 VAR_21->debug.stats.txstats[VAR_26].tx_bytes_all += VAR_22->bf_mpdu->len;

 if (FUNC_1(VAR_22)) {
  if (VAR_25 & VAR_8)
   FUNC_0(VAR_21, VAR_26, VAR_10);
  else
   FUNC_0(VAR_21, VAR_26, VAR_9);
 } else {
  if (VAR_23->ts_status & VAR_3)
   FUNC_0(VAR_21, VAR_26, VAR_19);
  else
   FUNC_0(VAR_21, VAR_26, VAR_11);
 }

 if (VAR_23->ts_status & VAR_1)
  FUNC_0(VAR_21, VAR_26, VAR_18);
 if (VAR_23->ts_status & VAR_0)
  FUNC_0(VAR_21, VAR_26, VAR_15);
 if (VAR_23->ts_status & VAR_4)
  FUNC_0(VAR_21, VAR_26, VAR_20);
 if (VAR_23->ts_status & VAR_2)
  FUNC_0(VAR_21, VAR_26, VAR_16);
 if (VAR_23->ts_flags & VAR_7)
  FUNC_0(VAR_21, VAR_26, VAR_14);
 if (VAR_23->ts_flags & VAR_5)
  FUNC_0(VAR_21, VAR_26, VAR_12);
 if (VAR_23->ts_flags & VAR_6)
  FUNC_0(VAR_21, VAR_26, VAR_13);
}
