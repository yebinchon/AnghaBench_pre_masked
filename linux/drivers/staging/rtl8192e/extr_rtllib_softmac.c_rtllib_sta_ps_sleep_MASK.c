
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct TYPE_3__ {int tim_count; } ;
struct TYPE_4__ {int dtim_data; int beacon_interval; int dtim_period; scalar_t__ last_dtim_sta_time; TYPE_1__ tim; } ;
struct rt_pwr_save_ctrl {int LPSAwakeIntvl; int RegMaxLPSAwakeIntvl; } ;
struct rtllib_device {int ps; int softmac_features; scalar_t__ mgmt_queue_tail; scalar_t__ mgmt_queue_head; TYPE_2__ current_network; scalar_t__ bAwakePktSent; scalar_t__ last_rx_ps_time; int dev; scalar_t__ LPSDelayCnt; struct rt_pwr_save_ctrl PowerSaveControl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static short FUNC_3(struct rtllib_device *VAR_5, u64 *VAR_6)
{
 int VAR_7;
 u8 VAR_8;
 struct rt_pwr_save_ctrl *VAR_9 = &(VAR_5->PowerSaveControl);

 if (VAR_5->LPSDelayCnt) {
  VAR_5->LPSDelayCnt--;
  return 0;
 }

 VAR_8 = VAR_5->current_network.dtim_data;
 if (!(VAR_8 & VAR_3))
  return 0;
 VAR_7 = VAR_5->current_network.beacon_interval;
 VAR_5->current_network.dtim_data = VAR_1;



 if (VAR_8 & (VAR_2 & VAR_5->ps))
  return 2;

 if (!FUNC_2(VAR_4,
   FUNC_0(VAR_5->dev) + FUNC_1(VAR_7)))
  return 0;
 if (!FUNC_2(VAR_4,
   VAR_5->last_rx_ps_time + FUNC_1(VAR_7)))
  return 0;
 if ((VAR_5->softmac_features & VAR_0) &&
     (VAR_5->mgmt_queue_tail != VAR_5->mgmt_queue_head))
  return 0;

 if (VAR_6) {
  if (VAR_5->bAwakePktSent) {
   VAR_9->LPSAwakeIntvl = 1;
  } else {
   u8 VAR_10 = 1;

   if (VAR_9->LPSAwakeIntvl == 0)
    VAR_9->LPSAwakeIntvl = 1;
   if (VAR_9->RegMaxLPSAwakeIntvl == 0)
    VAR_10 = 1;
   else if (VAR_9->RegMaxLPSAwakeIntvl == 0xFF)
    VAR_10 = VAR_5->current_network.dtim_period;
   else
    VAR_10 = VAR_9->RegMaxLPSAwakeIntvl;
   VAR_9->LPSAwakeIntvl = (VAR_9->LPSAwakeIntvl >=
            VAR_10) ? VAR_10 :
            (VAR_9->LPSAwakeIntvl + 1);
  }
  {
   u8 VAR_11 = 0;
   u8 VAR_12 = VAR_5->current_network.dtim_period;
   u8 VAR_13 = VAR_5->current_network.tim.tim_count;

   if (VAR_13 == 0) {
    if (VAR_9->LPSAwakeIntvl > VAR_12)
     VAR_11 = VAR_12 +
       (VAR_9->LPSAwakeIntvl -
       VAR_12) -
       ((VAR_9->LPSAwakeIntvl-VAR_12) %
       VAR_12);
    else
     VAR_11 = VAR_9->LPSAwakeIntvl;

   } else {
    if (VAR_9->LPSAwakeIntvl >
        VAR_5->current_network.tim.tim_count)
     VAR_11 = VAR_13 +
     (VAR_9->LPSAwakeIntvl - VAR_13) -
     ((VAR_9->LPSAwakeIntvl-VAR_13)%VAR_12);
    else
     VAR_11 = VAR_9->LPSAwakeIntvl;
   }

  *VAR_6 = VAR_5->current_network.last_dtim_sta_time
   + FUNC_1(VAR_5->current_network.beacon_interval *
   VAR_11);
 }
 }

 return 1;


}
