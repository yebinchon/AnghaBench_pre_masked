
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct wmi_phyerr_ev_arg {int chan_width_mhz; int freq1; int freq2; int* nf_chains; int rssi_combined; } ;
struct phyerr_fft_report {int reg1; int reg0; } ;
struct fft_sample_tlv {int dummy; } ;
struct TYPE_4__ {void* length; int type; } ;
struct fft_sample_ath10k {int chan_width_mhz; int* data; TYPE_2__ tlv; void* max_index; int max_exp; int tsf; void* noise; void* freq2; void* freq1; void* base_pwr_db; void* total_gain_db; int rssi; void* max_magnitude; void* avgpwr_db; void* relpwr_db; } ;
struct TYPE_3__ {scalar_t__ spectral_bin_offset; } ;
struct ath10k {TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t FUNC_4 (struct ath10k*,size_t) ;
 int FUNC_5 (void*,int,size_t,size_t*) ;
 int FUNC_6 (int*,size_t*,size_t) ;
 int FUNC_7 (struct ath10k*,TYPE_2__*) ;

int FUNC_8(struct ath10k *VAR_10,
    struct wmi_phyerr_ev_arg *VAR_11,
    const struct phyerr_fft_report *VAR_12,
    size_t VAR_13, u64 VAR_14)
{
 struct fft_sample_ath10k *VAR_15;
 u8 VAR_16[sizeof(*VAR_15) + VAR_9];
 u16 VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;
 u32 VAR_23, VAR_24;
 u8 VAR_25, *VAR_26;
 int VAR_27;

 VAR_15 = (struct fft_sample_ath10k *)&VAR_16;

 VAR_13 = FUNC_4(VAR_10, VAR_13);

 if (VAR_13 < 64 || VAR_13 > VAR_9)
  return -VAR_1;

 VAR_23 = FUNC_3(VAR_12->reg0);
 VAR_24 = FUNC_3(VAR_12->reg1);

 VAR_21 = sizeof(*VAR_15) - sizeof(struct fft_sample_tlv) + VAR_13;
 VAR_15->tlv.type = VAR_0;
 VAR_15->tlv.length = FUNC_1(VAR_21);




 switch (VAR_11->chan_width_mhz) {
 case 20:
  VAR_15->chan_width_mhz = 22;
  break;
 case 40:
  VAR_15->chan_width_mhz = 44;
  break;
 case 80:






  if (VAR_13 == 64)
   return -VAR_1;
  VAR_15->chan_width_mhz = 88;
  break;
 default:
  VAR_15->chan_width_mhz = VAR_11->chan_width_mhz;
 }

 VAR_15->relpwr_db = FUNC_0(VAR_24, VAR_8);
 VAR_15->avgpwr_db = FUNC_0(VAR_24, VAR_6);

 VAR_22 = FUNC_0(VAR_24, VAR_7);
 VAR_15->max_magnitude = FUNC_1(VAR_22);
 VAR_15->max_index = FUNC_0(VAR_23, VAR_4);
 VAR_15->rssi = VAR_11->rssi_combined;

 VAR_19 = FUNC_0(VAR_23, VAR_5);
 VAR_20 = FUNC_0(VAR_23, VAR_2);
 VAR_15->total_gain_db = FUNC_1(VAR_19);
 VAR_15->base_pwr_db = FUNC_1(VAR_20);

 VAR_17 = VAR_11->freq1;
 VAR_18 = VAR_11->freq2;
 VAR_15->freq1 = FUNC_1(VAR_17);
 VAR_15->freq2 = FUNC_1(VAR_18);

 VAR_25 = FUNC_0(VAR_23, VAR_3);

 VAR_15->noise = FUNC_1(VAR_11->nf_chains[VAR_25]);

 VAR_26 = (u8 *)VAR_12;
 VAR_26 += sizeof(*VAR_12) + VAR_10->hw_params.spectral_bin_offset;

 VAR_15->tsf = FUNC_2(VAR_14);




 VAR_15->max_exp = FUNC_5(VAR_15->max_index, VAR_22,
       VAR_13, VAR_26);

 FUNC_6(VAR_15->data, VAR_26, VAR_13);




 VAR_27 = VAR_13 / 2;
 VAR_15->data[VAR_27] = (VAR_15->data[VAR_27 + 1] +
        VAR_15->data[VAR_27 - 1]) / 2;

 FUNC_7(VAR_10, &VAR_15->tlv);

 return 0;
}
