
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,char*) ;
 int FUNC_1 (struct qed_hwfn*,char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct qed_hwfn*,struct qed_ptt*,int ,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (struct qed_hwfn*,int) ;
 scalar_t__ FUNC_5 (struct qed_hwfn*,struct qed_ptt*,int ) ;

int FUNC_6(struct qed_hwfn *VAR_7, struct qed_ptt *VAR_8)
{
 u32 VAR_9 = 0, VAR_10 = 0, VAR_11, VAR_12 = 0;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_7, VAR_8, VAR_0, 0, &VAR_9,
    &VAR_10);
 if (VAR_13) {
  FUNC_0(VAR_7, "MCP response failure, aborting\n");
  return VAR_13;
 }

 do {
  FUNC_2(VAR_6);
  VAR_11 = FUNC_5(VAR_7, VAR_8, VAR_3);
  if (VAR_11 & VAR_4)
   break;
 } while (++VAR_12 < VAR_5);

 if (VAR_12 == VAR_5) {
  FUNC_1(VAR_7,
     "Failed to halt the MCP [CPU_MODE = 0x%08x, CPU_STATE = 0x%08x]\n",
     FUNC_5(VAR_7, VAR_8, VAR_2), VAR_11);
  return -VAR_1;
 }

 FUNC_4(VAR_7, 1);

 return 0;
}
