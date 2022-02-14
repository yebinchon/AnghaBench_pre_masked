
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef size_t u16 ;
struct fft_sample_tlv {int dummy; } ;
struct TYPE_2__ {void* length; int type; } ;
struct fft_sample_ht20 {size_t max_index; size_t bitmap_weight; size_t max_exp; int* data; void* max_magnitude; int tsf; int noise; int rssi; void* freq; TYPE_1__ tlv; } ;
struct ath_spec_scan_priv {struct ath_hw* ah; } ;
struct ath_rx_status {int * rs_rssi_ctl; } ;
struct ath_hw {int noise; } ;
struct ath_ht20_mag_info {int max_exp; int all_bins; } ;
struct ath_common {int dummy; } ;
typedef int fft_sample_20 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 struct ath_common* FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_common*,int ,char*,...) ;
 int FUNC_4 (struct ath_spec_scan_priv*,struct fft_sample_tlv*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,size_t*,int) ;
 size_t FUNC_7 (int ) ;
 size_t FUNC_8 (int ) ;
 size_t FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct ath_rx_status *VAR_3,
   struct ath_spec_scan_priv *VAR_4,
   u8 *VAR_5,
   u64 VAR_6, u16 VAR_7, int VAR_8)
{
 struct fft_sample_ht20 VAR_9;
 struct ath_common *VAR_10 = FUNC_2(VAR_4->ah);
 struct ath_hw *VAR_11 = VAR_4->ah;
 struct ath_ht20_mag_info *VAR_12;
 struct fft_sample_tlv *VAR_13;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = VAR_1 / 2;
 u16 VAR_17, VAR_18, VAR_19;
 u8 VAR_20, VAR_21, VAR_22;

 VAR_19 = sizeof(VAR_9) - sizeof(struct fft_sample_tlv);
 VAR_9 = VAR_0;
 VAR_9 = FUNC_0(VAR_19);
 VAR_9 = FUNC_0(VAR_7);
 VAR_9 = FUNC_5(VAR_3->rs_rssi_ctl[0]);
 VAR_9 = VAR_11->noise;

 VAR_12 = (struct ath_ht20_mag_info *) (VAR_5 +
     VAR_1);

 VAR_17 = FUNC_9(VAR_12->all_bins);
 VAR_9 = FUNC_0(VAR_17);

 VAR_20 = FUNC_8(VAR_12->all_bins);
 VAR_9 = VAR_20;

 VAR_21 = FUNC_7(VAR_12->all_bins);
 VAR_9 = VAR_21;

 VAR_22 = VAR_12->max_exp & 0xf;
 VAR_9 = VAR_22;

 VAR_9 = FUNC_1(VAR_6);

 FUNC_6(VAR_9, VAR_5, VAR_1);

 FUNC_3(VAR_10, VAR_2, "FFT HT20 frame: max mag 0x%X,"
     "max_mag_idx %i\n",
     VAR_17 >> VAR_22,
     VAR_20);

 if ((VAR_9[VAR_20] & 0xf8) !=
     ((VAR_17 >> VAR_22) & 0xf8)) {
  FUNC_3(VAR_10, VAR_2, "Magnitude mismatch !\n");
  VAR_15 = -1;
 }




 VAR_9[VAR_16] = (VAR_9[VAR_16 + 1] +
     VAR_9[VAR_16 - 1]) / 2;





 if (VAR_20 == VAR_16) {
  VAR_18 = 0;
  for (VAR_14 = 0; VAR_14 < VAR_16; VAR_14++) {
   if (VAR_9[VAR_14] > VAR_18) {
    VAR_18 = VAR_9[VAR_14];
    VAR_9 = VAR_14;
   }
  }

  VAR_17 = VAR_18 << VAR_22;
  VAR_9 = FUNC_0(VAR_17);

  FUNC_3(VAR_10, VAR_2,
   "Calculated new lower max 0x%X at %i\n",
   VAR_18, VAR_9);
 } else
 for (VAR_14 = 0; VAR_14 < VAR_1; VAR_14++) {
  if (VAR_9[VAR_14] == (VAR_17 >> VAR_22))
   FUNC_3(VAR_10, VAR_2,
    "Got max: 0x%X at index %i\n",
    VAR_9[VAR_14], VAR_14);

  if (VAR_9[VAR_14] > (VAR_17 >> VAR_22)) {
   FUNC_3(VAR_10, VAR_2,
    "Got bin %i greater than max: 0x%X\n",
    VAR_14, VAR_9[VAR_14]);
   VAR_15 = -1;
  }
 }

 if (VAR_15 < 0)
  return VAR_15;

 VAR_13 = (struct fft_sample_tlv *)&VAR_9;

 FUNC_4(VAR_4, VAR_13);

 return 0;
}
