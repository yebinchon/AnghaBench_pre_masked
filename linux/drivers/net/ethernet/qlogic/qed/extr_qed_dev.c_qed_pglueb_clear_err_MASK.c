
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_ptt {int dummy; } ;
struct qed_hwfn {int abs_pf_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_1, struct qed_ptt *VAR_2)
{
 FUNC_1(VAR_1, VAR_2, VAR_0,
        FUNC_0(VAR_1->abs_pf_id));
}
