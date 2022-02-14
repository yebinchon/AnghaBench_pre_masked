
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {scalar_t__ drv_mb_seq; int cmd_lock; scalar_t__ b_block_cmd; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,char*) ;
 int FUNC_2 (struct qed_hwfn*,int ,char*,scalar_t__) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*) ;
 scalar_t__ FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;

int FUNC_9(struct qed_hwfn *VAR_8, struct qed_ptt *VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12 = VAR_5, VAR_13 = 0;
 int VAR_14 = 0;

 if (VAR_8->mcp_info->b_block_cmd) {
  FUNC_1(VAR_8,
     "The MFW is not responsive. Avoid sending MCP_RESET mailbox command.\n");
  return -VAR_2;
 }


 FUNC_6(&VAR_8->mcp_info->cmd_lock);

 VAR_10 = FUNC_5(VAR_8, VAR_9, VAR_3);


 FUNC_4(VAR_8, VAR_9);
 VAR_11 = ++VAR_8->mcp_info->drv_mb_seq;
 FUNC_3(VAR_8, VAR_9, VAR_7, (VAR_0 | VAR_11));

 do {

  FUNC_8(VAR_12);

 } while ((VAR_10 == FUNC_5(VAR_8, VAR_9,
           VAR_3)) &&
   (VAR_13++ < VAR_4));

 if (VAR_10 !=
     FUNC_5(VAR_8, VAR_9, VAR_3)) {
  FUNC_2(VAR_8, VAR_6,
      "MCP was reset after %d usec\n", VAR_13 * VAR_12);
 } else {
  FUNC_0(VAR_8, "Failed to reset MCP\n");
  VAR_14 = -VAR_1;
 }

 FUNC_7(&VAR_8->mcp_info->cmd_lock);

 return VAR_14;
}
