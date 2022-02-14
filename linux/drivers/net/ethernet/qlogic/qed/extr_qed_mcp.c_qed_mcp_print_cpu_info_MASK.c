
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_4,
       struct qed_ptt *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 u32 VAR_11 = VAR_3;

 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_0);
 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_2);
 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_1);
 FUNC_2(VAR_11);
 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_1);
 FUNC_2(VAR_11);
 VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_1);

 FUNC_0(VAR_4,
    "MCP CPU info: mode 0x%08x, state 0x%08x, pc {0x%08x, 0x%08x, 0x%08x}\n",
    VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
}
