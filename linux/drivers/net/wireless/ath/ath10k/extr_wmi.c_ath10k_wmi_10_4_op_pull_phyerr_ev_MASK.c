
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wmi_phyerr_ev_arg {int hdr_len; int phy_err_code; void** nf_chains; int buf; void* buf_len; int chan_width_mhz; int rssi_combined; void* freq2; void* freq1; void* tsf_timestamp; } ;
struct wmi_10_4_phyerr_event {int * phy_err_mask; int * nf_chains; int buf; int buf_len; int chan_width_mhz; int rssi_combined; int freq2; int freq1; int tsf_timestamp; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct ath10k *VAR_6,
          const void *VAR_7,
          int VAR_8,
          struct wmi_phyerr_ev_arg *VAR_9)
{
 const struct wmi_10_4_phyerr_event *VAR_10 = VAR_7;
 u32 VAR_11;
 int VAR_12;

 if (VAR_8 < sizeof(*VAR_10)) {
  FUNC_2(VAR_6, "wrong phyerr event head len %d (need: >=%zd)\n",
       VAR_8, sizeof(*VAR_10));
  return -VAR_0;
 }

 VAR_9->tsf_timestamp = FUNC_1(VAR_10->tsf_timestamp);
 VAR_9->freq1 = FUNC_0(VAR_10->freq1);
 VAR_9->freq2 = FUNC_0(VAR_10->freq2);
 VAR_9->rssi_combined = VAR_10->rssi_combined;
 VAR_9->chan_width_mhz = VAR_10->chan_width_mhz;
 VAR_9->buf_len = FUNC_1(VAR_10->buf_len);
 VAR_9->buf = VAR_10->buf;
 VAR_9->hdr_len = sizeof(*VAR_10);

 for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
  VAR_9->nf_chains[VAR_12] = FUNC_0(VAR_10->nf_chains[VAR_12]);

 VAR_11 = FUNC_1(VAR_10->phy_err_mask[0]);

 if (VAR_11 & VAR_2)
  VAR_9->phy_err_code = VAR_4;
 else if (VAR_11 & VAR_1)
  VAR_9->phy_err_code = VAR_3;
 else
  VAR_9->phy_err_code = VAR_5;

 return 0;
}
