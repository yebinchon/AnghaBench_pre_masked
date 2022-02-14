
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_fw_reset_input {int flags; int selfrst_status; int embedded_proc_type; int resp_addr; int member_0; } ;
struct bnxt_fw_health {int flags; int fw_reset_seq_cnt; } ;
struct bnxt {int fw_reset_timestamp; int dev; int hwrm_cmd_kong_resp_dma_addr; struct bnxt_fw_health* fw_health; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bnxt*,int) ;
 int FUNC_1 (struct bnxt*,struct hwrm_fw_reset_input*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bnxt*,struct hwrm_fw_reset_input*,int,int ) ;
 int VAR_7 ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static void FUNC_5(struct bnxt *VAR_8)
{
 struct bnxt_fw_health *VAR_9 = VAR_8->fw_health;
 int VAR_10;

 if (VAR_9->flags & VAR_1) {
  for (VAR_10 = 0; VAR_10 < VAR_9->fw_reset_seq_cnt; VAR_10++)
   FUNC_0(VAR_8, VAR_10);
 } else if (VAR_9->flags & VAR_0) {
  struct hwrm_fw_reset_input VAR_11 = {0};
  int VAR_12;

  FUNC_1(VAR_8, &VAR_11, VAR_6, -1, -1);
  VAR_11.resp_addr = FUNC_2(VAR_8->hwrm_cmd_kong_resp_dma_addr);
  VAR_11.embedded_proc_type = VAR_2;
  VAR_11.selfrst_status = VAR_4;
  VAR_11.flags = VAR_3;
  VAR_12 = FUNC_3(VAR_8, &VAR_11, sizeof(VAR_11), VAR_5);
  if (VAR_12)
   FUNC_4(VAR_8->dev, "Unable to reset FW rc=%d\n", VAR_12);
 }
 VAR_8->fw_reset_timestamp = VAR_7;
}
