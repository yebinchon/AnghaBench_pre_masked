
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_14__ ;


struct TYPE_20__ {scalar_t__ dxfer_len; char interface_id; int flags; int duration; scalar_t__ cmd_len; scalar_t__ resid; scalar_t__ driver_status; scalar_t__ host_status; scalar_t__ info; scalar_t__ msg_status; scalar_t__ masked_status; scalar_t__ status; } ;
typedef TYPE_3__ sg_io_hdr_t ;
struct TYPE_23__ {int disk; TYPE_2__* device; int detaching; } ;
struct TYPE_22__ {int f_ref; TYPE_6__* parentdp; } ;
struct TYPE_18__ {unsigned char cmd_opcode; } ;
struct TYPE_21__ {TYPE_14__* rq; scalar_t__ bio; TYPE_1__ data; TYPE_3__ header; } ;
struct TYPE_19__ {int request_queue; } ;
struct TYPE_17__ {int timeout; } ;
typedef TYPE_4__ Sg_request ;
typedef TYPE_5__ Sg_fd ;
typedef TYPE_6__ Sg_device ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,TYPE_14__*,int,int ) ;
 int FUNC_3 (TYPE_14__*) ;
 int VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_14__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,TYPE_6__*,char*,int,...) ;
 int FUNC_10 (TYPE_5__*,TYPE_4__*) ;
 int VAR_6 ;
 int FUNC_11 (TYPE_4__*,unsigned char*) ;

__attribute__((used)) static int
FUNC_12(Sg_fd * VAR_7, Sg_request * VAR_8,
  unsigned char *VAR_9, int VAR_10, int VAR_11)
{
 int VAR_12, VAR_13;
 Sg_device *VAR_14 = VAR_7->parentdp;
 sg_io_hdr_t *VAR_15 = &VAR_8->header;

 VAR_8->data.cmd_opcode = VAR_9[0];
 VAR_15->status = 0;
 VAR_15->masked_status = 0;
 VAR_15->msg_status = 0;
 VAR_15->info = 0;
 VAR_15->host_status = 0;
 VAR_15->driver_status = 0;
 VAR_15->resid = 0;
 FUNC_0(4, FUNC_9(VAR_2, VAR_7->parentdp,
   "sg_common_write:  scsi opcode=0x%02x, cmd_size=%d\n",
   (int) VAR_9[0], (int) VAR_15->cmd_len));

 if (VAR_15->dxfer_len >= VAR_4)
  return -VAR_0;

 VAR_12 = FUNC_11(VAR_8, VAR_9);
 if (VAR_12) {
  FUNC_0(1, FUNC_9(VAR_2, VAR_7->parentdp,
   "sg_common_write: start_req err=%d\n", VAR_12));
  FUNC_8(VAR_8);
  FUNC_10(VAR_7, VAR_8);
  return VAR_12;
 }
 if (FUNC_1(&VAR_14->detaching)) {
  if (VAR_8->bio) {
   FUNC_7(FUNC_6(VAR_8->rq));
   FUNC_3(VAR_8->rq);
   VAR_8->rq = ((void*)0);
  }

  FUNC_8(VAR_8);
  FUNC_10(VAR_7, VAR_8);
  return -VAR_1;
 }

 VAR_15->duration = FUNC_4(VAR_5);
 if (VAR_15->interface_id != '\0' &&
     (VAR_3 & VAR_15->flags))
  VAR_13 = 0;
 else
  VAR_13 = 1;

 VAR_8->rq->timeout = VAR_10;
 FUNC_5(&VAR_7->f_ref);
 FUNC_2(VAR_14->device->request_queue, VAR_14->disk,
         VAR_8->rq, VAR_13, VAR_6);
 return 0;
}
