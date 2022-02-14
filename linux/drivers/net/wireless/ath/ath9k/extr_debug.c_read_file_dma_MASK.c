
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int private; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {struct ath_hw* sc_ah; } ;
struct ath_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ath_hw*,scalar_t__) ;
 int FUNC_1 (struct ath_hw*,int ,int) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (struct ath_softc*) ;
 struct ieee80211_hw* FUNC_4 (int ) ;
 int FUNC_5 (struct seq_file*,char*,int,...) ;
 int FUNC_6 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_7(struct seq_file *VAR_10, void *VAR_11)
{
 struct ieee80211_hw *VAR_12 = FUNC_4(VAR_10->private);
 struct ath_softc *VAR_13 = VAR_12->priv;
 struct ath_hw *VAR_14 = VAR_13->sc_ah;
 u32 VAR_15[VAR_8];
 int VAR_16, VAR_17 = 0, VAR_18 = 0;
 u32 *VAR_19 = &VAR_15[0], *VAR_20 = &VAR_15[4];

 FUNC_3(VAR_13);

 FUNC_1(VAR_14, VAR_2,
    ((VAR_3 << VAR_4) |
     (VAR_5 <<
      VAR_6)));

 FUNC_6(VAR_10, "Raw DMA Debug values:\n");

 for (VAR_16 = 0; VAR_16 < VAR_8; VAR_16++) {
  if (VAR_16 % 4 == 0)
   FUNC_6(VAR_10, "\n");

  VAR_15[VAR_16] = FUNC_0(VAR_14, VAR_1 + (VAR_16 * sizeof(u32)));
  FUNC_5(VAR_10, "%d: %08x ", VAR_16, VAR_15[VAR_16]);
 }

 FUNC_6(VAR_10, "\n\n");
 FUNC_6(VAR_10, "Num QCU: chain_st fsp_ok fsp_st DCU: chain_st\n");

 for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++, VAR_17 += 4, VAR_18 += 5) {
  if (VAR_16 == 8) {
   VAR_17 = 0;
   VAR_19++;
  }

  if (VAR_16 == 6) {
   VAR_18 = 0;
   VAR_20++;
  }

  FUNC_5(VAR_10, "%2d          %2x      %1x     %2x           %2x\n",
      VAR_16, (*VAR_19 & (0x7 << VAR_17)) >> VAR_17,
      (*VAR_19 & (0x8 << VAR_17)) >> (VAR_17 + 3),
      (VAR_15[2] & (0x7 << (VAR_16 * 3))) >> (VAR_16 * 3),
      (*VAR_20 & (0x1f << VAR_18)) >> VAR_18);
 }

 FUNC_6(VAR_10, "\n");

 FUNC_5(VAR_10, "qcu_stitch state:   %2x    qcu_fetch state:        %2x\n",
     (VAR_15[3] & 0x003c0000) >> 18, (VAR_15[3] & 0x03c00000) >> 22);
 FUNC_5(VAR_10, "qcu_complete state: %2x    dcu_complete state:     %2x\n",
     (VAR_15[3] & 0x1c000000) >> 26, (VAR_15[6] & 0x3));
 FUNC_5(VAR_10, "dcu_arb state:      %2x    dcu_fp state:           %2x\n",
     (VAR_15[5] & 0x06000000) >> 25, (VAR_15[5] & 0x38000000) >> 27);
 FUNC_5(VAR_10, "chan_idle_dur:     %3d    chan_idle_dur_valid:     %1d\n",
     (VAR_15[6] & 0x000003fc) >> 2, (VAR_15[6] & 0x00000400) >> 10);
 FUNC_5(VAR_10, "txfifo_valid_0:      %1d    txfifo_valid_1:          %1d\n",
     (VAR_15[6] & 0x00000800) >> 11, (VAR_15[6] & 0x00001000) >> 12);
 FUNC_5(VAR_10, "txfifo_dcu_num_0:   %2d    txfifo_dcu_num_1:       %2d\n",
     (VAR_15[6] & 0x0001e000) >> 13, (VAR_15[6] & 0x001e0000) >> 17);

 FUNC_5(VAR_10, "pcu observe: 0x%x\n", FUNC_0(VAR_14, VAR_7));
 FUNC_5(VAR_10, "AR_CR: 0x%x\n", FUNC_0(VAR_14, VAR_0));

 FUNC_2(VAR_13);

 return 0;
}
