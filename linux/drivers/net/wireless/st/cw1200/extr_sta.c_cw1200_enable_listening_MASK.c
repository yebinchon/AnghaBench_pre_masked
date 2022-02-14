
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wsm_start {void* band; int beacon_interval; int dtim_period; int basic_rate_set; int channel_number; int probe_delay; int mode; } ;
struct cw1200_common {TYPE_1__* channel; } ;
struct TYPE_2__ {scalar_t__ band; int hw_value; } ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cw1200_common*,struct wsm_start*) ;

int FUNC_1(struct cw1200_common *VAR_4)
{
 struct wsm_start VAR_5 = {
  .mode = VAR_3,
  .band = VAR_1,
  .beacon_interval = 100,
  .dtim_period = 1,
  .probe_delay = 0,
  .basic_rate_set = 0x0F,
 };

 if (VAR_4->channel) {
  VAR_5.band = VAR_4->channel->band == VAR_0 ?
        VAR_2 : VAR_1;
  VAR_5.channel_number = VAR_4->channel->hw_value;
 } else {
  VAR_5.band = VAR_1;
  VAR_5.channel_number = 1;
 }

 return FUNC_0(VAR_4, &VAR_5);
}
