
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8192_priv {scalar_t__ CustomerID; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dig_enable_flag; int rssi_val; int rx_gain_range_min; int backoff_val; int rssi_high_power_highthresh; int rssi_high_power_lowthresh; int rssi_high_thresh; int rssi_low_thresh; void* dig_highpwr_state; void* dig_state; scalar_t__ dig_algorithm_switch; int dig_algorithm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_11)
{
 struct r8192_priv *VAR_12 = FUNC_0(VAR_11);

 VAR_10.dig_enable_flag = 1;
 VAR_10.dig_algorithm = VAR_0;
 VAR_10.dig_algorithm_switch = 0;


 VAR_10.dig_state = VAR_8;
 VAR_10.dig_highpwr_state = VAR_8;

 VAR_10.rssi_low_thresh = VAR_7;
 VAR_10.rssi_high_thresh = VAR_6;

 VAR_10.rssi_high_power_lowthresh = VAR_3;
 VAR_10.rssi_high_power_highthresh = VAR_2;

 VAR_10.rssi_val = 50;
 VAR_10.backoff_val = VAR_1;
 if (VAR_12->CustomerID == VAR_9)
  VAR_10.rx_gain_range_min = VAR_5;
 else
  VAR_10.rx_gain_range_min = VAR_4;

}
