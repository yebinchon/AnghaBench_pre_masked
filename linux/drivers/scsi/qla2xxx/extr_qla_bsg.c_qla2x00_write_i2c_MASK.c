
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct qla_i2c_access {int option; int length; int offset; int device; int buffer; } ;
struct qla_hw_data {int s_dma_pool; } ;
struct TYPE_8__ {scalar_t__* vendor_rsp; } ;
struct TYPE_9__ {TYPE_2__ vendor_reply; } ;
struct fc_bsg_reply {int result; int reply_payload_rcv_len; TYPE_3__ reply_data; } ;
struct TYPE_7__ {int sg_cnt; int sg_list; } ;
struct bsg_job {int reply_len; TYPE_1__ request_payload; struct fc_bsg_reply* reply; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_10__ {struct qla_hw_data* hw; } ;
typedef TYPE_4__ scsi_qla_host_t ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bsg_job*,int,int ) ;
 int * FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int *,int ) ;
 struct Scsi_Host* FUNC_3 (struct bsg_job*) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (TYPE_4__*,int ,int *,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,struct qla_i2c_access*,int) ;
 TYPE_4__* FUNC_7 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_8(struct bsg_job *VAR_5)
{
 struct fc_bsg_reply *VAR_6 = VAR_5->reply;
 struct Scsi_Host *VAR_7 = FUNC_3(VAR_5);
 scsi_qla_host_t *VAR_8 = FUNC_7(VAR_7);
 struct qla_hw_data *VAR_9 = VAR_8->hw;
 int VAR_10 = 0;
 uint8_t VAR_11[VAR_1];
 struct qla_i2c_access *VAR_12 = (void *)VAR_11;
 dma_addr_t VAR_13;
 uint8_t *VAR_14 = FUNC_1(VAR_9->s_dma_pool, VAR_4, &VAR_13);

 if (!VAR_14) {
  VAR_6->reply_data.vendor_reply.vendor_rsp[0] =
      VAR_3;
  goto done;
 }

 FUNC_6(VAR_5->request_payload.sg_list,
     VAR_5->request_payload.sg_cnt, VAR_12, sizeof(*VAR_12));

 FUNC_4(VAR_14, VAR_12->buffer, VAR_12->length);
 VAR_10 = FUNC_5(VAR_8, VAR_13, VAR_14,
     VAR_12->device, VAR_12->offset, VAR_12->length, VAR_12->option);

 if (VAR_10) {
  VAR_6->reply_data.vendor_reply.vendor_rsp[0] =
      VAR_2;
  goto dealloc;
 }

 VAR_6->reply_data.vendor_reply.vendor_rsp[0] = 0;

dealloc:
 FUNC_2(VAR_9->s_dma_pool, VAR_14, VAR_13);

done:
 VAR_5->reply_len = sizeof(struct fc_bsg_reply);
 VAR_6->result = VAR_0 << 16;
 FUNC_0(VAR_5, VAR_6->result,
         VAR_6->reply_payload_rcv_len);

 return 0;
}
