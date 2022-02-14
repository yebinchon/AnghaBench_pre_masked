
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct nvram {TYPE_7__* bus; } ;
struct scsi_qla_host {TYPE_8__* host; TYPE_2__* bus_settings; struct nvram nvram; } ;
struct scsi_device {int channel; int id; scalar_t__ ppr; scalar_t__ wdtr; scalar_t__ sdtr; scalar_t__ tagged_supported; TYPE_1__* host; } ;
struct TYPE_18__ {int sync_mask; int wide_mask; int ppr_mask; scalar_t__ no_ppr; scalar_t__ no_wide; scalar_t__ no_sync; } ;
struct TYPE_17__ {int host_lock; } ;
struct TYPE_16__ {TYPE_6__* target; } ;
struct TYPE_14__ {scalar_t__ enable_sync; scalar_t__ enable_wide; } ;
struct TYPE_12__ {scalar_t__ enable_ppr; } ;
struct TYPE_13__ {TYPE_3__ flags; } ;
struct TYPE_15__ {TYPE_5__ parameter; TYPE_4__ ppr_1x160; } ;
struct TYPE_11__ {int qtag_enables; int hiwat; } ;
struct TYPE_10__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 TYPE_9__ VAR_1 ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*,int) ;
 int FUNC_2 (struct scsi_qla_host*,struct scsi_device*) ;
 int FUNC_3 (struct scsi_qla_host*,int,int) ;
 int FUNC_4 (struct scsi_device*,int) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (int ,unsigned long) ;

__attribute__((used)) static int
FUNC_7(struct scsi_device *VAR_2)
{
 struct scsi_qla_host *VAR_3;
 int VAR_4 = 3;
 int VAR_5 = VAR_2->channel;
 int VAR_6 = VAR_2->id;
 int VAR_7 = 0;
 struct nvram *VAR_8;
 unsigned long VAR_9;

 VAR_3 = (struct scsi_qla_host *)VAR_2->host->hostdata;
 VAR_8 = &VAR_3->nvram;

 if (FUNC_1(VAR_3, VAR_5))
  return 1;

 if (VAR_2->tagged_supported &&
     (VAR_3->bus_settings[VAR_5].qtag_enables & (VAR_0 << VAR_6))) {
  FUNC_4(VAR_2, VAR_3->bus_settings[VAR_5].hiwat);
 } else {
  FUNC_4(VAR_2, VAR_4);
 }

 VAR_8->bus[VAR_5].target[VAR_6].parameter.enable_sync = VAR_2->sdtr;
 VAR_8->bus[VAR_5].target[VAR_6].parameter.enable_wide = VAR_2->wdtr;
 VAR_8->bus[VAR_5].target[VAR_6].ppr_1x160.flags.enable_ppr = VAR_2->ppr;

 if (VAR_1.no_sync ||
     (VAR_1.sync_mask &&
      (~VAR_1.sync_mask & (1 << VAR_6))))
  VAR_8->bus[VAR_5].target[VAR_6].parameter.enable_sync = 0;
 if (VAR_1.no_wide ||
     (VAR_1.wide_mask &&
      (~VAR_1.wide_mask & (1 << VAR_6))))
  VAR_8->bus[VAR_5].target[VAR_6].parameter.enable_wide = 0;
 if (FUNC_0(VAR_3)) {
  if (VAR_1.no_ppr ||
      (VAR_1.ppr_mask &&
       (~VAR_1.ppr_mask & (1 << VAR_6))))
   VAR_8->bus[VAR_5].target[VAR_6].ppr_1x160.flags.enable_ppr = 0;
 }

 FUNC_5(VAR_3->host->host_lock, VAR_9);
 if (VAR_8->bus[VAR_5].target[VAR_6].parameter.enable_sync)
  VAR_7 = FUNC_3(VAR_3, VAR_5, VAR_6);
 FUNC_2(VAR_3, VAR_2);
 FUNC_6(VAR_3->host->host_lock, VAR_9);
 return VAR_7;
}
