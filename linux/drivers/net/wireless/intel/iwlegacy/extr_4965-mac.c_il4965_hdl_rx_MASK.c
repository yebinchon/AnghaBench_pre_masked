
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int raw; } ;
struct TYPE_4__ {scalar_t__ cmd; } ;
struct il_rx_pkt {TYPE_2__ u; TYPE_1__ hdr; } ;
struct il_rx_phy_res {int cfg_phy_cnt; int byte_count; int rate_n_flags; int phy_flags; int channel; int beacon_time_stamp; int timestamp; } ;
struct il_rx_mpdu_res_start {int byte_count; } ;
struct il_rx_buf {int dummy; } ;
struct TYPE_6__ {int ampdu_ref; struct il_rx_phy_res last_phy_res; int last_phy_res_valid; } ;
struct il_priv {TYPE_3__ _4965; void* ucode_beacon_time; } ;
struct ieee80211_rx_status {int antenna; int ampdu_reference; int flag; int enc_flags; int bw; int encoding; scalar_t__ mactime; int signal; int band; int rate_idx; int freq; } ;
struct ieee80211_hdr {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,void*) ;
 int FUNC_2 (char*,int ,unsigned long long) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct il_priv*,struct il_rx_phy_res*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct il_priv*,struct ieee80211_hdr*,int,int,struct il_rx_buf*,struct ieee80211_rx_status*) ;
 int FUNC_8 (struct il_priv*,void*) ;
 int FUNC_9 (int) ;
 void* FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;
 struct il_rx_pkt* FUNC_12 (struct il_rx_buf*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void
FUNC_14(struct il_priv *VAR_19, struct il_rx_buf *VAR_20)
{
 struct ieee80211_hdr *VAR_21;
 struct ieee80211_rx_status VAR_22 = {};
 struct il_rx_pkt *VAR_23 = FUNC_12(VAR_20);
 struct il_rx_phy_res *VAR_24;
 __le32 VAR_25;
 struct il_rx_mpdu_res_start *VAR_26;
 u32 VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 if (VAR_23->hdr.cmd == VAR_2) {
  VAR_24 = (struct il_rx_phy_res *)VAR_23->u.raw;
  VAR_21 =
      (struct ieee80211_hdr *)(VAR_23->u.raw + sizeof(*VAR_24) +
          VAR_24->cfg_phy_cnt);

  VAR_27 = FUNC_9(VAR_24->byte_count);
  VAR_25 =
      *(__le32 *) (VAR_23->u.raw + sizeof(*VAR_24) +
     VAR_24->cfg_phy_cnt + VAR_27);
  VAR_28 = FUNC_10(VAR_25);
 } else {
  if (!VAR_19->_4965.last_phy_res_valid) {
   FUNC_3("MPDU frame without cached PHY data\n");
   return;
  }
  VAR_24 = &VAR_19->_4965.last_phy_res;
  VAR_26 = (struct il_rx_mpdu_res_start *)VAR_23->u.raw;
  VAR_21 = (struct ieee80211_hdr *)(VAR_23->u.raw + sizeof(*VAR_26));
  VAR_27 = FUNC_9(VAR_26->byte_count);
  VAR_25 = *(__le32 *) (VAR_23->u.raw + sizeof(*VAR_26) + VAR_27);
  VAR_28 =
      FUNC_8(VAR_19, FUNC_10(VAR_25));
 }

 if ((FUNC_13(VAR_24->cfg_phy_cnt > 20))) {
  FUNC_0("dsp size out of range [0,20]: %d\n",
         VAR_24->cfg_phy_cnt);
  return;
 }

 if (!(VAR_25 & VAR_17) ||
     !(VAR_25 & VAR_18)) {
  FUNC_1("Bad CRC or FIFO: 0x%08X.\n", FUNC_10(VAR_25));
  return;
 }


 VAR_29 = FUNC_10(VAR_24->rate_n_flags);


 VAR_22.mactime = FUNC_11(VAR_24->timestamp);
 VAR_22.band =
     (VAR_24->
      phy_flags & VAR_15) ? VAR_0 :
     VAR_1;
 VAR_22.freq =
     FUNC_4(FUNC_9(VAR_24->channel),
        VAR_22.band);
 VAR_22.rate_idx =
     FUNC_6(VAR_29, VAR_22.band);
 VAR_22.flag = 0;





 VAR_19->ucode_beacon_time = FUNC_10(VAR_24->beacon_time_stamp);


 VAR_22.signal = FUNC_5(VAR_19, VAR_24);

 FUNC_2("Rssi %d, TSF %llu\n", VAR_22.signal,
  (unsigned long long)VAR_22.mactime);
 VAR_22.antenna =
     (FUNC_9(VAR_24->phy_flags) & VAR_13) >>
     VAR_14;


 if (VAR_24->phy_flags & VAR_16)
  VAR_22.enc_flags |= VAR_8;


 if (VAR_29 & VAR_6)
  VAR_22.encoding = VAR_10;
 if (VAR_29 & VAR_5)
  VAR_22.bw = VAR_4;
 else
  VAR_22.bw = VAR_3;
 if (VAR_29 & VAR_7)
  VAR_22.enc_flags |= VAR_9;

 if (VAR_24->phy_flags & VAR_12) {





  VAR_22.flag |= VAR_11;
  VAR_22.ampdu_reference = VAR_19->_4965.ampdu_ref;
 }

 FUNC_7(VAR_19, VAR_21, VAR_27, VAR_28, VAR_20,
           &VAR_22);
}
