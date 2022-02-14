
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct qla_hw_data {int optrom_size; scalar_t__ optrom_state; int optrom_region_start; int flt_region_boot; int flt_region_fw; scalar_t__ optrom_region_size; int optrom_buffer; int pdev; } ;
struct TYPE_9__ {int* vendor_cmd; } ;
struct TYPE_10__ {TYPE_1__ h_vendor; } ;
struct fc_bsg_request {TYPE_2__ rqst_data; } ;
struct TYPE_12__ {scalar_t__ payload_len; } ;
struct TYPE_11__ {scalar_t__ payload_len; } ;
struct bsg_job {TYPE_4__ reply_payload; TYPE_3__ request_payload; struct fc_bsg_request* request; } ;
struct TYPE_13__ {struct qla_hw_data* hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 scalar_t__ FUNC_3 (struct qla_hw_data*) ;
 scalar_t__ FUNC_4 (struct qla_hw_data*) ;
 scalar_t__ FUNC_5 (struct qla_hw_data*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,TYPE_5__*,int,char*,scalar_t__) ;
 int VAR_7 ;
 int FUNC_8 (int ,TYPE_5__*,int,char*,scalar_t__,...) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static int
FUNC_11(struct bsg_job *VAR_10, scsi_qla_host_t *VAR_11,
 uint8_t VAR_12)
{
 struct fc_bsg_request *VAR_13 = VAR_10->request;
 uint32_t VAR_14 = 0;
 int VAR_15 = 0;
 struct qla_hw_data *VAR_16 = VAR_11->hw;

 if (FUNC_9(FUNC_6(VAR_16->pdev)))
  return -VAR_1;

 VAR_14 = VAR_13->rqst_data.h_vendor.vendor_cmd[1];
 if (VAR_14 > VAR_16->optrom_size) {
  FUNC_8(VAR_9, VAR_11, 0x7055,
      "start %d > optrom_size %d.\n", VAR_14, VAR_16->optrom_size);
  return -VAR_1;
 }

 if (VAR_16->optrom_state != VAR_5) {
  FUNC_8(VAR_8, VAR_11, 0x7056,
      "optrom_state %d.\n", VAR_16->optrom_state);
  return -VAR_0;
 }

 VAR_16->optrom_region_start = VAR_14;
 FUNC_7(VAR_7, VAR_11, 0x7057, "is_update=%d.\n", VAR_12);
 if (VAR_12) {
  if (VAR_16->optrom_size == VAR_3 && VAR_14 == 0)
   VAR_15 = 1;
  else if (VAR_14 == (VAR_16->flt_region_boot * 4) ||
      VAR_14 == (VAR_16->flt_region_fw * 4))
   VAR_15 = 1;
  else if (FUNC_2(VAR_16) || FUNC_3(VAR_16) ||
      FUNC_0(VAR_16) || FUNC_1(VAR_16) || FUNC_4(VAR_16) ||
      FUNC_5(VAR_16))
   VAR_15 = 1;
  if (!VAR_15) {
   FUNC_8(VAR_9, VAR_11, 0x7058,
       "Invalid start region 0x%x/0x%x.\n", VAR_14,
       VAR_10->request_payload.payload_len);
   return -VAR_1;
  }

  VAR_16->optrom_region_size = VAR_14 +
      VAR_10->request_payload.payload_len > VAR_16->optrom_size ?
      VAR_16->optrom_size - VAR_14 :
      VAR_10->request_payload.payload_len;
  VAR_16->optrom_state = VAR_6;
 } else {
  VAR_16->optrom_region_size = VAR_14 +
      VAR_10->reply_payload.payload_len > VAR_16->optrom_size ?
      VAR_16->optrom_size - VAR_14 :
      VAR_10->reply_payload.payload_len;
  VAR_16->optrom_state = VAR_4;
 }

 VAR_16->optrom_buffer = FUNC_10(VAR_16->optrom_region_size);
 if (!VAR_16->optrom_buffer) {
  FUNC_8(VAR_9, VAR_11, 0x7059,
      "Read: Unable to allocate memory for optrom retrieval "
      "(%x)\n", VAR_16->optrom_region_size);

  VAR_16->optrom_state = VAR_5;
  return -VAR_2;
 }

 return 0;
}
