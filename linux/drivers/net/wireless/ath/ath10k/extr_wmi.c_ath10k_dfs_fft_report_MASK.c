
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;
struct wmi_phyerr_ev_arg {scalar_t__ rssi_combined; } ;
struct phyerr_fft_report {int reg1; int reg0; } ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ath10k*,int ,char*,...) ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_4(struct ath10k *VAR_13,
     struct wmi_phyerr_ev_arg *VAR_14,
     const struct phyerr_fft_report *VAR_15,
     u64 VAR_16)
{
 u32 VAR_17, VAR_18;
 u8 VAR_19, VAR_20;

 VAR_17 = FUNC_2(VAR_15->reg0);
 VAR_18 = FUNC_2(VAR_15->reg1);
 VAR_19 = VAR_14->rssi_combined;

 FUNC_3(VAR_13, VAR_0,
     "wmi phyerr fft report total_gain_db %d base_pwr_db %d fft_chn_idx %d peak_sidx %d\n",
     FUNC_1(VAR_17, VAR_7),
     FUNC_1(VAR_17, VAR_4),
     FUNC_1(VAR_17, VAR_5),
     FUNC_1(VAR_17, VAR_6));
 FUNC_3(VAR_13, VAR_0,
     "wmi phyerr fft report rel_pwr_db %d avgpwr_db %d peak_mag %d num_store_bin %d\n",
     FUNC_1(VAR_18, VAR_11),
     FUNC_1(VAR_18, VAR_8),
     FUNC_1(VAR_18, VAR_10),
     FUNC_1(VAR_18, VAR_9));

 VAR_20 = FUNC_1(VAR_18, VAR_10);


 if (VAR_19 == VAR_2 &&
     VAR_20 < 2 * VAR_1) {
  FUNC_3(VAR_13, VAR_0, "dfs false pulse detected\n");
  FUNC_0(VAR_13, VAR_12);
  return -VAR_3;
 }

 return 0;
}
