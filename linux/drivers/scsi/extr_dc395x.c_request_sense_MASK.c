
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u8 ;
struct scsi_cmnd {struct scsi_cmnd* sense_buffer; TYPE_1__* device; } ;
struct ScsiReqBlk {int sg_count; int list; struct scsi_cmnd* cmd; scalar_t__ sg_index; TYPE_3__* segment_x; void* total_xfer_length; void* xferred; scalar_t__ target_status; scalar_t__ adapter_status; int flag; } ;
struct DeviceCtlBlk {int srb_waiting_list; int target_lun; int target_id; } ;
struct AdapterCtlBlk {TYPE_2__* dev; } ;
struct TYPE_6__ {int address; void* length; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ lun; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int *,struct scsi_cmnd*,void*,int ) ;
 int FUNC_1 (int ,char*,struct scsi_cmnd*,int ,void*) ;
 int FUNC_2 (int ,char*,struct scsi_cmnd*,int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct scsi_cmnd*,int ,void*) ;
 scalar_t__ FUNC_5 (struct AdapterCtlBlk*,struct DeviceCtlBlk*,struct ScsiReqBlk*) ;
 int FUNC_6 (struct AdapterCtlBlk*,int) ;

__attribute__((used)) static void FUNC_7(struct AdapterCtlBlk *VAR_8, struct DeviceCtlBlk *VAR_9,
  struct ScsiReqBlk *VAR_10)
{
 struct scsi_cmnd *VAR_11 = VAR_10->cmd;
 FUNC_1(VAR_1, "request_sense: (0x%p) <%02i-%i>\n",
  VAR_11, VAR_11->device->id, (u8)VAR_11->device->lun);

 VAR_10->flag |= VAR_0;
 VAR_10->adapter_status = 0;
 VAR_10->target_status = 0;


 FUNC_4(VAR_11->sense_buffer, 0, VAR_7);


 VAR_10->segment_x[VAR_3 - 1].address =
     VAR_10->segment_x[0].address;
 VAR_10->segment_x[VAR_3 - 1].length =
     VAR_10->segment_x[0].length;
 VAR_10->xferred = VAR_10->total_xfer_length;

 VAR_10->total_xfer_length = VAR_7;
 VAR_10->segment_x[0].length = VAR_7;

 VAR_10->segment_x[0].address = FUNC_0(&VAR_8->dev->dev,
   VAR_11->sense_buffer, VAR_7,
   VAR_4);
 FUNC_1(VAR_2, "request_sense: map buffer %p->%08x(%05x)\n",
        VAR_11->sense_buffer, VAR_10->segment_x[0].address,
        VAR_7);
 VAR_10->sg_count = 1;
 VAR_10->sg_index = 0;

 if (FUNC_5(VAR_8, VAR_9, VAR_10)) {
  FUNC_2(VAR_6,
   "request_sense: (0x%p) failed <%02i-%i>\n",
   VAR_10->cmd, VAR_9->target_id, VAR_9->target_lun);
  FUNC_3(&VAR_10->list, &VAR_9->srb_waiting_list);
  FUNC_6(VAR_8, VAR_5 / 100);
 }
}
