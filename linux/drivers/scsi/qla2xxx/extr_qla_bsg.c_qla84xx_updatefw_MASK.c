
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_13__ {void* length; int address; } ;
struct verify_chip_entry_84xx {int entry_count; void* data_seg_cnt; TYPE_3__ dsd; void* fw_seq_size; void* fw_size; void* fw_ver; void* options; int entry_type; } ;
struct qla_hw_data {TYPE_4__* pdev; int s_dma_pool; } ;
struct TYPE_11__ {scalar_t__* vendor_cmd; } ;
struct TYPE_12__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct fc_bsg_reply {int reply_payload_rcv_len; int result; } ;
struct TYPE_15__ {scalar_t__ sg_cnt; scalar_t__ payload_len; int sg_list; } ;
struct bsg_job {int reply_len; TYPE_5__ request_payload; struct fc_bsg_reply* reply; struct fc_bsg_request* request; } ;
struct Scsi_Host {int dummy; } ;
struct TYPE_16__ {struct qla_hw_data* hw; } ;
typedef TYPE_6__ scsi_qla_host_t ;
typedef int dma_addr_t ;
struct TYPE_14__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct bsg_job*,int ,int ) ;
 void* FUNC_2 (int) ;
 void* FUNC_3 (scalar_t__) ;
 void* FUNC_4 (int *,scalar_t__,int *,int ) ;
 int FUNC_5 (int *,scalar_t__,void*,int ) ;
 scalar_t__ FUNC_6 (int *,int ,scalar_t__,int ) ;
 int FUNC_7 (int ,struct verify_chip_entry_84xx*,int ) ;
 struct verify_chip_entry_84xx* FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int *,int ,scalar_t__,int ) ;
 struct Scsi_Host* FUNC_10 (struct bsg_job*) ;
 scalar_t__ FUNC_11 (scalar_t__*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,TYPE_6__*,int,char*) ;
 int VAR_12 ;
 int FUNC_14 (int ,TYPE_6__*,int,char*,...) ;
 int VAR_13 ;
 int FUNC_15 (TYPE_6__*,struct verify_chip_entry_84xx*,int ,int ,int) ;
 int FUNC_16 (int ,scalar_t__,void*,scalar_t__) ;
 TYPE_6__* FUNC_17 (struct Scsi_Host*) ;

__attribute__((used)) static int
FUNC_18(struct bsg_job *VAR_14)
{
 struct fc_bsg_request *VAR_15 = VAR_14->request;
 struct fc_bsg_reply *VAR_16 = VAR_14->reply;
 struct Scsi_Host *VAR_17 = FUNC_10(VAR_14);
 scsi_qla_host_t *VAR_18 = FUNC_17(VAR_17);
 struct qla_hw_data *VAR_19 = VAR_18->hw;
 struct verify_chip_entry_84xx *VAR_20 = ((void*)0);
 dma_addr_t VAR_21, VAR_22;
 void *VAR_23 = ((void*)0);
 int VAR_24 = 0;
 uint32_t VAR_25;
 uint32_t VAR_26;
 uint16_t VAR_27;
 uint32_t VAR_28;
 uint32_t VAR_29;

 if (!FUNC_0(VAR_19)) {
  FUNC_13(VAR_12, VAR_18, 0x7032,
      "Not 84xx, exiting.\n");
  return -VAR_5;
 }

 VAR_25 = FUNC_6(&VAR_19->pdev->dev, VAR_14->request_payload.sg_list,
  VAR_14->request_payload.sg_cnt, VAR_3);
 if (!VAR_25) {
  FUNC_14(VAR_13, VAR_18, 0x7033,
      "dma_map_sg returned %d for request.\n", VAR_25);
  return -VAR_6;
 }

 if (VAR_25 != VAR_14->request_payload.sg_cnt) {
  FUNC_14(VAR_13, VAR_18, 0x7034,
      "DMA mapping resulted in different sg counts, "
      "request_sg_cnt: %x dma_request_sg_cnt: %x.\n",
      VAR_14->request_payload.sg_cnt, VAR_25);
  VAR_24 = -VAR_4;
  goto done_unmap_sg;
 }

 VAR_26 = VAR_14->request_payload.payload_len;
 VAR_23 = FUNC_4(&VAR_19->pdev->dev, VAR_26,
  &VAR_22, VAR_7);
 if (!VAR_23) {
  FUNC_14(VAR_13, VAR_18, 0x7035,
      "DMA alloc failed for fw_buf.\n");
  VAR_24 = -VAR_6;
  goto done_unmap_sg;
 }

 FUNC_16(VAR_14->request_payload.sg_list,
  VAR_14->request_payload.sg_cnt, VAR_23, VAR_26);

 VAR_20 = FUNC_8(VAR_19->s_dma_pool, VAR_7, &VAR_21);
 if (!VAR_20) {
  FUNC_14(VAR_13, VAR_18, 0x7036,
      "DMA alloc failed for fw buffer.\n");
  VAR_24 = -VAR_6;
  goto done_free_fw_buf;
 }

 VAR_28 = VAR_15->rqst_data.h_vendor.vendor_cmd[1];
 VAR_29 = FUNC_11((uint32_t *)VAR_23 + 2);

 VAR_20->entry_type = VAR_11;
 VAR_20->entry_count = 1;

 VAR_27 = VAR_10 | VAR_9;
 if (VAR_28 == VAR_0)
  VAR_27 |= VAR_8;

 VAR_20->options = FUNC_2(VAR_27);
 VAR_20->fw_ver = FUNC_3(VAR_29);
 VAR_20->fw_size = FUNC_3(VAR_26);
 VAR_20->fw_seq_size = FUNC_3(VAR_26);
 FUNC_12(VAR_22, &VAR_20->dsd.address);
 VAR_20->dsd.length = FUNC_3(VAR_26);
 VAR_20->data_seg_cnt = FUNC_2(1);

 VAR_24 = FUNC_15(VAR_18, VAR_20, VAR_21, 0, 120);

 if (VAR_24) {
  FUNC_14(VAR_13, VAR_18, 0x7037,
      "Vendor request 84xx updatefw failed.\n");

  VAR_24 = (VAR_1 << 16);
 } else {
  FUNC_13(VAR_12, VAR_18, 0x7038,
      "Vendor request 84xx updatefw completed.\n");

  VAR_14->reply_len = sizeof(struct fc_bsg_reply);
  VAR_16->result = VAR_2;
 }

 FUNC_7(VAR_19->s_dma_pool, VAR_20, VAR_21);

done_free_fw_buf:
 FUNC_5(&VAR_19->pdev->dev, VAR_26, VAR_23, VAR_22);

done_unmap_sg:
 FUNC_9(&VAR_19->pdev->dev, VAR_14->request_payload.sg_list,
  VAR_14->request_payload.sg_cnt, VAR_3);

 if (!VAR_24)
  FUNC_1(VAR_14, VAR_16->result,
          VAR_16->reply_payload_rcv_len);
 return VAR_24;
}
