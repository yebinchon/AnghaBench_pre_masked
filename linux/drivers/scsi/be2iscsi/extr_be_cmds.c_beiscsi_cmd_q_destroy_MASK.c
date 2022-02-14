
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct beiscsi_hba {int dummy; } ;
struct be_queue_info {int id; } ;
struct be_mcc_wrb {int dummy; } ;
struct be_ctrl_info {int mbox_lock; int pdev; int mbox_mem; } ;
struct be_cmd_req_q_destroy {int id; int hdr; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;






 int FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (struct be_ctrl_info*) ;
 int FUNC_3 (struct be_mcc_wrb*,int,int,int ) ;
 int FUNC_4 (struct beiscsi_hba*,int ,int ,char*,int) ;
 int FUNC_5 (int ) ;
 struct be_cmd_req_q_destroy* FUNC_6 (struct be_mcc_wrb*) ;
 int FUNC_7 (struct be_mcc_wrb*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 struct beiscsi_hba* FUNC_10 (int ) ;
 struct be_mcc_wrb* FUNC_11 (int *) ;

int FUNC_12(struct be_ctrl_info *VAR_10, struct be_queue_info *VAR_11,
     int VAR_12)
{
 struct be_mcc_wrb *VAR_13 = FUNC_11(&VAR_10->mbox_mem);
 struct be_cmd_req_q_destroy *VAR_14 = FUNC_6(VAR_13);
 struct beiscsi_hba *VAR_15 = FUNC_10(VAR_10->pdev);
 u8 VAR_16 = 0, VAR_17 = 0;
 int VAR_18;

 FUNC_4(VAR_15, VAR_3, VAR_0,
      "BC_%d : In beiscsi_cmd_q_destroy "
      "queue_type : %d\n", VAR_12);

 FUNC_8(&VAR_10->mbox_lock);
 FUNC_7(VAR_13, 0, sizeof(*VAR_13));
 FUNC_3(VAR_13, sizeof(*VAR_14), 1, 0);

 switch (VAR_12) {
 case 131:
  VAR_16 = VAR_1;
  VAR_17 = VAR_5;
  break;
 case 133:
  VAR_16 = VAR_1;
  VAR_17 = VAR_4;
  break;
 case 130:
  VAR_16 = VAR_1;
  VAR_17 = VAR_9;
  break;
 case 128:
  VAR_16 = VAR_2;
  VAR_17 = VAR_8;
  break;
 case 132:
  VAR_16 = VAR_2;
  VAR_17 = VAR_7;
  break;
 case 129:
  VAR_16 = VAR_2;
  VAR_17 = VAR_6;
  break;
 default:
  FUNC_9(&VAR_10->mbox_lock);
  FUNC_0();
 }
 FUNC_1(&VAR_14->hdr, VAR_16, VAR_17, sizeof(*VAR_14));
 if (VAR_12 != 129)
  VAR_14->id = FUNC_5(VAR_11->id);

 VAR_18 = FUNC_2(VAR_10);

 FUNC_9(&VAR_10->mbox_lock);
 return VAR_18;
}
