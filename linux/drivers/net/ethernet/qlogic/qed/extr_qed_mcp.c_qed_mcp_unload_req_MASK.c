
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_mcp_mb_params {int flags; int param; int cmd; } ;
struct qed_hwfn {TYPE_1__* cdev; } ;
typedef int mb_params ;
struct TYPE_2__ {int wol_config; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int FUNC_1 (struct qed_mcp_mb_params*,int ,int) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,struct qed_mcp_mb_params*) ;

int FUNC_3(struct qed_hwfn *VAR_6, struct qed_ptt *VAR_7)
{
 struct qed_mcp_mb_params VAR_8;
 u32 VAR_9;

 switch (VAR_6->cdev->wol_config) {
 case 129:
  VAR_9 = VAR_0;
  break;
 case 128:
  VAR_9 = VAR_1;
  break;
 default:
  FUNC_0(VAR_6,
     "Unknown WoL configuration %02x\n",
     VAR_6->cdev->wol_config);

 case 130:
  VAR_9 = VAR_2;
 }

 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.cmd = VAR_3;
 VAR_8.param = VAR_9;
 VAR_8.flags = VAR_5 | VAR_4;

 return FUNC_2(VAR_6, VAR_7, &VAR_8);
}
