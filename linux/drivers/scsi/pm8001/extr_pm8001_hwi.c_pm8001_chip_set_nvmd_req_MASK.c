
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct set_nvm_data_req {void* resp_addr_lo; void* resp_addr_hi; void** reserved; void* resp_len; void* len_ir_vpdd; void* tag; } ;
struct pm8001_ioctl_payload {size_t minor_function; int length; int func_specific; } ;
struct TYPE_4__ {TYPE_1__* region; } ;
struct pm8001_hba_info {TYPE_2__ memoryMap; struct pm8001_ccb_info* ccb_info; struct inbound_queue_table* inbnd_q_tbl; } ;
struct pm8001_ccb_info {size_t ccb_tag; struct fw_control_ex* fw_control_context; } ;
struct inbound_queue_table {int dummy; } ;
struct fw_control_ex {int dummy; } ;
typedef int nvmd_req ;
struct TYPE_3__ {int phys_addr_hi; int phys_addr_lo; int virt_ptr; } ;



 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct fw_control_ex*) ;
 struct fw_control_ex* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct set_nvm_data_req*,int ,int) ;
 int FUNC_5 (struct pm8001_hba_info*,struct inbound_queue_table*,size_t,struct set_nvm_data_req*,int ) ;
 int FUNC_6 (struct pm8001_hba_info*,size_t*) ;
 int FUNC_7 (struct pm8001_hba_info*,size_t) ;

int FUNC_8(struct pm8001_hba_info *VAR_6,
 void *VAR_7)
{
 u32 VAR_8 = VAR_5;
 u32 VAR_9;
 int VAR_10;
 u32 VAR_11;
 struct pm8001_ccb_info *VAR_12;
 struct inbound_queue_table *VAR_13;
 struct set_nvm_data_req VAR_14;
 struct fw_control_ex *VAR_15;
 struct pm8001_ioctl_payload *VAR_16 = VAR_7;

 VAR_9 = VAR_16->minor_function;
 VAR_15 = FUNC_2(sizeof(struct fw_control_ex), VAR_2);
 if (!VAR_15)
  return -VAR_1;
 VAR_13 = &VAR_6->inbnd_q_tbl[0];
 FUNC_3(VAR_6->memoryMap.region[VAR_4].virt_ptr,
  &VAR_16->func_specific,
  VAR_16->length);
 FUNC_4(&VAR_14, 0, sizeof(VAR_14));
 VAR_10 = FUNC_6(VAR_6, &VAR_11);
 if (VAR_10) {
  FUNC_1(VAR_15);
  return -VAR_0;
 }
 VAR_12 = &VAR_6->ccb_info[VAR_11];
 VAR_12->fw_control_context = VAR_15;
 VAR_12->ccb_tag = VAR_11;
 VAR_14.tag = FUNC_0(VAR_11);
 switch (VAR_9) {
 case 129: {
  u32 VAR_17, VAR_18;
  VAR_17 = 0xa8;
  VAR_18 = 2;
  VAR_14.reserved[0] = FUNC_0(0xFEDCBA98);
  VAR_14.len_ir_vpdd = FUNC_0(VAR_3 | VAR_17 << 16 |
   VAR_18 << 8 | 129);
  VAR_14.resp_len = FUNC_0(VAR_16->length);
  VAR_14.resp_addr_hi =
      FUNC_0(VAR_6->memoryMap.region[VAR_4].phys_addr_hi);
  VAR_14.resp_addr_lo =
      FUNC_0(VAR_6->memoryMap.region[VAR_4].phys_addr_lo);
  break;
 }
 case 131:
  VAR_14.len_ir_vpdd = FUNC_0(VAR_3 | 131);
  VAR_14.resp_len = FUNC_0(VAR_16->length);
  VAR_14.reserved[0] = FUNC_0(0xFEDCBA98);
  VAR_14.resp_addr_hi =
      FUNC_0(VAR_6->memoryMap.region[VAR_4].phys_addr_hi);
  VAR_14.resp_addr_lo =
      FUNC_0(VAR_6->memoryMap.region[VAR_4].phys_addr_lo);
  break;
 case 128:
  VAR_14.len_ir_vpdd = FUNC_0(VAR_3 | 128);
  VAR_14.resp_len = FUNC_0(VAR_16->length);
  VAR_14.reserved[0] = FUNC_0(0xFEDCBA98);
  VAR_14.resp_addr_hi =
      FUNC_0(VAR_6->memoryMap.region[VAR_4].phys_addr_hi);
  VAR_14.resp_addr_lo =
      FUNC_0(VAR_6->memoryMap.region[VAR_4].phys_addr_lo);
  break;
 case 130:
  VAR_14.len_ir_vpdd = FUNC_0(VAR_3 | 130);
  VAR_14.resp_len = FUNC_0(VAR_16->length);
  VAR_14.reserved[0] = FUNC_0(0xFEDCBA98);
  VAR_14.resp_addr_hi =
      FUNC_0(VAR_6->memoryMap.region[VAR_4].phys_addr_hi);
  VAR_14.resp_addr_lo =
      FUNC_0(VAR_6->memoryMap.region[VAR_4].phys_addr_lo);
  break;
 default:
  break;
 }
 VAR_10 = FUNC_5(VAR_6, VAR_13, VAR_8, &VAR_14, 0);
 if (VAR_10) {
  FUNC_1(VAR_15);
  FUNC_7(VAR_6, VAR_11);
 }
 return VAR_10;
}
