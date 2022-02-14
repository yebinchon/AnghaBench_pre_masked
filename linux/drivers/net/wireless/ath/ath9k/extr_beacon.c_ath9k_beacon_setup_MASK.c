
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_9__ {scalar_t__ use_short_preamble; } ;
struct ieee80211_vif {TYPE_3__ bss_conf; } ;
struct ieee80211_supported_band {TYPE_4__* bitrates; } ;
struct ath_tx_info {int flags; int is_first; int is_last; TYPE_6__* rates; int qcu; int * buf_len; int * buf_addr; int keytype; int keyix; int * txpower; int type; scalar_t__ pkt_len; } ;
struct TYPE_11__ {int beaconq; } ;
struct TYPE_8__ {TYPE_1__* chan; } ;
struct ath_softc {TYPE_5__ beacon; TYPE_2__ cur_chandef; struct ath_hw* sc_ah; } ;
struct ath_hw {int txchainmask; } ;
struct ath_common {struct ieee80211_supported_band* sbands; } ;
struct ath_buf {int bf_desc; int bf_buf_addr; struct sk_buff* bf_mpdu; } ;
typedef int info ;
struct TYPE_12__ {int Tries; int Rate; int ChSel; } ;
struct TYPE_10__ {int hw_value; int hw_value_short; } ;
struct TYPE_7__ {size_t band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct ath_common* FUNC_0 (struct ath_hw*) ;
 int FUNC_1 (struct ath_hw*,int ,struct ath_tx_info*) ;
 int FUNC_2 (struct ath_softc*,int,int) ;
 int FUNC_3 (struct ath_tx_info*,int ,int) ;
 int FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct ath_softc *VAR_7, struct ieee80211_vif *VAR_8,
        struct ath_buf *VAR_9, int VAR_10)
{
 struct sk_buff *VAR_11 = VAR_9->bf_mpdu;
 struct ath_hw *VAR_12 = VAR_7->sc_ah;
 struct ath_common *VAR_13 = FUNC_0(VAR_12);
 struct ath_tx_info VAR_14;
 struct ieee80211_supported_band *VAR_15;
 u8 VAR_16 = VAR_12->txchainmask;
 u8 VAR_17, VAR_18 = 0;

 VAR_15 = &VAR_13->sbands[VAR_7->cur_chandef.chan->band];
 VAR_18 = VAR_15->bitrates[VAR_10].hw_value;
 if (VAR_8->bss_conf.use_short_preamble)
  VAR_18 |= VAR_15->bitrates[VAR_10].hw_value_short;

 FUNC_3(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.pkt_len = VAR_11->len + VAR_5;
 VAR_14.type = VAR_1;
 for (VAR_17 = 0; VAR_17 < 4; VAR_17++)
  VAR_14.txpower[VAR_17] = VAR_6;
 VAR_14.keyix = VAR_4;
 VAR_14.keytype = VAR_0;
 VAR_14.flags = VAR_3 | VAR_2;

 VAR_14.buf_addr[0] = VAR_9->bf_buf_addr;
 VAR_14.buf_len[0] = FUNC_4(VAR_11->len, 4);

 VAR_14.is_first = 1;
 VAR_14.is_last = 1;

 VAR_14.qcu = VAR_7->beacon.beaconq;

 VAR_14.rates[0].Tries = 1;
 VAR_14.rates[0].Rate = VAR_18;
 VAR_14.rates[0].ChSel = FUNC_2(VAR_7, VAR_16, VAR_18);

 FUNC_1(VAR_12, VAR_9->bf_desc, &VAR_14);
}
