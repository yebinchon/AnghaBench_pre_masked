
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct be_queue_info {int dummy; } ;
struct TYPE_3__ {struct be_queue_info q; } ;
struct TYPE_4__ {int* mcc_tag_status; TYPE_1__ mcc_obj; } ;
struct beiscsi_hba {TYPE_2__ ctrl; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_dma_mem {scalar_t__ va; } ;
struct be_cmd_resp_hdr {int actual_resp_len; int response_length; } ;
struct be_cmd_req_hdr {int opcode; int subsystem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct beiscsi_hba*,int ,int,char*,int ,int ,...) ;
 struct be_cmd_req_hdr* FUNC_1 (struct be_mcc_wrb*) ;
 scalar_t__ FUNC_2 (struct be_queue_info*,int) ;

int FUNC_3(struct beiscsi_hba *VAR_12,
          unsigned int VAR_13,
          struct be_mcc_wrb **VAR_14,
          struct be_dma_mem *VAR_15)
{
 struct be_queue_info *VAR_16 = &VAR_12->ctrl.mcc_obj.q;
 uint16_t VAR_17 = 0, VAR_18 = 0, VAR_19 = 0;
 struct be_cmd_resp_hdr *VAR_20;
 struct be_cmd_req_hdr *VAR_21;
 struct be_mcc_wrb *VAR_22;
 uint32_t VAR_23;
 int VAR_24 = 0;

 VAR_23 = VAR_12->ctrl.mcc_tag_status[VAR_13];
 VAR_17 = (VAR_23 & VAR_5);
 VAR_18 = ((VAR_23 & VAR_3) >>
   VAR_4);

 if (VAR_15) {
  VAR_21 = (struct be_cmd_req_hdr *)VAR_15->va;
 } else {
  VAR_19 = (VAR_23 & VAR_6) >>
     VAR_7;
  VAR_22 = (struct be_mcc_wrb *)FUNC_2(VAR_16, VAR_19);
  VAR_21 = FUNC_1(VAR_22);

  if (VAR_14)
   *VAR_14 = VAR_22;
 }

 if (VAR_17 || VAR_18) {
  FUNC_0(VAR_12, VAR_10,
       VAR_2 | VAR_1 |
       VAR_0,
       "BC_%d : MBX Cmd Failed for Subsys : %d Opcode : %d with Status : %d and Extd_Status : %d\n",
       VAR_21->subsystem, VAR_21->opcode,
       VAR_17, VAR_18);
  VAR_24 = -VAR_9;
  if (VAR_17 == VAR_11) {
   VAR_20 = (struct be_cmd_resp_hdr *)VAR_21;
   FUNC_0(VAR_12, VAR_10,
        VAR_2 | VAR_1 |
        VAR_0,
        "BC_%d : Insufficient Buffer Error Resp_Len : %d Actual_Resp_Len : %d\n",
        VAR_20->response_length,
        VAR_20->actual_resp_len);
   VAR_24 = -VAR_8;
  }
 }

 return VAR_24;
}
