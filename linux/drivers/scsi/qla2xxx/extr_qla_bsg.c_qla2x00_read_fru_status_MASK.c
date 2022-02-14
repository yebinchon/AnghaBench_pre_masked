
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int option; int offset; int device; } ;
struct qla_status_reg {int status_reg; TYPE_2__ field_address; } ;
struct qla_hw_data {int s_dma_pool; } ;
struct TYPE_12__ {scalar_t__* vendor_rsp; } ;
struct TYPE_13__ {TYPE_4__ vendor_reply; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; int result; TYPE_5__ reply_data; } ;
struct TYPE_11__ {int sg_cnt; int sg_list; } ;
struct TYPE_9__ {int sg_cnt; int sg_list; } ;
struct bsg_job {int reply_len; TYPE_3__ reply_payload; TYPE_1__ request_payload; struct fc_bsg_reply* reply; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_14__ {struct qla_hw_data* hw; } ;
typedef TYPE_6__ scsi_qla_host_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bsg_job*,int,int) ;
 int * FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 struct Scsi_Host* FUNC_3 (struct bsg_job*) ;
 int FUNC_4 (TYPE_6__*,int ,int *,int ,int ,int,int ) ;
 int FUNC_5 (int ,int ,struct qla_status_reg*,int) ;
 int FUNC_6 (int ,int ,struct qla_status_reg*,int) ;
 TYPE_6__* FUNC_7 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_8(struct bsg_job *VAR_5)
{
 struct fc_bsg_reply *VAR_6 = VAR_5->reply;
 struct Scsi_Host *VAR_7 = FUNC_3(VAR_5);
 scsi_qla_host_t *VAR_8 = FUNC_7(VAR_7);
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 int VAR_10 = 0;
 uint8_t VAR_11[VAR_1];
 struct qla_status_reg *VAR_12 = (void *)VAR_11;
 dma_addr_t VAR_13;
 uint8_t *VAR_14 = FUNC_1(VAR_9->s_dma_pool, VAR_4, &VAR_13);

 if (!VAR_14) {
  VAR_6->reply_data.vendor_reply.vendor_rsp[0] =
      VAR_3;
  goto done;
 }

 FUNC_6(VAR_5->request_payload.sg_list,
     VAR_5->request_payload.sg_cnt, VAR_12, sizeof(*VAR_12));

 VAR_10 = FUNC_4(VAR_8, VAR_13, VAR_14,
     VAR_12->field_address.device, VAR_12->field_address.offset,
     sizeof(VAR_12->status_reg), VAR_12->field_address.option);
 VAR_12->status_reg = *VAR_14;

 if (VAR_10) {
  VAR_6->reply_data.vendor_reply.vendor_rsp[0] =
      VAR_2;
  goto dealloc;
 }

 FUNC_5(VAR_5->reply_payload.sg_list,
     VAR_5->reply_payload.sg_cnt, VAR_12, sizeof(*VAR_12));

 VAR_6->reply_data.vendor_reply.vendor_rsp[0] = 0;

dealloc:
 FUNC_2(VAR_9->s_dma_pool, VAR_14, VAR_13);

done:
 VAR_5->reply_len = sizeof(struct fc_bsg_reply);
 VAR_6->reply_payload_rcv_len = sizeof(*VAR_12);
 VAR_6->result = VAR_0 << 16;
 FUNC_0(VAR_5, VAR_6->result,
         VAR_6->reply_payload_rcv_len);

 return 0;
}
