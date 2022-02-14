
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,int ,int ) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_ptt*,int ) ;

void FUNC_3(struct qed_hwfn *VAR_1,
     struct qed_ptt *VAR_2,
     u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);

 FUNC_1(VAR_1, VAR_5, VAR_4);
 FUNC_0(VAR_1, VAR_0,
     "bar_addr 0x%x, hw_addr 0x%x, val 0x%x\n",
     VAR_5, VAR_3, VAR_4);
}
