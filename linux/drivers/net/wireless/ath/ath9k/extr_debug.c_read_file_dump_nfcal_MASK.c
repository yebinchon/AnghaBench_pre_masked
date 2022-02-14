
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct seq_file {int private; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ieee80211_conf {int dummy; } ;
struct ath_softc {TYPE_2__* cur_chan; struct ath_hw* sc_ah; } ;
struct ath_hw {int rxchainmask; int noise; } ;
struct ath_common {TYPE_3__* hw; } ;
struct ath9k_nfcal_hist {int invalidNFcount; int * nfCalBuffer; int privNF; } ;
struct TYPE_6__ {struct ieee80211_conf conf; } ;
struct TYPE_4__ {struct ath9k_nfcal_hist* nfCalHist; } ;
struct TYPE_5__ {TYPE_1__ caldata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ieee80211_conf*) ;
 struct ieee80211_hw* FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,int,...) ;
 int FUNC_4 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_5(struct seq_file *VAR_3, void *VAR_4)
{
 struct ieee80211_hw *VAR_5 = FUNC_2(VAR_3->private);
 struct ath_softc *VAR_6 = VAR_5->priv;
 struct ath_hw *VAR_7 = VAR_6->sc_ah;
 struct ath9k_nfcal_hist *VAR_8 = VAR_6->cur_chan->caldata.nfCalHist;
 struct ath_common *VAR_9 = FUNC_0(VAR_7);
 struct ieee80211_conf *VAR_10 = &VAR_9->hw->conf;
 u32 VAR_11, VAR_12;
 u8 VAR_13 = (VAR_7->rxchainmask << 3) | VAR_7->rxchainmask;
 u8 VAR_14;

 FUNC_3(VAR_3, "Channel Noise Floor : %d\n", VAR_7->noise);
 FUNC_4(VAR_3, "Chain | privNF | # Readings | NF Readings\n");
 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  if (!(VAR_13 & (1 << VAR_11)) ||
      ((VAR_11 >= VAR_0) && !FUNC_1(VAR_10)))
   continue;

  VAR_14 = VAR_1 - VAR_8[VAR_11].invalidNFcount;
  FUNC_3(VAR_3, " %d\t %d\t %d\t\t", VAR_11, VAR_8[VAR_11].privNF, VAR_14);
  for (VAR_12 = 0; VAR_12 < VAR_14; VAR_12++)
   FUNC_3(VAR_3, " %d", VAR_8[VAR_11].nfCalBuffer[VAR_12]);
  FUNC_4(VAR_3, "\n");
 }

 return 0;
}
