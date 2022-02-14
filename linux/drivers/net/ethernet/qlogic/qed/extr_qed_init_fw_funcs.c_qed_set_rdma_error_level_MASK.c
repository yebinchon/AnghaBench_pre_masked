
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct qed_hwfn*,scalar_t__) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,scalar_t__) ;

void FUNC_2(struct qed_hwfn *VAR_1,
         struct qed_ptt *VAR_2,
         u8 VAR_3[VAR_0])
{
 u8 VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  u32 VAR_5 = FUNC_0(VAR_1, VAR_4);

  FUNC_1(VAR_1, VAR_2, VAR_5, VAR_3[VAR_4]);
 }
}
