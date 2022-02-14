
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct fas216_device {int sync_state; char period; char sof; int stp; } ;
struct TYPE_11__ {int async_stp; void* phase; int msgs; } ;
struct TYPE_10__ {char sync_max_depth; int clockrate; int asyncperiod; } ;
struct TYPE_14__ {TYPE_4__* SCpnt; TYPE_2__ scsi; TYPE_1__ ifcfg; struct fas216_device* device; } ;
struct TYPE_13__ {TYPE_3__* device; } ;
struct TYPE_12__ {size_t id; } ;
typedef TYPE_5__ FAS216_Info ;


 int VAR_0 ;

 int VAR_1 ;

 void* VAR_2 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*,size_t) ;
 int FUNC_2 (TYPE_5__*,char) ;
 int FUNC_3 (int *,int,int const,...) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;


 int VAR_4 ;

__attribute__((used)) static void FUNC_5(FAS216_Info *VAR_5, char *VAR_6)
{
 struct fas216_device *VAR_7 = &VAR_5->device[VAR_5->SCpnt->device->id];
 enum { sync, async, none, reject } VAR_8 = none;
 VAR_8 = reject;


 switch (VAR_8) {
 case sync:
  VAR_7->period = VAR_6[3];
  VAR_7->sof = VAR_6[4];
  VAR_7->stp = FUNC_2(VAR_5, VAR_6[3] * 4);
  FUNC_1(VAR_5, VAR_5->SCpnt->device->id);
  break;

 case reject:
  FUNC_0(VAR_5, VAR_0);
  FUNC_4(&VAR_5->scsi.msgs);
  FUNC_3(&VAR_5->scsi.msgs, 1, 130);
  VAR_5->scsi.phase = VAR_2;


 case async:
  VAR_7->period = VAR_5->ifcfg.asyncperiod / 4;
  VAR_7->sof = 0;
  VAR_7->stp = VAR_5->scsi.async_stp;
  FUNC_1(VAR_5, VAR_5->SCpnt->device->id);
  break;

 case none:
  break;
 }
}
