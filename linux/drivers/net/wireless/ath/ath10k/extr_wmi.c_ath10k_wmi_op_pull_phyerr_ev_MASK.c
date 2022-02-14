
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_phyerr_ev_arg {int hdr_len; int phy_err_code; void** nf_chains; int buf; void* buf_len; int chan_width_mhz; int rssi_combined; void* freq2; void* freq1; void* tsf_timestamp; } ;
struct wmi_phyerr {int phy_err_code; int * nf_chains; int buf; int buf_len; int chan_width_mhz; int rssi_combined; int freq2; int freq1; int tsf_timestamp; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct ath10k*,char*,int,int) ;

int FUNC_3(struct ath10k *VAR_5,
     const void *VAR_6,
     int VAR_7,
     struct wmi_phyerr_ev_arg *VAR_8)
{
 const struct wmi_phyerr *VAR_9 = VAR_6;
 int VAR_10;

 if (VAR_7 < sizeof(*VAR_9)) {
  FUNC_2(VAR_5, "wrong phyerr event head len %d (need: >=%zd)\n",
       VAR_7, sizeof(*VAR_9));
  return -VAR_0;
 }

 VAR_8->tsf_timestamp = FUNC_1(VAR_9->tsf_timestamp);
 VAR_8->freq1 = FUNC_0(VAR_9->freq1);
 VAR_8->freq2 = FUNC_0(VAR_9->freq2);
 VAR_8->rssi_combined = VAR_9->rssi_combined;
 VAR_8->chan_width_mhz = VAR_9->chan_width_mhz;
 VAR_8->buf_len = FUNC_1(VAR_9->buf_len);
 VAR_8->buf = VAR_9->buf;
 VAR_8->hdr_len = sizeof(*VAR_9);

 for (VAR_10 = 0; VAR_10 < 4; VAR_10++)
  VAR_8->nf_chains[VAR_10] = FUNC_0(VAR_9->nf_chains[VAR_10]);

 switch (VAR_9->phy_err_code) {
 case 128:
  VAR_8->phy_err_code = VAR_3;
  break;
 case 130:
  VAR_8->phy_err_code = VAR_1;
  break;
 case 129:
  VAR_8->phy_err_code = VAR_2;
  break;
 default:
  VAR_8->phy_err_code = VAR_4;
  break;
 }

 return 0;
}
