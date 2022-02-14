
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_info {scalar_t__ res_id; int cmd; int data_src_size; int data_dst_size; int flags; int vf_offset; int vf_size; int offset; int size; int mcp_param; int mcp_resp; int param; struct resource_info* p_data_src; struct resource_info* p_data_dst; } ;
struct qed_resc_alloc_out_params {int flags; int vf_resc_start; int vf_resc_num; int resc_start; int resc_num; int mcp_param; int mcp_resp; } ;
struct qed_resc_alloc_in_params {int cmd; int resc_max_val; int res_id; } ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_mb_params {scalar_t__ res_id; int cmd; int data_src_size; int data_dst_size; int flags; int vf_offset; int vf_size; int offset; int size; int mcp_param; int mcp_resp; int param; struct qed_mcp_mb_params* p_data_src; struct qed_mcp_mb_params* p_data_dst; } ;
struct qed_hwfn {int dummy; } ;
typedef int mfw_resc_info ;
typedef int mb_params ;


 int FUNC_0 (struct qed_hwfn*,char*,int,...) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int,int ,int ,int ,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct resource_info*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct qed_hwfn*,struct qed_ptt*,struct resource_info*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct qed_hwfn *VAR_8,
       struct qed_ptt *VAR_9,
       struct qed_resc_alloc_in_params *VAR_10,
       struct qed_resc_alloc_out_params *VAR_11)
{
 struct qed_mcp_mb_params VAR_12;
 struct resource_info VAR_13;
 int VAR_14;

 FUNC_3(&VAR_13, 0, sizeof(VAR_13));

 VAR_13.res_id = FUNC_6(VAR_10->res_id);
 if (VAR_13.res_id == VAR_7) {
  FUNC_0(VAR_8,
         "Failed to match resource %d [%s] with the MFW resources\n",
         VAR_10->res_id,
         FUNC_4(VAR_10->res_id));
  return -VAR_2;
 }

 switch (VAR_10->cmd) {
 case 128:
  VAR_13.size = VAR_10->resc_max_val;

 case 129:
  break;
 default:
  FUNC_0(VAR_8, "Unexpected resource alloc command [0x%08x]\n",
         VAR_10->cmd);
  return -VAR_2;
 }

 FUNC_3(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.cmd = VAR_10->cmd;
 VAR_12.param = VAR_6;
 VAR_12.p_data_src = &VAR_13;
 VAR_12.data_src_size = sizeof(VAR_13);
 VAR_12.p_data_dst = VAR_12.p_data_src;
 VAR_12.data_dst_size = VAR_12.data_src_size;

 FUNC_1(VAR_8,
     VAR_5,
     "Resource message request: cmd 0x%08x, res_id %d [%s], hsi_version %d.%d, val 0x%x\n",
     VAR_10->cmd,
     VAR_10->res_id,
     FUNC_4(VAR_10->res_id),
     FUNC_2(VAR_12.param,
         VAR_0),
     FUNC_2(VAR_12.param,
         VAR_1),
     VAR_10->resc_max_val);

 VAR_14 = FUNC_5(VAR_8, VAR_9, &VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_11->mcp_resp = VAR_12.mcp_resp;
 VAR_11->mcp_param = VAR_12.mcp_param;
 VAR_11->resc_num = VAR_13.size;
 VAR_11->resc_start = VAR_13.offset;
 VAR_11->vf_resc_num = VAR_13.vf_size;
 VAR_11->vf_resc_start = VAR_13.vf_offset;
 VAR_11->flags = VAR_13.flags;

 FUNC_1(VAR_8,
     VAR_5,
     "Resource message response: mfw_hsi_version %d.%d, num 0x%x, start 0x%x, vf_num 0x%x, vf_start 0x%x, flags 0x%08x\n",
     FUNC_2(VAR_11->mcp_param,
         VAR_3),
     FUNC_2(VAR_11->mcp_param,
         VAR_4),
     VAR_11->resc_num,
     VAR_11->resc_start,
     VAR_11->vf_resc_num,
     VAR_11->vf_resc_start, VAR_11->flags);

 return 0;
}
