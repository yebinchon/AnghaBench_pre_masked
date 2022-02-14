
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t u32 ;
struct scsi_cmnd {int cmd_len; int * cmnd; TYPE_2__* device; int * host_scribble; void* result; int sense_buffer; TYPE_1__* request; } ;
struct asc_board {int dev; scalar_t__ adv_reqp_addr; TYPE_3__* adv_reqp; } ;
typedef int dma_addr_t ;
struct TYPE_14__ {size_t srb_tag; int cdb_len; void* data_cnt; scalar_t__ sg_real_addr; int * sg_list_ptr; scalar_t__ data_addr; int sense_len; void* sense_addr; int target_lun; int target_id; int cdb16; int cdb; scalar_t__ done_status; scalar_t__ scsi_cntl; scalar_t__ cntl; } ;
struct TYPE_13__ {struct scsi_cmnd* cmndp; int * sgblkp; TYPE_4__ scsi_req_q; scalar_t__ req_addr; } ;
typedef TYPE_3__ adv_req_t ;
struct TYPE_15__ {int sg_tablesize; } ;
struct TYPE_12__ {TYPE_8__* host; int lun; int id; } ;
struct TYPE_11__ {size_t tag; } ;
typedef TYPE_4__ ADV_SCSI_REQ_Q ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,TYPE_4__*) ;
 int FUNC_2 (int,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_8__*,int ) ;
 int FUNC_4 (TYPE_8__*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_5 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (struct asc_board*,TYPE_3__*,TYPE_4__*,struct scsi_cmnd*,int) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int *,int) ;
 int FUNC_11 (int ,struct scsi_cmnd*,char*,int,int ) ;
 int FUNC_12 (struct scsi_cmnd*) ;
 int FUNC_13 (struct scsi_cmnd*) ;
 int FUNC_14 (struct scsi_cmnd*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int
FUNC_15(struct asc_board *VAR_12, struct scsi_cmnd *VAR_13,
       adv_req_t **VAR_14)
{
 u32 VAR_15 = VAR_13->request->tag;
 adv_req_t *VAR_16;
 ADV_SCSI_REQ_Q *VAR_17;
 int VAR_18;
 int VAR_19;
 dma_addr_t VAR_20;





 VAR_16 = &VAR_12->adv_reqp[VAR_15];
 if (VAR_16->cmndp && VAR_16->cmndp != VAR_13 ) {
  FUNC_0(1, "no free adv_req_t\n");
  FUNC_3(VAR_13->device->host, VAR_9);
  return VAR_2;
 }

 VAR_16->req_addr = VAR_12->adv_reqp_addr + (VAR_15 * sizeof(adv_req_t));

 VAR_17 = &VAR_16->scsi_req_q;




 VAR_17->cntl = VAR_17->scsi_cntl = VAR_17->done_status = 0;




 VAR_17->srb_tag = VAR_15;




 VAR_16->cmndp = VAR_13;
 VAR_13->host_scribble = (void *)VAR_16;






 VAR_17->cdb_len = VAR_13->cmd_len;

 FUNC_10(VAR_17->cdb, VAR_13->cmnd, VAR_13->cmd_len < 12 ? VAR_13->cmd_len : 12);

 if (VAR_13->cmd_len > 12) {
  int VAR_21 = VAR_13->cmd_len - 12;

  FUNC_10(VAR_17->cdb16, &VAR_13->cmnd[12], VAR_21);
 }

 VAR_17->target_id = VAR_13->device->id;
 VAR_17->target_lun = VAR_13->device->lun;

 VAR_20 = FUNC_8(VAR_12->dev, VAR_13->sense_buffer,
        VAR_8, VAR_6);
 if (FUNC_9(VAR_12->dev, VAR_20)) {
  FUNC_0(1, "failed to map sense buffer\n");
  FUNC_3(VAR_13->device->host, VAR_9);
  return VAR_2;
 }
 VAR_17->sense_addr = FUNC_7(VAR_20);
 VAR_17->sense_len = VAR_8;



 VAR_19 = FUNC_13(VAR_13);
 if (VAR_19 < 0) {
  FUNC_0(1, "failed to map SG list\n");
  FUNC_3(VAR_13->device->host, VAR_9);
  return VAR_2;
 } else if (VAR_19 == 0) {

  VAR_16->sgblkp = ((void*)0);
  VAR_17->data_cnt = 0;

  VAR_17->data_addr = 0;
  VAR_17->sg_list_ptr = ((void*)0);
  VAR_17->sg_real_addr = 0;
 } else {
  if (VAR_19 > VAR_0) {
   FUNC_11(VAR_7, VAR_13, "use_sg %d > "
       "ADV_MAX_SG_LIST %d\n", VAR_19,
       VAR_13->device->host->sg_tablesize);
   FUNC_14(VAR_13);
   VAR_13->result = FUNC_5(VAR_5);
   VAR_16->cmndp = ((void*)0);
   VAR_13->host_scribble = ((void*)0);

   return VAR_3;
  }

  VAR_17->data_cnt = FUNC_7(FUNC_12(VAR_13));

  VAR_18 = FUNC_6(VAR_12, VAR_16, VAR_17, VAR_13, VAR_19);
  if (VAR_18 != VAR_1) {
   FUNC_14(VAR_13);
   VAR_13->result = FUNC_5(VAR_5);
   VAR_16->cmndp = ((void*)0);
   VAR_13->host_scribble = ((void*)0);

   return VAR_18;
  }

  FUNC_4(VAR_13->device->host, VAR_11, VAR_19);
 }

 FUNC_3(VAR_13->device->host, VAR_10);

 FUNC_1(2, VAR_17);
 FUNC_2(1, VAR_13->cmnd, VAR_13->cmd_len);

 *VAR_14 = VAR_16;

 return VAR_4;
}
