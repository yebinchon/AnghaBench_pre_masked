
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct nvram {TYPE_7__* bus; } ;
struct scsi_qla_host {TYPE_5__* bus_settings; struct nvram nvram; } ;
struct TYPE_14__ {int max_queue_depth; TYPE_6__* target; } ;
struct TYPE_10__ {int sync_offset; scalar_t__ lun_disable; scalar_t__ device_enable; } ;
struct TYPE_9__ {int sync_offset; scalar_t__ device_enable; } ;
struct TYPE_11__ {TYPE_3__ flags1x80; TYPE_2__ flags1x160; } ;
struct TYPE_8__ {scalar_t__ tag_queuing; } ;
struct TYPE_13__ {int sync_period; int execution_throttle; TYPE_4__ flags; TYPE_1__ parameter; } ;
struct TYPE_12__ {int qtag_enables; int device_enables; int lun_disables; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct scsi_qla_host*,int,int*) ;

__attribute__((used)) static int
FUNC_2(struct scsi_qla_host *VAR_12, int VAR_13, int VAR_14)
{
 struct nvram *VAR_15 = &VAR_12->nvram;
 uint16_t VAR_16[VAR_2];
 int VAR_17, VAR_18;
 uint16_t VAR_19;


 VAR_16[0] = VAR_5;
 VAR_16[1] = (uint16_t)((VAR_13 ? VAR_14 | VAR_1 : VAR_14) << 8);






 VAR_16[2] = (VAR_9 | VAR_6 | VAR_10
   | VAR_11 | VAR_8 | VAR_7);

 if (FUNC_0(VAR_12))
  VAR_16[3] = VAR_15->bus[VAR_13].target[VAR_14].flags.flags1x160.sync_offset << 8;
 else
  VAR_16[3] = VAR_15->bus[VAR_13].target[VAR_14].flags.flags1x80.sync_offset << 8;
 VAR_16[3] |= VAR_15->bus[VAR_13].target[VAR_14].sync_period;
 VAR_17 = FUNC_1(VAR_12, 0x0f, VAR_16);


 VAR_19 = (VAR_0 << VAR_14);
 if (VAR_15->bus[VAR_13].target[VAR_14].parameter.tag_queuing)
  VAR_12->bus_settings[VAR_13].qtag_enables |= VAR_19;


 if (FUNC_0(VAR_12)) {
  if (VAR_15->bus[VAR_13].target[VAR_14].flags.flags1x160.device_enable)
   VAR_12->bus_settings[VAR_13].device_enables |= VAR_19;
  VAR_12->bus_settings[VAR_13].lun_disables |= 0;
 } else {
  if (VAR_15->bus[VAR_13].target[VAR_14].flags.flags1x80.device_enable)
   VAR_12->bus_settings[VAR_13].device_enables |= VAR_19;

  if (VAR_15->bus[VAR_13].target[VAR_14].flags.flags1x80.lun_disable)
   VAR_12->bus_settings[VAR_13].lun_disables |= VAR_19;
 }


 for (VAR_18 = 0; VAR_18 < VAR_3; VAR_18++) {
  VAR_16[0] = VAR_4;
  VAR_16[1] = (uint16_t)((VAR_13 ? VAR_14 | VAR_1 : VAR_14) << 8);
  VAR_16[1] |= VAR_18;
  VAR_16[2] = VAR_15->bus[VAR_13].max_queue_depth;
  VAR_16[3] = VAR_15->bus[VAR_13].target[VAR_14].execution_throttle;
  VAR_17 |= FUNC_1(VAR_12, 0x0f, VAR_16);
 }

 return VAR_17;
}
