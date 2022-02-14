
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qed_hwfn*,int) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_4 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

int FUNC_5(struct qed_hwfn *VAR_6, struct qed_ptt *VAR_7)
{
 u32 VAR_8, VAR_9;

 FUNC_4(VAR_6, VAR_7, VAR_3, 0xffffffff);

 VAR_8 = FUNC_3(VAR_6, VAR_7, VAR_1);
 VAR_8 &= ~VAR_2;
 FUNC_4(VAR_6, VAR_7, VAR_1, VAR_8);
 FUNC_1(VAR_5);
 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_3);

 if (VAR_9 & VAR_4) {
  FUNC_0(VAR_6,
     "Failed to resume the MCP [CPU_MODE = 0x%08x, CPU_STATE = 0x%08x]\n",
     VAR_8, VAR_9);
  return -VAR_0;
 }

 FUNC_2(VAR_6, 0);

 return 0;
}
