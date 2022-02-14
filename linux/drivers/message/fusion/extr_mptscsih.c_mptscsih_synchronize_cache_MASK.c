
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int lun; TYPE_1__* vtarget; int configured_lun; } ;
typedef TYPE_2__ VirtDevice ;
struct TYPE_8__ {int physDiskNum; int data_dma; int lun; int id; int channel; scalar_t__ rsvd2; scalar_t__ rsvd; scalar_t__ size; int * data; scalar_t__ flags; int cmd; } ;
struct TYPE_6__ {int tflags; scalar_t__ type; int id; int channel; scalar_t__ deleted; } ;
typedef int MPT_SCSI_HOST ;
typedef TYPE_3__ INTERNAL_CMD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1(MPT_SCSI_HOST *VAR_3, VirtDevice *VAR_4)
{
 INTERNAL_CMD VAR_5;




 if (VAR_4->vtarget->tflags & VAR_0)
  return;

 if (VAR_4->vtarget->type != VAR_2 || VAR_4->vtarget->deleted ||
     !VAR_4->configured_lun)
  return;




 VAR_5.cmd = VAR_1;
 VAR_5.flags = 0;
 VAR_5.physDiskNum = -1;
 VAR_5.data = ((void*)0);
 VAR_5.data_dma = -1;
 VAR_5.size = 0;
 VAR_5.rsvd = VAR_5.rsvd2 = 0;
 VAR_5.channel = VAR_4->vtarget->channel;
 VAR_5.id = VAR_4->vtarget->id;
 VAR_5.lun = VAR_4->lun;

 FUNC_0(VAR_3, &VAR_5);
}
