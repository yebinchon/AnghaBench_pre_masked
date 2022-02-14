
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
struct fft_sample_tlv {int dummy; } ;
struct TYPE_4__ {void* length; int type; } ;
struct fft_sample_ht20_40 {int channel_type; int lower_max_index; int upper_max_index; int lower_bitmap_weight; int upper_bitmap_weight; int max_exp; int* data; void* upper_max_magnitude; void* lower_max_magnitude; int tsf; void* upper_rssi; void* lower_rssi; void* upper_noise; void* lower_noise; void* freq; TYPE_2__ tlv; } ;
struct ath_spec_scan_priv {struct ath_hw* ah; } ;
struct ath_rx_status {int * rs_rssi_ctl; int * rs_rssi_ext; } ;
struct ath_hw {void* noise; int curchan; struct ath9k_hw_cal_data* caldata; } ;
struct ath_ht20_40_mag_info {int max_exp; int upper_bins; int lower_bins; } ;
struct ath_common {int dummy; } ;
struct ath9k_hw_cal_data {TYPE_1__* nfCalHist; } ;
typedef void* s8 ;
typedef void* s16 ;
typedef int fft_sample_40 ;
struct TYPE_3__ {int privNF; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 void* FUNC_3 (struct ath_hw*,int ,int ) ;
 int FUNC_4 (struct ath_common*,int ,char*,...) ;
 int FUNC_5 (struct ath_spec_scan_priv*,struct fft_sample_tlv*) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int*,int*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(struct ath_rx_status *VAR_5,
   struct ath_spec_scan_priv *VAR_6,
   u8 *VAR_7,
   u64 VAR_8, u16 VAR_9, int VAR_10)
{
 struct fft_sample_ht20_40 VAR_11;
 struct ath_common *VAR_12 = FUNC_2(VAR_6->ah);
 struct ath_hw *VAR_13 = VAR_6->ah;
 struct ath9k_hw_cal_data *VAR_14 = VAR_13->caldata;
 struct ath_ht20_40_mag_info *VAR_15;
 struct fft_sample_tlv *VAR_16;
 int VAR_17 = VAR_3 / 2;
 int VAR_18 = 0;
 int VAR_19 = 0;
 s16 VAR_20;
 u16 VAR_21, VAR_22, VAR_23, VAR_24;
 s8 VAR_25, VAR_26;
 u8 VAR_27, VAR_28;
 u8 VAR_29, VAR_30, VAR_31;

 if (VAR_14)
  VAR_20 = FUNC_3(VAR_13, VAR_13->curchan,
    VAR_14->nfCalHist[3].privNF);
 else
  VAR_20 = VAR_0;

 VAR_24 = sizeof(VAR_11) - sizeof(struct fft_sample_tlv);
 VAR_11 = VAR_1;
 VAR_11 = FUNC_0(VAR_24);
 VAR_11 = FUNC_0(VAR_9);
 VAR_11 = VAR_10;

 if (VAR_10 == VAR_2) {
  VAR_25 = FUNC_6(VAR_5->rs_rssi_ctl[0]);
  VAR_26 = FUNC_6(VAR_5->rs_rssi_ext[0]);

  VAR_11 = VAR_13->noise;
  VAR_11 = VAR_20;
 } else {
  VAR_25 = FUNC_6(VAR_5->rs_rssi_ext[0]);
  VAR_26 = FUNC_6(VAR_5->rs_rssi_ctl[0]);

  VAR_11 = VAR_20;
  VAR_11 = VAR_13->noise;
 }

 VAR_11 = VAR_25;
 VAR_11 = VAR_26;

 VAR_15 = (struct ath_ht20_40_mag_info *) (VAR_7 +
     VAR_3);

 VAR_21 = FUNC_10(VAR_15->lower_bins);
 VAR_11 = FUNC_0(VAR_21);

 VAR_22 = FUNC_10(VAR_15->upper_bins);
 VAR_11 = FUNC_0(VAR_22);

 VAR_27 = FUNC_9(VAR_15->lower_bins);
 VAR_11 = VAR_27;

 VAR_28 = FUNC_9(VAR_15->upper_bins);
 VAR_11 = VAR_28;

 VAR_29 = FUNC_8(VAR_15->lower_bins);
 VAR_11 = VAR_29;

 VAR_30 = FUNC_8(VAR_15->upper_bins);
 VAR_11 = VAR_30;

 VAR_31 = VAR_15->max_exp & 0xf;
 VAR_11 = VAR_31;

 VAR_11 = FUNC_1(VAR_8);

 FUNC_7(VAR_11, VAR_7, VAR_3);

 FUNC_4(VAR_12, VAR_4, "FFT HT20/40 frame: lower mag 0x%X,"
     "lower_mag_idx %i, upper mag 0x%X,"
     "upper_mag_idx %i\n",
     VAR_21 >> VAR_31,
     VAR_27,
     VAR_22 >> VAR_31,
     VAR_28);




 if (((VAR_11[VAR_28 + VAR_17] & 0xf8)
     != ((VAR_22 >> VAR_31) & 0xf8)) ||
    ((VAR_11[VAR_27] & 0xf8)
     != ((VAR_21 >> VAR_31) & 0xf8))) {
  FUNC_4(VAR_12, VAR_4, "Magnitude mismatch !\n");
  VAR_19 = -1;
 }




 VAR_11[VAR_17] = (VAR_11[VAR_17 + 1] +
     VAR_11[VAR_17 - 1]) / 2;





 if (VAR_27 == VAR_17) {
  VAR_23 = 0;
  for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
   if (VAR_11[VAR_18] > VAR_23) {
    VAR_23 = VAR_11[VAR_18];
    VAR_11 = VAR_18;
   }
  }

  VAR_21 = VAR_23 << VAR_31;
  VAR_11 = FUNC_0(VAR_21);

  FUNC_4(VAR_12, VAR_4,
   "Calculated new lower max 0x%X at %i\n",
   VAR_23, VAR_11);
 } else
 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
  if (VAR_11[VAR_18] == (VAR_21 >> VAR_31))
   FUNC_4(VAR_12, VAR_4,
    "Got lower mag: 0x%X at index %i\n",
    VAR_11[VAR_18], VAR_18);

