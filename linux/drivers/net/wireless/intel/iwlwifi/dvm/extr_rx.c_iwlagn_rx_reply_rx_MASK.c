
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_rx_phy_res {int cfg_phy_cnt; int rate_n_flags; int phy_flags; int channel; int beacon_time_stamp; int timestamp; } ;
struct iwl_rx_packet {int data; } ;
struct iwl_rx_mpdu_res_start {int byte_count; } ;
struct iwl_rx_cmd_buffer {int dummy; } ;
struct iwl_priv {int ampdu_ref; void* ucode_beacon_time; struct iwl_rx_phy_res last_phy_res; int last_phy_res_valid; } ;
struct ieee80211_rx_status {int antenna; int enc_flags; int bw; int encoding; int ampdu_reference; int flag; scalar_t__ mactime; int signal; int band; int rate_idx; int freq; } ;
struct ieee80211_hdr {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (struct iwl_priv*,char*,int) ;
 int FUNC_1 (struct iwl_priv*,char*,void*) ;
 int FUNC_2 (struct iwl_priv*,char*,int ,unsigned long long) ;
 int FUNC_3 (struct iwl_priv*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
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
 int VAR_19 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct iwl_priv*,struct iwl_rx_phy_res*) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (struct iwl_priv*,struct ieee80211_hdr*,int,int,struct iwl_rx_cmd_buffer*,struct ieee80211_rx_status*) ;
 int FUNC_8 (struct iwl_priv*,void*) ;
 int FUNC_9 (int) ;
 void* FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int ) ;
 struct iwl_rx_packet* FUNC_12 (struct iwl_rx_cmd_buffer*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct iwl_priv *VAR_20,
          struct iwl_rx_cmd_buffer *VAR_21)
{
 struct ieee80211_hdr *VAR_22;
 struct ieee80211_rx_status VAR_23 = {};
 struct iwl_rx_packet *VAR_24 = FUNC_12(VAR_21);
 struct iwl_rx_phy_res *VAR_25;
 __le32 VAR_26;
 struct iwl_rx_mpdu_res_start *VAR_27;
 u32 VAR_28;
 u32 VAR_29;
 u32 VAR_30;

 if (!VAR_20->last_phy_res_valid) {
  FUNC_3(VAR_20, "MPDU frame without cached PHY data\n");
  return;
 }
 VAR_25 = &VAR_20->last_phy_res;
 VAR_27 = (struct iwl_rx_mpdu_res_start *)VAR_24->data;
 VAR_22 = (struct ieee80211_hdr *)(VAR_24->data + sizeof(*VAR_27));
 VAR_28 = FUNC_9(VAR_27->byte_count);
 VAR_26 = *(__le32 *)(VAR_24->data + sizeof(*VAR_27) + VAR_28);
 VAR_29 = FUNC_8(VAR_20,
        FUNC_10(VAR_26));

 if ((FUNC_13(VAR_25->cfg_phy_cnt > 20))) {
  FUNC_0(VAR_20, "dsp size out of range [0,20]: %d\n",
    VAR_25->cfg_phy_cnt);
  return;
 }

 if (!(VAR_26 & VAR_18) ||
     !(VAR_26 & VAR_19)) {
  FUNC_1(VAR_20, "Bad CRC or FIFO: 0x%08X.\n",
    FUNC_10(VAR_26));
  return;
 }


 VAR_30 = FUNC_10(VAR_25->rate_n_flags);


 VAR_23.mactime = FUNC_11(VAR_25->timestamp);
 VAR_23.band = (VAR_25->phy_flags & VAR_16) ?
    VAR_0 : VAR_1;
 VAR_23.freq =
  FUNC_4(FUNC_9(VAR_25->channel),
            VAR_23.band);
 VAR_23.rate_idx =
  FUNC_6(VAR_30, VAR_23.band);
 VAR_23.flag = 0;





 VAR_20->ucode_beacon_time = FUNC_10(VAR_25->beacon_time_stamp);


 VAR_23.signal = FUNC_5(VAR_20, VAR_25);

 FUNC_2(VAR_20, "Rssi %d, TSF %llu\n",
  VAR_23.signal, (unsigned long long)VAR_23.mactime);
 VAR_23.antenna =
  (FUNC_9(VAR_25->phy_flags) & VAR_14)
  >> VAR_15;


 if (VAR_25->phy_flags & VAR_17)
  VAR_23.enc_flags |= VAR_9;

 if (VAR_25->phy_flags & VAR_13) {





  VAR_23.flag |= VAR_12;
  VAR_23.ampdu_reference = VAR_20->ampdu_ref;
 }


 if (VAR_30 & VAR_6)
  VAR_23.encoding = VAR_11;
 if (VAR_30 & VAR_5)
  VAR_23.bw = VAR_3;
 else
  VAR_23.bw = VAR_2;
 if (VAR_30 & VAR_7)
  VAR_23.enc_flags |= VAR_10;
 if (VAR_30 & VAR_4)
  VAR_23.enc_flags |= VAR_8;

 FUNC_7(VAR_20, VAR_22, VAR_28, VAR_29,
        VAR_21, &VAR_23);
}
