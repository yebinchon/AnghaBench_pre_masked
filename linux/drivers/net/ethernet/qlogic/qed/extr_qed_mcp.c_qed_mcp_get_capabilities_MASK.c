
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_1__* mcp_info; } ;
struct TYPE_2__ {int capabilities; } ;


 int FUNC_0 (struct qed_hwfn*,int,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int ,int *,int *) ;

int FUNC_2(struct qed_hwfn *VAR_3, struct qed_ptt *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_0,
    0, &VAR_5, &VAR_3->mcp_info->capabilities);
 if (!VAR_6)
  FUNC_0(VAR_3, (VAR_2 | VAR_1),
      "MFW supported features: %08x\n",
      VAR_3->mcp_info->capabilities);

 return VAR_6;
}