  if (VAR_11[VAR_18] > (VAR_21 >> VAR_31)) {
   FUNC_4(VAR_12, VAR_4,
    "Got lower bin %i higher than max: 0x%X\n",
    VAR_18, VAR_11[VAR_18]);
   VAR_19 = -1;
  }
 }

 if (VAR_28 == VAR_17) {
  VAR_23 = 0;
  for (VAR_18 = VAR_17; VAR_18 < VAR_3; VAR_18++) {
   if (VAR_11[VAR_18] > VAR_23) {
    VAR_23 = VAR_11[VAR_18];
    VAR_11 = VAR_18;
   }
  }
  VAR_22 = VAR_23 << VAR_31;
  VAR_11 = FUNC_0(VAR_22);

  FUNC_4(VAR_12, VAR_4,
   "Calculated new upper max 0x%X at %i\n",
   VAR_23, VAR_11);
 } else
 for (VAR_18 = VAR_17; VAR_18 < VAR_3; VAR_18++) {
  if (VAR_11[VAR_18] == (VAR_22 >> VAR_31))
   FUNC_4(VAR_12, VAR_4,
    "Got upper mag: 0x%X at index %i\n",
    VAR_11[VAR_18], VAR_18);

  if (VAR_11[VAR_18] > (VAR_22 >> VAR_31)) {
   FUNC_4(VAR_12, VAR_4,
    "Got upper bin %i higher than max: 0x%X\n",
    VAR_18, VAR_11[VAR_18]);

   VAR_19 = -1;
  }
 }

 if (VAR_19 < 0)
  return VAR_19;

 VAR_16 = (struct fft_sample_tlv *)&VAR_11;

 FUNC_5(VAR_6, VAR_16);

 return 0;
}
