
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int) ;

__attribute__((used)) static bool FUNC_2(struct qed_hwfn *VAR_4,
       struct qed_ptt *VAR_5,
       u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 if (!FUNC_0(VAR_4, VAR_5))
  return 0;

 FUNC_1(VAR_4, VAR_5, VAR_0, VAR_6);
 FUNC_1(VAR_4, VAR_5, VAR_1, VAR_7);
 FUNC_1(VAR_4, VAR_5, VAR_2, VAR_8);
 FUNC_1(VAR_4, VAR_5, VAR_3, 1);
 FUNC_1(VAR_4, VAR_5, VAR_3, 0);

 return FUNC_0(VAR_4, VAR_5);
}
