
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_mcp_mb_params {scalar_t__ mcp_resp; int mcp_param; int cmd; int member_0; } ;
struct qed_hwfn {struct qed_dev* cdev; } ;
struct qed_dev {int ppfid_bitmap; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,struct qed_mcp_mb_params*) ;

int FUNC_4(struct qed_hwfn *VAR_5, struct qed_ptt *VAR_6)
{
 struct qed_mcp_mb_params VAR_7 = {0};
 struct qed_dev *VAR_8 = VAR_5->cdev;
 int VAR_9;

 VAR_7.cmd = VAR_0;
 VAR_9 = FUNC_3(VAR_5, VAR_6, &VAR_7);
 if (VAR_9)
  return VAR_9;

 if (VAR_7.mcp_resp == VAR_3) {
  FUNC_0(VAR_5,
   "The get_ppfid_bitmap command is unsupported by the MFW\n");
  return -VAR_1;
 }

 VAR_8->ppfid_bitmap = FUNC_2(VAR_7.mcp_param,
            VAR_2);

 FUNC_1(VAR_5, VAR_4, "PPFID bitmap 0x%hhx\n",
     VAR_8->ppfid_bitmap);

 return 0;
}
