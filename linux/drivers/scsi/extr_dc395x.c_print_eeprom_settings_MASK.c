
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct NvRamType {int max_tag; int delay_time; int channel_cfg; TYPE_1__* target; int scsi_id; } ;
struct TYPE_2__ {size_t period; int cfg0; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int ,char*,int ,int,int,int,...) ;

__attribute__((used)) static void FUNC_1(struct NvRamType *VAR_2)
{
 FUNC_0(VAR_0, "Used settings: AdapterID=%02i, Speed=%i(%02i.%01iMHz), dev_mode=0x%02x\n",
  VAR_2->scsi_id,
  VAR_2->target[0].period,
  VAR_1[VAR_2->target[0].period] / 10,
  VAR_1[VAR_2->target[0].period] % 10,
  VAR_2->target[0].cfg0);
 FUNC_0(VAR_0, "               AdaptMode=0x%02x, Tags=%i(%02i), DelayReset=%is\n",
  VAR_2->channel_cfg, VAR_2->max_tag,
  1 << VAR_2->max_tag, VAR_2->delay_time);
}
