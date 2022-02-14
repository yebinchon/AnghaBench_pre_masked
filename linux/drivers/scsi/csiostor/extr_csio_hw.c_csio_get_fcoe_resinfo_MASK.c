
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_fcoe_res_info_cmd {int used_vnps; int used_fcfs; int max_vnps; int max_fcfs; int used_ssns; int used_xchgs; int max_ssns; int max_xchgs; int r_r_tov; int r_a_tov_els; int r_a_tov_seq; int e_d_tov; int retval_len16; } ;
struct csio_mb {scalar_t__ mb; } ;
struct csio_fcoe_res_info {void* max_xchgs; void* max_ssns; void* used_vnps; void* used_fcfs; void* max_vnps; void* max_fcfs; void* used_ssns; void* used_xchgs; void* r_r_tov; void* r_a_tov_els; void* r_a_tov_seq; void* e_d_tov; } ;
struct csio_hw {int mb_mempool; struct csio_fcoe_res_info fres_info; } ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;


 int FUNC_0 (struct csio_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct csio_hw*,char*,void*,void*) ;
 int FUNC_3 (struct csio_hw*,char*,...) ;
 int FUNC_4 (struct csio_hw*,struct csio_mb*,int ,int *) ;
 scalar_t__ FUNC_5 (struct csio_hw*,struct csio_mb*) ;
 struct csio_mb* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct csio_mb*,int ) ;
 int VAR_5 ;
 void* FUNC_8 (int ) ;
 void* FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(struct csio_hw *VAR_6)
{
 struct csio_fcoe_res_info *VAR_7 = &VAR_6->fres_info;
 struct fw_fcoe_res_info_cmd *VAR_8;
 struct csio_mb *VAR_9;
 enum fw_retval VAR_10;

 VAR_9 = FUNC_6(VAR_6->mb_mempool, VAR_4);
 if (!VAR_9) {
  FUNC_0(VAR_6, VAR_5);
  return -VAR_2;
 }


 FUNC_4(VAR_6, VAR_9, VAR_0, ((void*)0));

 if (FUNC_5(VAR_6, VAR_9)) {
  FUNC_3(VAR_6, "failed to issue FW_FCOE_RES_INFO_CMD\n");
  FUNC_7(VAR_9, VAR_6->mb_mempool);
  return -VAR_1;
 }

 VAR_8 = (struct fw_fcoe_res_info_cmd *)(VAR_9->mb);
 VAR_10 = FUNC_1(FUNC_8(VAR_8->retval_len16));
 if (VAR_10 != VAR_3) {
  FUNC_3(VAR_6, "FW_FCOE_RES_INFO_CMD failed with ret x%x\n",
    VAR_10);
  FUNC_7(VAR_9, VAR_6->mb_mempool);
  return -VAR_1;
 }

 VAR_7->e_d_tov = FUNC_9(VAR_8->e_d_tov);
 VAR_7->r_a_tov_seq = FUNC_9(VAR_8->r_a_tov_seq);
 VAR_7->r_a_tov_els = FUNC_9(VAR_8->r_a_tov_els);
 VAR_7->r_r_tov = FUNC_9(VAR_8->r_r_tov);
 VAR_7->max_xchgs = FUNC_8(VAR_8->max_xchgs);
 VAR_7->max_ssns = FUNC_8(VAR_8->max_ssns);
 VAR_7->used_xchgs = FUNC_8(VAR_8->used_xchgs);
 VAR_7->used_ssns = FUNC_8(VAR_8->used_ssns);
 VAR_7->max_fcfs = FUNC_8(VAR_8->max_fcfs);
 VAR_7->max_vnps = FUNC_8(VAR_8->max_vnps);
 VAR_7->used_fcfs = FUNC_8(VAR_8->used_fcfs);
 VAR_7->used_vnps = FUNC_8(VAR_8->used_vnps);

 FUNC_2(VAR_6, "max ssns:%d max xchgs:%d\n", VAR_7->max_ssns,
        VAR_7->max_xchgs);
 FUNC_7(VAR_9, VAR_6->mb_mempool);

 return 0;
}
