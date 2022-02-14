
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_mb_params {int mcp_resp; int mcp_param; int param; int cmd; } ;
struct qed_mcp_cmd_elem {scalar_t__ b_is_completed; } ;
struct qed_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {int cmd_lock; scalar_t__ drv_mb_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct qed_hwfn*,char*,int ,int ) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,int ,int ,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (struct qed_mcp_mb_params*,int ) ;
 int VAR_5 ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,struct qed_mcp_mb_params*,scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 struct qed_mcp_cmd_elem* FUNC_6 (struct qed_hwfn*,struct qed_mcp_mb_params*,scalar_t__) ;
 int FUNC_7 (struct qed_hwfn*,struct qed_mcp_cmd_elem*) ;
 int FUNC_8 (struct qed_hwfn*,int) ;
 int FUNC_9 (struct qed_hwfn*) ;
 int FUNC_10 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_11 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_12 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static int
FUNC_16(struct qed_hwfn *VAR_6,
         struct qed_ptt *VAR_7,
         struct qed_mcp_mb_params *VAR_8,
         u32 VAR_9, u32 VAR_10)
{
 u32 VAR_11 = 0, VAR_12 = FUNC_0(VAR_10, 1000);
 struct qed_mcp_cmd_elem *VAR_13;
 u16 VAR_14;
 int VAR_15 = 0;


 do {





  FUNC_13(&VAR_6->mcp_info->cmd_lock);

  if (!FUNC_9(VAR_6))
   break;

  VAR_15 = FUNC_12(VAR_6, VAR_7);
  if (!VAR_15)
   break;
  else if (VAR_15 != -VAR_2)
   goto err;

  FUNC_14(&VAR_6->mcp_info->cmd_lock);

  if (FUNC_3(VAR_8, VAR_1))
   FUNC_5(VAR_12);
  else
   FUNC_15(VAR_10);
 } while (++VAR_11 < VAR_9);

 if (VAR_11 >= VAR_9) {
  FUNC_1(VAR_6,
     "The MFW mailbox is occupied by an uncompleted command. Failed to send command 0x%08x [param 0x%08x].\n",
     VAR_8->cmd, VAR_8->param);
  return -VAR_2;
 }


 FUNC_11(VAR_6, VAR_7);
 VAR_14 = ++VAR_6->mcp_info->drv_mb_seq;
 VAR_13 = FUNC_6(VAR_6, VAR_8, VAR_14);
 if (!VAR_13) {
  VAR_15 = -VAR_3;
  goto err;
 }

 FUNC_4(VAR_6, VAR_7, VAR_8, VAR_14);
 FUNC_14(&VAR_6->mcp_info->cmd_lock);


 do {





  if (FUNC_3(VAR_8, VAR_1))
   FUNC_5(VAR_12);
  else
   FUNC_15(VAR_10);

  FUNC_13(&VAR_6->mcp_info->cmd_lock);

  if (VAR_13->b_is_completed)
   break;

  VAR_15 = FUNC_12(VAR_6, VAR_7);
  if (!VAR_15)
   break;
  else if (VAR_15 != -VAR_2)
   goto err;

  FUNC_14(&VAR_6->mcp_info->cmd_lock);
 } while (++VAR_11 < VAR_9);

 if (VAR_11 >= VAR_9) {
  FUNC_1(VAR_6,
     "The MFW failed to respond to command 0x%08x [param 0x%08x].\n",
     VAR_8->cmd, VAR_8->param);
  FUNC_10(VAR_6, VAR_7);

  FUNC_13(&VAR_6->mcp_info->cmd_lock);
  FUNC_7(VAR_6, VAR_13);
  FUNC_14(&VAR_6->mcp_info->cmd_lock);

  if (!FUNC_3(VAR_8, VAR_0))
   FUNC_8(VAR_6, 1);

  return -VAR_2;
 }

 FUNC_7(VAR_6, VAR_13);
 FUNC_14(&VAR_6->mcp_info->cmd_lock);

 FUNC_2(VAR_6,
     VAR_5,
     "MFW mailbox: response 0x%08x param 0x%08x [after %d.%03d ms]\n",
     VAR_8->mcp_resp,
     VAR_8->mcp_param,
     (VAR_11 * VAR_10) / 1000, (VAR_11 * VAR_10) % 1000);


 VAR_8->mcp_resp &= VAR_4;

 return 0;

err:
 FUNC_14(&VAR_6->mcp_info->cmd_lock);
 return VAR_15;
}
