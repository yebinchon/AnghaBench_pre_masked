
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_ptt {int dummy; } ;
struct qed_hwfn {TYPE_1__* p_sp_sb; } ;
struct TYPE_2__ {int sb_info; } ;


 int FUNC_0 (struct qed_hwfn*,struct qed_ptt*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_ptt*,int *) ;
 int FUNC_2 (struct qed_hwfn*) ;

void FUNC_3(struct qed_hwfn *VAR_0, struct qed_ptt *VAR_1)
{
 FUNC_1(VAR_0, VAR_1, &VAR_0->p_sp_sb->sb_info);
 FUNC_0(VAR_0, VAR_1);
 FUNC_2(VAR_0);
}
