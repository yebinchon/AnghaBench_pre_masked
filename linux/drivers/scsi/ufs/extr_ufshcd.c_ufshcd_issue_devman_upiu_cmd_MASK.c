
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dword_2; int dword_0; } ;
struct utp_upiu_req {TYPE_2__ header; } ;
typedef struct utp_upiu_req u8 ;
typedef int u32 ;
typedef int u16 ;
struct utp_upiu_rsp {int dummy; } ;
struct ufshcd_lrb {int task_tag; int intr_cmd; struct utp_upiu_req* ucd_rsp_ptr; struct utp_upiu_req* ucd_req_ptr; int command_type; scalar_t__ lun; int * sense_buffer; scalar_t__ sense_bufflen; int * cmd; } ;
struct TYPE_6__ {int type; int tag_wq; struct completion* complete; } ;
struct ufs_hba {int ufs_version; int clk_scaling_lock; TYPE_3__ dev_cmd; int dev; TYPE_1__* host; struct ufshcd_lrb* lrb; } ;
struct completion {int dummy; } ;
typedef enum query_opcode { ____Placeholder_query_opcode } query_opcode ;
struct TYPE_4__ {int host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct completion*) ;
 int FUNC_6 (struct utp_upiu_req*,struct utp_upiu_req*,int) ;
 int FUNC_7 (struct utp_upiu_req*,int ,int) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ,unsigned long) ;
 int FUNC_10 (struct ufs_hba*,int*) ;
 int FUNC_11 (struct ufshcd_lrb*,int *,int ) ;
 int FUNC_12 (struct ufs_hba*,int) ;
 int FUNC_13 (struct ufs_hba*,int) ;
 int FUNC_14 (struct ufs_hba*,struct ufshcd_lrb*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 () ;

__attribute__((used)) static int FUNC_19(struct ufs_hba *VAR_8,
     struct utp_upiu_req *VAR_9,
     struct utp_upiu_req *VAR_10,
     u8 *VAR_11, int *VAR_12,
     int VAR_13,
     enum query_opcode VAR_14)
{
 struct ufshcd_lrb *VAR_15;
 int VAR_16 = 0;
 int VAR_17;
 struct completion VAR_18;
 unsigned long VAR_19;
 u32 VAR_20;

 FUNC_4(&VAR_8->clk_scaling_lock);

 FUNC_16(VAR_8->dev_cmd.tag_wq, FUNC_10(VAR_8, &VAR_17));

 FUNC_5(&VAR_18);
 VAR_15 = &VAR_8->lrb[VAR_17];
 FUNC_0(VAR_15->cmd);

 VAR_15->cmd = ((void*)0);
 VAR_15->sense_bufflen = 0;
 VAR_15->sense_buffer = ((void*)0);
 VAR_15->task_tag = VAR_17;
 VAR_15->lun = 0;
 VAR_15->intr_cmd = 1;
 VAR_8->dev_cmd.type = VAR_13;

 switch (VAR_8->ufs_version) {
 case 129:
 case 128:
  VAR_15->command_type = VAR_6;
  break;
 default:
  VAR_15->command_type = VAR_7;
  break;
 }


 VAR_9->header.dword_0 |= FUNC_2(VAR_17);

 FUNC_11(VAR_15, &VAR_20, VAR_0);


 FUNC_6(VAR_15->ucd_req_ptr, VAR_9, sizeof(*VAR_15->ucd_req_ptr));
 if (VAR_11 && VAR_14 == VAR_5) {




  FUNC_6(VAR_15->ucd_req_ptr + 1, VAR_11, *VAR_12);
  *VAR_12 = 0;
 }

 FUNC_7(VAR_15->ucd_rsp_ptr, 0, sizeof(struct utp_upiu_rsp));

 VAR_8->dev_cmd.complete = &VAR_18;


 FUNC_18();
 FUNC_8(VAR_8->host->host_lock, VAR_19);
 FUNC_13(VAR_8, VAR_17);
 FUNC_9(VAR_8->host->host_lock, VAR_19);






 FUNC_14(VAR_8, VAR_15, VAR_3);


 FUNC_6(VAR_10, VAR_15->ucd_rsp_ptr, sizeof(*VAR_10));
 if (VAR_11 && VAR_14 == VAR_4) {
  u8 *VAR_21 = (u8 *)VAR_15->ucd_rsp_ptr + sizeof(*VAR_10);
  u16 VAR_22 = FUNC_1(VAR_15->ucd_rsp_ptr->header.dword_2) &
          VAR_2;

  if (*VAR_12 >= VAR_22) {
   FUNC_6(VAR_11, VAR_21, VAR_22);
   *VAR_12 = VAR_22;
  } else {
   FUNC_3(VAR_8->dev, "rsp size is bigger than buffer");
   *VAR_12 = 0;
   VAR_16 = -VAR_1;
  }
 }

 FUNC_12(VAR_8, VAR_17);
 FUNC_17(&VAR_8->dev_cmd.tag_wq);
 FUNC_15(&VAR_8->clk_scaling_lock);
 return VAR_16;
}
