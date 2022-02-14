
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct hwrm_dbg_ring_info_get_output {int consumer_index; int producer_index; } ;
struct hwrm_dbg_ring_info_get_input {int fw_ring_id; int ring_type; int member_0; } ;
struct bnxt {int hwrm_cmd_lock; struct hwrm_dbg_ring_info_get_output* hwrm_cmd_resp_addr; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bnxt*,struct hwrm_dbg_ring_info_get_input*,int,int ) ;
 int FUNC_1 (struct bnxt*,struct hwrm_dbg_ring_info_get_input*,int ,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct bnxt *VAR_2, u8 VAR_3,
           u32 VAR_4, u32 *VAR_5, u32 *VAR_6)
{
 struct hwrm_dbg_ring_info_get_output *VAR_7 = VAR_2->hwrm_cmd_resp_addr;
 struct hwrm_dbg_ring_info_get_input VAR_8 = {0};
 int VAR_9;

 FUNC_1(VAR_2, &VAR_8, VAR_1, -1, -1);
 VAR_8.ring_type = VAR_3;
 VAR_8.fw_ring_id = FUNC_2(VAR_4);
 FUNC_4(&VAR_2->hwrm_cmd_lock);
 VAR_9 = FUNC_0(VAR_2, &VAR_8, sizeof(VAR_8), VAR_0);
 if (!VAR_9) {
  *VAR_5 = FUNC_3(VAR_7->producer_index);
  *VAR_6 = FUNC_3(VAR_7->consumer_index);
 }
 FUNC_5(&VAR_2->hwrm_cmd_lock);
 return VAR_9;
}
