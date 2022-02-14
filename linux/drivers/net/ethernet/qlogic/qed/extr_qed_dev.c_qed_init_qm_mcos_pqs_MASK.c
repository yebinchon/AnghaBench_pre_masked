
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qed_qm_info {int num_pqs; } ;
struct qed_hwfn {struct qed_qm_info qm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qed_hwfn*) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;
 int FUNC_2 (struct qed_hwfn*,struct qed_qm_info*,scalar_t__,int ) ;
 int FUNC_3 (struct qed_hwfn*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct qed_hwfn *VAR_2)
{
 struct qed_qm_info *VAR_3 = &VAR_2->qm_info;
 u8 VAR_4;

 if (!(FUNC_0(VAR_2) & VAR_0))
  return;

 FUNC_3(VAR_2, VAR_0, VAR_3->num_pqs);
 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_2); VAR_4++)
  FUNC_2(VAR_2, VAR_3, VAR_4, VAR_1);
}
