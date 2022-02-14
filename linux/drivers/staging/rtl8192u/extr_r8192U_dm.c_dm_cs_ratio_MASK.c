
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct r8192_priv {scalar_t__ reset_count; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ pre_connect_state; scalar_t__ cur_connect_state; scalar_t__ rssi_val; scalar_t__ rssi_low_thresh; scalar_t__ curcs_ratio_state; scalar_t__ rssi_high_thresh; scalar_t__ precs_ratio_state; scalar_t__ dig_algorithm_switch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int,int) ;

__attribute__((used)) static void FUNC_2(
 struct net_device *VAR_4)
{
 struct r8192_priv *VAR_5 = FUNC_0(VAR_4);
 static u8 VAR_6, VAR_7;
 static u32 VAR_8;

 if (VAR_3.dig_algorithm_switch) {
  VAR_6 = 0;
  VAR_8 = 0;
 }

 if (VAR_3.pre_connect_state == VAR_3.cur_connect_state) {
  if (VAR_3.cur_connect_state == VAR_0) {
   if (VAR_3.rssi_val <= VAR_3.rssi_low_thresh)
    VAR_3.curcs_ratio_state = VAR_2;
   else if (VAR_3.rssi_val >= VAR_3.rssi_high_thresh)
    VAR_3.curcs_ratio_state = VAR_1;
   else
    VAR_3.curcs_ratio_state = VAR_3.precs_ratio_state;
  } else {
   VAR_3.curcs_ratio_state = VAR_2;
  }
 } else
  VAR_3.curcs_ratio_state = VAR_2;


 if (VAR_5->reset_count != VAR_8) {
  VAR_7 = 1;
  VAR_8 = VAR_5->reset_count;
 }

 {
  if ((VAR_3.precs_ratio_state != VAR_3.curcs_ratio_state) ||
      !VAR_6 || VAR_7) {

   if (VAR_3.curcs_ratio_state == VAR_2) {

    FUNC_1(VAR_4, 0xa0a, 0x08);
   } else if (VAR_3.curcs_ratio_state == VAR_1) {

    FUNC_1(VAR_4, 0xa0a, 0xcd);
   }
   VAR_3.precs_ratio_state = VAR_3.curcs_ratio_state;
   VAR_6 = 1;
   VAR_7 = 0;
  }
 }
}
