
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_qm_info {scalar_t__ num_vports; } ;
struct qed_hwfn {struct qed_qm_info qm_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct qed_hwfn*) ;

__attribute__((used)) static void FUNC_2(struct qed_hwfn *VAR_0)
{
 struct qed_qm_info *VAR_1 = &VAR_0->qm_info;

 VAR_1->num_vports++;

 if (VAR_1->num_vports > FUNC_1(VAR_0))
  FUNC_0(VAR_0,
         "vport overflow! qm_info->num_vports %d, qm_init_get_num_vports() %d\n",
         VAR_1->num_vports, FUNC_1(VAR_0));
}
