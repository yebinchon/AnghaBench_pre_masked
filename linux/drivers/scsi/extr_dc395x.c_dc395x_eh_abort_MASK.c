
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct scsi_cmnd {int result; TYPE_2__* device; } ;
struct ScsiReqBlk {int list; } ;
struct DeviceCtlBlk {int srb_going_list; int srb_waiting_list; } ;
struct AdapterCtlBlk {int srb_free_list; } ;
struct TYPE_4__ {scalar_t__ lun; int id; TYPE_1__* host; } ;
struct TYPE_3__ {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,...) ;
 struct ScsiReqBlk* FUNC_1 (struct scsi_cmnd*,int *) ;
 struct DeviceCtlBlk* FUNC_2 (struct AdapterCtlBlk*,int ,scalar_t__) ;
 int FUNC_3 (struct DeviceCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct AdapterCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_7 (struct AdapterCtlBlk*,struct ScsiReqBlk*) ;

__attribute__((used)) static int FUNC_8(struct scsi_cmnd *VAR_5)
{




 struct AdapterCtlBlk *VAR_6 =
     (struct AdapterCtlBlk *)VAR_5->device->host->hostdata;
 struct DeviceCtlBlk *VAR_7;
 struct ScsiReqBlk *VAR_8;
 FUNC_0(VAR_3, "eh_abort: (0x%p) target=<%02i-%i> cmd=%p\n",
  VAR_5, VAR_5->device->id, (u8)VAR_5->device->lun, VAR_5);

 VAR_7 = FUNC_2(VAR_6, VAR_5->device->id, VAR_5->device->lun);
 if (!VAR_7) {
  FUNC_0(VAR_2, "eh_abort: No such device\n");
  return VAR_1;
 }

 VAR_8 = FUNC_1(VAR_5, &VAR_7->srb_waiting_list);
 if (VAR_8) {
  FUNC_5(&VAR_8->list);
  FUNC_7(VAR_6, VAR_8);
  FUNC_6(VAR_6, VAR_8);
  FUNC_3(VAR_7, VAR_8);
  FUNC_4(&VAR_8->list, &VAR_6->srb_free_list);
  FUNC_0(VAR_2, "eh_abort: Command was waiting\n");
  VAR_5->result = VAR_0 << 16;
  return VAR_4;
 }
 VAR_8 = FUNC_1(VAR_5, &VAR_7->srb_going_list);
 if (VAR_8) {
  FUNC_0(VAR_2, "eh_abort: Command in progress\n");

 } else {
  FUNC_0(VAR_2, "eh_abort: Command not found\n");
 }
 return VAR_1;
}
