
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct r8192_priv {int undecorated_smoothed_pwdb; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int cur_connect_state; int pre_connect_state; scalar_t__ dig_algorithm_switch; int rssi_val; int dig_state; int dig_enable_flag; } ;
struct TYPE_3__ {scalar_t__ state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(
 struct net_device *VAR_7)
{
 struct r8192_priv *VAR_8 = FUNC_3(VAR_7);
 u8 VAR_9;
 static u8 VAR_10;

 if (!VAR_6.dig_enable_flag)
  return;


 if (VAR_6.dig_algorithm_switch)
  VAR_10 = 0;

 if (VAR_10 <= 3) {

  for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
   FUNC_4(VAR_7, VAR_4, VAR_5, 0x8);
  VAR_10++;
  VAR_6.dig_state = VAR_2;
 }

 if (VAR_8->ieee80211->state == VAR_3)
  VAR_6.cur_connect_state = VAR_0;
 else
  VAR_6.cur_connect_state = VAR_1;




 VAR_6.rssi_val = VAR_8->undecorated_smoothed_pwdb;

 FUNC_1(VAR_7);
 FUNC_2(VAR_7);
 FUNC_0(VAR_7);
 if (VAR_6.dig_algorithm_switch)
  VAR_6.dig_algorithm_switch = 0;
 VAR_6.pre_connect_state = VAR_6.cur_connect_state;

}
