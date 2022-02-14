
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct r8192_priv {scalar_t__* DefaultInitialGain; scalar_t__ reset_count; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ pre_connect_state; scalar_t__ cur_connect_state; scalar_t__ rssi_val; scalar_t__ backoff_val; scalar_t__ cur_ig_value; scalar_t__ rx_gain_range_min; scalar_t__ pre_ig_value; scalar_t__ dig_algorithm_switch; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct net_device*,int ,scalar_t__*) ;
 int FUNC_2 (struct net_device*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(
 struct net_device *VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_0(VAR_7);
 u8 VAR_9 = 0;
 static u8 VAR_10, VAR_11;
 static u32 VAR_12;
 u8 VAR_13;

 if (VAR_2.dig_algorithm_switch) {
  VAR_10 = 0;
  VAR_12 = 0;
 }

 if (VAR_2.pre_connect_state == VAR_2.cur_connect_state) {
  if (VAR_2.cur_connect_state == VAR_0) {
   if ((VAR_2.rssi_val + 10 - VAR_2.backoff_val) > VAR_1)
    VAR_2.cur_ig_value = VAR_1;
   else if ((VAR_2.rssi_val+10-VAR_2.backoff_val) < VAR_2.rx_gain_range_min)
    VAR_2.cur_ig_value = VAR_2.rx_gain_range_min;
   else
    VAR_2.cur_ig_value = VAR_2.rssi_val+10-VAR_2.backoff_val;
  } else {
   if (VAR_2.cur_ig_value == 0)
    VAR_2.cur_ig_value = VAR_8->DefaultInitialGain[0];
   else
    VAR_2.cur_ig_value = VAR_2.pre_ig_value;
  }
 } else {
  VAR_2.cur_ig_value = VAR_8->DefaultInitialGain[0];
  VAR_2.pre_ig_value = 0;
 }



 if (VAR_8->reset_count != VAR_12) {
  VAR_11 = 1;
  VAR_12 = VAR_8->reset_count;
 }

 FUNC_1(VAR_7, VAR_3, &VAR_13);
 if (VAR_2.pre_ig_value != VAR_13)
  VAR_11 = 1;

 {
  if ((VAR_2.pre_ig_value != VAR_2.cur_ig_value)
   || !VAR_10 || VAR_11) {
   VAR_9 = (u8)VAR_2.cur_ig_value;


   FUNC_2(VAR_7, VAR_3, VAR_9);
   FUNC_2(VAR_7, VAR_4, VAR_9);
   FUNC_2(VAR_7, VAR_5, VAR_9);
   FUNC_2(VAR_7, VAR_6, VAR_9);
   VAR_2.pre_ig_value = VAR_2.cur_ig_value;
   VAR_10 = 1;
   VAR_11 = 0;
  }
 }
}
