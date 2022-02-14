
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct TYPE_2__ {int dtim_data; int beacon_interval; scalar_t__* last_dtim_sta_time; int dtim_period; } ;
struct ieee80211_device {int ps; int softmac_features; scalar_t__ mgmt_queue_tail; scalar_t__ mgmt_queue_head; TYPE_1__ current_network; scalar_t__ last_rx_ps_time; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static short FUNC_3(struct ieee80211_device *VAR_6, u32 *VAR_7,
        u32 *VAR_8)
{
 int VAR_9;
 u8 VAR_10;






 VAR_10 = VAR_6->current_network.dtim_data;
 if (!(VAR_10 & VAR_3))
  return 0;
 VAR_9 = VAR_6->current_network.beacon_interval;
 VAR_6->current_network.dtim_data = VAR_0;

 if (VAR_10 & ((VAR_2 | VAR_1) & VAR_6->ps))
  return 2;

 if (!FUNC_2(VAR_5,
   FUNC_0(VAR_6->dev) + FUNC_1(VAR_9)))
  return 0;

 if (!FUNC_2(VAR_5,
   VAR_6->last_rx_ps_time + FUNC_1(VAR_9)))
  return 0;

 if ((VAR_6->softmac_features & VAR_4) &&
     (VAR_6->mgmt_queue_tail != VAR_6->mgmt_queue_head))
  return 0;

 if (VAR_8) {
  *VAR_8 = VAR_6->current_network.last_dtim_sta_time[0]
   + (VAR_6->current_network.beacon_interval
      * VAR_6->current_network.dtim_period) * 1000;
 }

 if (VAR_7) {
  *VAR_7 = VAR_6->current_network.last_dtim_sta_time[1];
  if (VAR_8 && *VAR_8 < VAR_6->current_network.last_dtim_sta_time[0])
   *VAR_7 += 1;
 }

 return 1;
}
