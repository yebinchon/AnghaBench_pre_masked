
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {short channel; int beacon_interval; } ;
struct rtllib_device {int proto_started; int* last_rxseq_num; int* last_rxfrag_num; scalar_t__ iw_mode; int dev; int (* UpdateBeaconInterruptHandler ) (int ,int) ;scalar_t__ wmm_acm; scalar_t__* last_packet_time; TYPE_1__ current_network; int * active_channel_map; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 short VAR_4 ;
 int FUNC_0 (struct rtllib_device*) ;
 int FUNC_1 (struct rtllib_device*) ;
 int FUNC_2 (struct rtllib_device*) ;
 int FUNC_3 (struct rtllib_device*) ;
 int FUNC_4 (struct rtllib_device*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int) ;

void FUNC_7(struct rtllib_device *VAR_5)
{
 short VAR_6 = 0;
 int VAR_7 = 0;

 FUNC_4(VAR_5);

 if (VAR_5->proto_started)
  return;

 VAR_5->proto_started = 1;

 if (VAR_5->current_network.channel == 0) {
  do {
   VAR_6++;
   if (VAR_6 > VAR_4)
    return;
  } while (!VAR_5->active_channel_map[VAR_6]);
  VAR_5->current_network.channel = VAR_6;
 }

 if (VAR_5->current_network.beacon_interval == 0)
  VAR_5->current_network.beacon_interval = 100;

 for (VAR_7 = 0; VAR_7 < 17; VAR_7++) {
  VAR_5->last_rxseq_num[VAR_7] = -1;
  VAR_5->last_rxfrag_num[VAR_7] = -1;
  VAR_5->last_packet_time[VAR_7] = 0;
 }

 if (VAR_5->UpdateBeaconInterruptHandler)
  VAR_5->UpdateBeaconInterruptHandler(VAR_5->dev, 0);

 VAR_5->wmm_acm = 0;





 if (VAR_5->iw_mode == VAR_1) {
  FUNC_0(VAR_5);
 } else if (VAR_5->iw_mode == VAR_0) {
  if (VAR_5->UpdateBeaconInterruptHandler)
   VAR_5->UpdateBeaconInterruptHandler(VAR_5->dev, 1);

  FUNC_1(VAR_5);

 } else if (VAR_5->iw_mode == VAR_2) {
  FUNC_2(VAR_5);
 } else if (VAR_5->iw_mode == VAR_3) {
  FUNC_3(VAR_5);
 }
}
