
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_radar_conf {int fir_power; int radar_rssi; int pulse_height; int pulse_rssi; int pulse_inband; int pulse_maxlen; int pulse_inband_step; int radar_inband; } ;
struct ath_hw {struct ath_hw_radar_conf radar_conf; } ;



__attribute__((used)) static void FUNC_0(struct ath_hw *VAR_0)
{
 struct ath_hw_radar_conf *VAR_1 = &VAR_0->radar_conf;

 VAR_1->fir_power = -33;
 VAR_1->radar_rssi = 20;
 VAR_1->pulse_height = 10;
 VAR_1->pulse_rssi = 15;
 VAR_1->pulse_inband = 15;
 VAR_1->pulse_maxlen = 255;
 VAR_1->pulse_inband_step = 12;
 VAR_1->radar_inband = 8;
}
