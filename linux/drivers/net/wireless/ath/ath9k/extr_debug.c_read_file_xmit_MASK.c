
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int private; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ieee80211_hw* FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct seq_file*,char*,char*,char*,char*,char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_21, void *VAR_22)
{
 struct ieee80211_hw *VAR_23 = FUNC_1(VAR_21->private);
 struct ath_softc *VAR_24 = VAR_23->priv;

 FUNC_2(VAR_21, "%30s %10s%10s%10s\n\n", "BE", "BK", "VI", "VO");

 FUNC_0("MPDUs Queued:    ", VAR_11);
 FUNC_0("MPDUs Completed: ", VAR_5);
 FUNC_0("MPDUs XRetried:  ", VAR_19);
 FUNC_0("Aggregates:      ", VAR_0);
 FUNC_0("AMPDUs Queued HW:", VAR_2);
 FUNC_0("AMPDUs Completed:", VAR_1);
 FUNC_0("AMPDUs Retried:  ", VAR_3);
 FUNC_0("AMPDUs XRetried: ", VAR_4);
 FUNC_0("TXERR Filtered:  ", VAR_15);
 FUNC_0("FIFO Underrun:   ", VAR_9);
 FUNC_0("TXOP Exceeded:   ", VAR_20);
 FUNC_0("TXTIMER Expiry:  ", VAR_12);
 FUNC_0("DESC CFG Error:  ", VAR_8);
 FUNC_0("DATA Underrun:   ", VAR_6);
 FUNC_0("DELIM Underrun:  ", VAR_7);
 FUNC_0("TX-Pkts-All:     ", VAR_14);
 FUNC_0("TX-Bytes-All:    ", VAR_13);
 FUNC_0("HW-put-tx-buf:   ", VAR_10);
 FUNC_0("HW-tx-start:     ", VAR_18);
 FUNC_0("HW-tx-proc-desc: ", VAR_17);
 FUNC_0("TX-Failed:       ", VAR_16);

 return 0;
}
