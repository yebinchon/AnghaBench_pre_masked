
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw_radar_conf {scalar_t__ ext_channel; int radar_inband; int pulse_inband_step; int pulse_maxlen; int pulse_inband; int pulse_rssi; int pulse_height; int radar_rssi; int fir_power; } ;
struct ath_hw {int curchan; int ini_dfs; } ;


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
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ath_hw*,int ,int) ;
 int FUNC_5 (struct ath_hw*,int ) ;
 int FUNC_6 (struct ath_hw*,int ,int) ;
 int FUNC_7 (struct ath_hw*,int ,int) ;
 int FUNC_8 (int *,int,unsigned int) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static void FUNC_10(struct ath_hw *VAR_16,
           struct ath_hw_radar_conf *VAR_17)
{
 unsigned int VAR_18 = 0;
 u32 VAR_19 = 0, VAR_20;

 if (!VAR_17) {
  FUNC_4(VAR_16, VAR_0, VAR_1);
  return;
 }

 VAR_19 |= VAR_1 | VAR_2;
 VAR_19 |= FUNC_9(VAR_17->fir_power, VAR_3);
 VAR_19 |= FUNC_9(VAR_17->radar_rssi, VAR_7);
 VAR_19 |= FUNC_9(VAR_17->pulse_height, VAR_4);
 VAR_19 |= FUNC_9(VAR_17->pulse_rssi, VAR_6);
 VAR_19 |= FUNC_9(VAR_17->pulse_inband, VAR_5);

 VAR_20 = FUNC_5(VAR_16, VAR_8);
 VAR_20 &= ~(VAR_10 | VAR_13 |
       VAR_12);
 VAR_20 |= VAR_11;
 VAR_20 |= VAR_9;
 VAR_20 |= FUNC_9(VAR_17->pulse_maxlen, VAR_10);
 VAR_20 |= FUNC_9(VAR_17->pulse_inband_step, VAR_13);
 VAR_20 |= FUNC_9(VAR_17->radar_inband, VAR_12);

 FUNC_7(VAR_16, VAR_0, VAR_19);
 FUNC_7(VAR_16, VAR_8, VAR_20);
 if (VAR_17->ext_channel)
  FUNC_6(VAR_16, VAR_14, VAR_15);
 else
  FUNC_4(VAR_16, VAR_14, VAR_15);

 if (FUNC_0(VAR_16) || FUNC_1(VAR_16) || FUNC_2(VAR_16)) {
  FUNC_8(&VAR_16->ini_dfs,
    FUNC_3(VAR_16->curchan) ? 2 : 1, VAR_18);
 }
}
