
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_sb_cnt_info {int dummy; } ;
struct qed_igu_info {int usage; } ;
struct TYPE_2__ {struct qed_igu_info* p_igu_info; } ;
struct qed_hwfn {TYPE_1__ hw_info; } ;


 int FUNC_0 (struct qed_sb_cnt_info*,int *,int) ;

void FUNC_1(struct qed_hwfn *VAR_0,
    struct qed_sb_cnt_info *VAR_1)
{
 struct qed_igu_info *VAR_2 = VAR_0->hw_info.p_igu_info;

 if (!VAR_2 || !VAR_1)
  return;

 FUNC_0(VAR_1, &VAR_2->usage, sizeof(*VAR_1));
}
