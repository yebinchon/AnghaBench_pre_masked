
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_qm_info {int num_pqs; } ;
struct qed_hwfn {struct qed_qm_info qm_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct qed_hwfn*) ;
 int FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_1)
{
 struct qed_qm_info *VAR_2 = &VAR_1->qm_info;

 if (!(FUNC_0(VAR_1) & VAR_0))
  return;

 FUNC_2(VAR_1, VAR_0, VAR_2->num_pqs);
 FUNC_1(VAR_1);
}
