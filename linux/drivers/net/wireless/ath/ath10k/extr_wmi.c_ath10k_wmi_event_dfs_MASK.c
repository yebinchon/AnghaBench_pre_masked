
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct wmi_phyerr_ev_arg {int buf_len; int * buf; int tsf_timestamp; int rssi_combined; int phy_err_code; } ;
struct phyerr_tlv {int tag; int sig; int len; } ;
struct phyerr_radar_report {int dummy; } ;
struct phyerr_fft_report {int dummy; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;


 int FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,char*,int,int,int ,...) ;
 int FUNC_4 (struct ath10k*,struct wmi_phyerr_ev_arg*,struct phyerr_fft_report const*,int ) ;
 int FUNC_5 (struct ath10k*,struct wmi_phyerr_ev_arg*,struct phyerr_radar_report const*,int ) ;
 int FUNC_6 (struct ath10k*,char*,int) ;
 int VAR_2 ;

void FUNC_7(struct ath10k *VAR_3,
     struct wmi_phyerr_ev_arg *VAR_4,
     u64 VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 const struct phyerr_tlv *VAR_10;
 const struct phyerr_radar_report *VAR_11;
 const struct phyerr_fft_report *VAR_12;
 const u8 *VAR_13;

 VAR_6 = VAR_4->buf_len;
 FUNC_3(VAR_3, VAR_0,
     "wmi event dfs err_code %d rssi %d tsfl 0x%X tsf64 0x%llX len %d\n",
     VAR_4->phy_err_code, VAR_4->rssi_combined,
     VAR_4->tsf_timestamp, VAR_5, VAR_6);


 if (!FUNC_1(VAR_1))
  return;

 FUNC_0(VAR_3, VAR_2);

 while (VAR_9 < VAR_6) {
  if (VAR_9 + sizeof(*VAR_10) > VAR_6) {
   FUNC_6(VAR_3, "too short buf for tlv header (%d)\n",
        VAR_9);
   return;
  }

  VAR_10 = (struct phyerr_tlv *)&VAR_4->buf[VAR_9];
  VAR_7 = FUNC_2(VAR_10->len);
  VAR_13 = &VAR_4->buf[VAR_9 + sizeof(*VAR_10)];
  FUNC_3(VAR_3, VAR_0,
      "wmi event dfs tlv_len %d tlv_tag 0x%02X tlv_sig 0x%02X\n",
      VAR_7, VAR_10->tag, VAR_10->sig);

  switch (VAR_10->tag) {
  case 129:
   if (VAR_9 + sizeof(*VAR_10) + sizeof(*VAR_11) > VAR_6) {
    FUNC_6(VAR_3, "too short radar pulse summary (%d)\n",
         VAR_9);
    return;
   }

   VAR_11 = (struct phyerr_radar_report *)VAR_13;
   FUNC_5(VAR_3, VAR_4, VAR_11, VAR_5);
   break;
  case 128:
   if (VAR_9 + sizeof(*VAR_10) + sizeof(*VAR_12) > VAR_6) {
    FUNC_6(VAR_3, "too short fft report (%d)\n",
         VAR_9);
    return;
   }

   VAR_12 = (struct phyerr_fft_report *)VAR_13;
   VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_12, VAR_5);
   if (VAR_8)
    return;
   break;
  }

  VAR_9 += sizeof(*VAR_10) + VAR_7;
 }
}
