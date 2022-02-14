
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union qed_mcp_protocol_stats {int dummy; } qed_mcp_protocol_stats ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_mb_params {int data_src_size; union qed_mcp_protocol_stats* p_data_src; int param; int cmd; } ;
struct qed_hwfn {int cdev; } ;
typedef int stats ;
typedef int mb_params ;
typedef enum qed_mcp_protocol_type { ____Placeholder_qed_mcp_protocol_type } qed_mcp_protocol_type ;
typedef enum MFW_DRV_MSG_TYPE { ____Placeholder_MFW_DRV_MSG_TYPE } MFW_DRV_MSG_TYPE ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct qed_mcp_mb_params*,int ,int) ;
 int FUNC_2 (int ,int,union qed_mcp_protocol_stats*) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct qed_mcp_mb_params*) ;

__attribute__((used)) static void FUNC_4(struct qed_hwfn *VAR_9,
     struct qed_ptt *VAR_10,
     enum MFW_DRV_MSG_TYPE VAR_11)
{
 enum qed_mcp_protocol_type VAR_12;
 union qed_mcp_protocol_stats VAR_13;
 struct qed_mcp_mb_params VAR_14;
 u32 VAR_15;

 switch (VAR_11) {
 case 129:
  VAR_12 = VAR_7;
  VAR_15 = VAR_3;
  break;
 case 131:
  VAR_12 = VAR_5;
  VAR_15 = VAR_1;
  break;
 case 130:
  VAR_12 = VAR_6;
  VAR_15 = VAR_2;
  break;
 case 128:
  VAR_12 = VAR_8;
  VAR_15 = VAR_4;
  break;
 default:
  FUNC_0(VAR_9, "Invalid protocol type %d\n", VAR_11);
  return;
 }

 FUNC_2(VAR_9->cdev, VAR_12, &VAR_13);

 FUNC_1(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.cmd = VAR_0;
 VAR_14.param = VAR_15;
 VAR_14.p_data_src = &VAR_13;
 VAR_14.data_src_size = sizeof(VAR_13);
 FUNC_3(VAR_9, VAR_10, &VAR_14);
}
