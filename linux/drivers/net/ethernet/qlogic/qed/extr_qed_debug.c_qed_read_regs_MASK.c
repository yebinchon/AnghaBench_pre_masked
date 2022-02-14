
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (size_t) ;
 size_t FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ) ;

void FUNC_2(struct qed_hwfn *VAR_0,
     struct qed_ptt *VAR_1, u32 *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_2[VAR_5] = FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_3 + VAR_5));
}
