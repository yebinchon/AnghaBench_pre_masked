
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct hwrm_ring_free_output {int error_code; } ;
struct hwrm_ring_free_input {int ring_id; int ring_type; int member_0; } ;
struct bnxt_ring_struct {int fw_ring_id; } ;
struct bnxt {int dev; int hwrm_cmd_lock; int state; struct hwrm_ring_free_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bnxt*,struct hwrm_ring_free_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_ring_free_input*,int ,int,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,char*,int ,int,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct bnxt *VAR_4,
       struct bnxt_ring_struct *VAR_5,
       u32 VAR_6, int VAR_7)
{
 int VAR_8;
 struct hwrm_ring_free_input VAR_9 = {0};
 struct hwrm_ring_free_output *VAR_10 = VAR_4->hwrm_cmd_resp_addr;
 u16 VAR_11;

 if (FUNC_7(VAR_0, &VAR_4->state))
  return 0;

 FUNC_1(VAR_4, &VAR_9, VAR_3, VAR_7, -1);
 VAR_9.ring_type = VAR_6;
 VAR_9.ring_id = FUNC_2(VAR_5->fw_ring_id);

 FUNC_4(&VAR_4->hwrm_cmd_lock);
 VAR_8 = FUNC_0(VAR_4, &VAR_9, sizeof(VAR_9), VAR_2);
 VAR_11 = FUNC_3(VAR_10->error_code);
 FUNC_5(&VAR_4->hwrm_cmd_lock);

 if (VAR_8 || VAR_11) {
  FUNC_6(VAR_4->dev, "hwrm_ring_free type %d failed. rc:%x err:%x\n",
      VAR_6, VAR_8, VAR_11);
  return -VAR_1;
 }
 return 0;
}
