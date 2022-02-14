
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_hwfn {int p_dpc_ptt; int cdev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qed_hwfn*,int ,int ) ;
 int FUNC_2 (struct qed_hwfn*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct qed_hwfn *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2, VAR_2->p_dpc_ptt, VAR_1);


 FUNC_0(VAR_2->cdev, "MCP_REG_CPU_STATE: %08x - Masking...\n",
  VAR_3);
 FUNC_2(VAR_2, VAR_2->p_dpc_ptt, VAR_0,
        0xffffffff);

 return 0;
}
