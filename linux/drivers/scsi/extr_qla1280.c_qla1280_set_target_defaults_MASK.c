
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct nvram {TYPE_8__* bus; } ;
struct scsi_qla_host {struct nvram nvram; } ;
struct TYPE_16__ {TYPE_7__* target; scalar_t__ max_queue_depth; } ;
struct TYPE_13__ {int device_enable; int sync_offset; } ;
struct TYPE_10__ {int device_enable; int sync_offset; } ;
struct TYPE_14__ {TYPE_5__ flags1x80; TYPE_2__ flags1x160; } ;
struct TYPE_11__ {int enable_ppr; int ppr_options; int ppr_bus_width; } ;
struct TYPE_12__ {TYPE_3__ flags; } ;
struct TYPE_9__ {int renegotiate_on_error; int auto_request_sense; int tag_queuing; int enable_sync; int enable_wide; int parity_checking; int disconnect_allowed; } ;
struct TYPE_15__ {int sync_period; TYPE_6__ flags; TYPE_4__ ppr_1x160; TYPE_1__ parameter; scalar_t__ execution_throttle; } ;


 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;

__attribute__((used)) static void
FUNC_1(struct scsi_qla_host *VAR_0, int VAR_1, int VAR_2)
{
 struct nvram *VAR_3 = &VAR_0->nvram;

 VAR_3->bus[VAR_1].target[VAR_2].parameter.renegotiate_on_error = 1;
 VAR_3->bus[VAR_1].target[VAR_2].parameter.auto_request_sense = 1;
 VAR_3->bus[VAR_1].target[VAR_2].parameter.tag_queuing = 1;
 VAR_3->bus[VAR_1].target[VAR_2].parameter.enable_sync = 1;

 VAR_3->bus[VAR_1].target[VAR_2].parameter.enable_wide = 1;

 VAR_3->bus[VAR_1].target[VAR_2].execution_throttle =
  VAR_3->bus[VAR_1].max_queue_depth - 1;
 VAR_3->bus[VAR_1].target[VAR_2].parameter.parity_checking = 1;
 VAR_3->bus[VAR_1].target[VAR_2].parameter.disconnect_allowed = 1;

 if (FUNC_0(VAR_0)) {
  VAR_3->bus[VAR_1].target[VAR_2].flags.flags1x160.device_enable = 1;
  VAR_3->bus[VAR_1].target[VAR_2].flags.flags1x160.sync_offset = 0x0e;
  VAR_3->bus[VAR_1].target[VAR_2].sync_period = 9;
  VAR_3->bus[VAR_1].target[VAR_2].ppr_1x160.flags.enable_ppr = 1;
  VAR_3->bus[VAR_1].target[VAR_2].ppr_1x160.flags.ppr_options = 2;
  VAR_3->bus[VAR_1].target[VAR_2].ppr_1x160.flags.ppr_bus_width = 1;
 } else {
  VAR_3->bus[VAR_1].target[VAR_2].flags.flags1x80.device_enable = 1;
  VAR_3->bus[VAR_1].target[VAR_2].flags.flags1x80.sync_offset = 12;
  VAR_3->bus[VAR_1].target[VAR_2].sync_period = 10;
 }
}
