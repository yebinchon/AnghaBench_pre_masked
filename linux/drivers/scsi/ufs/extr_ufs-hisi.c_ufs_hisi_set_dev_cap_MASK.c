
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ufs_dev_params {int desired_working_mode; int hs_rate; int tx_pwr_hs; int rx_pwr_hs; int tx_pwr_pwm; int rx_pwr_pwm; int pwm_tx_gear; int pwm_rx_gear; int hs_tx_gear; int hs_rx_gear; int tx_lanes; int rx_lanes; } ;


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

__attribute__((used)) static void FUNC_0(struct ufs_dev_params *VAR_12)
{
 VAR_12->rx_lanes = VAR_4;
 VAR_12->tx_lanes = VAR_5;
 VAR_12->hs_rx_gear = VAR_1;
 VAR_12->hs_tx_gear = VAR_2;
 VAR_12->pwm_rx_gear = VAR_6;
 VAR_12->pwm_tx_gear = VAR_7;
 VAR_12->rx_pwr_pwm = VAR_9;
 VAR_12->tx_pwr_pwm = VAR_11;
 VAR_12->rx_pwr_hs = VAR_8;
 VAR_12->tx_pwr_hs = VAR_10;
 VAR_12->hs_rate = VAR_3;
 VAR_12->desired_working_mode = VAR_0;
}
