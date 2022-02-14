
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct r8192_priv {scalar_t__ reset_count; scalar_t__ CurrentChannelBW; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ pre_connect_state; scalar_t__ cur_connect_state; scalar_t__ rssi_val; scalar_t__ rssi_high_power_highthresh; scalar_t__ curpd_thstate; scalar_t__ rssi_low_thresh; scalar_t__ rssi_high_thresh; scalar_t__ rssi_high_power_lowthresh; scalar_t__ prepd_thstate; scalar_t__ dig_algorithm_switch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__ VAR_5 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct net_device*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(
 struct net_device *VAR_8)
{
 struct r8192_priv *VAR_9 = FUNC_0(VAR_8);
 static u8 VAR_10, VAR_11;
 static u32 VAR_12;

 if (VAR_5.dig_algorithm_switch) {
  VAR_10 = 0;
  VAR_12 = 0;
 }

 if (VAR_5.pre_connect_state == VAR_5.cur_connect_state) {
  if (VAR_5.cur_connect_state == VAR_0) {
   if (VAR_5.rssi_val >= VAR_5.rssi_high_power_highthresh)
    VAR_5.curpd_thstate = VAR_1;
   else if (VAR_5.rssi_val <= VAR_5.rssi_low_thresh)
    VAR_5.curpd_thstate = VAR_2;
   else if ((VAR_5.rssi_val >= VAR_5.rssi_high_thresh) &&
     (VAR_5.rssi_val < VAR_5.rssi_high_power_lowthresh))
    VAR_5.curpd_thstate = VAR_3;
   else
    VAR_5.curpd_thstate = VAR_5.prepd_thstate;
  } else {
   VAR_5.curpd_thstate = VAR_2;
  }
 } else {
  VAR_5.curpd_thstate = VAR_2;
 }


 if (VAR_9->reset_count != VAR_12) {
  VAR_11 = 1;
  VAR_12 = VAR_9->reset_count;
 }

 {
  if ((VAR_5.prepd_thstate != VAR_5.curpd_thstate) ||
      (VAR_10 <= 3) || VAR_11) {

   if (VAR_5.curpd_thstate == VAR_2) {

    if (VAR_9->CurrentChannelBW != VAR_4) {



     FUNC_1(VAR_8, (VAR_7+3), 0x00);



    } else
     FUNC_1(VAR_8, VAR_6, 0x42);
   } else if (VAR_5.curpd_thstate == VAR_3) {

    if (VAR_9->CurrentChannelBW != VAR_4) {



     FUNC_1(VAR_8, (VAR_7+3), 0x20);



    } else
     FUNC_1(VAR_8, VAR_6, 0x44);
   } else if (VAR_5.curpd_thstate == VAR_1) {

    if (VAR_9->CurrentChannelBW != VAR_4) {
     FUNC_1(VAR_8, (VAR_7+3), 0x10);



    } else
     FUNC_1(VAR_8, VAR_6, 0x43);
   }
   VAR_5.prepd_thstate = VAR_5.curpd_thstate;
   if (VAR_10 <= 3)
    VAR_10++;
   VAR_11 = 0;
  }
 }
}
