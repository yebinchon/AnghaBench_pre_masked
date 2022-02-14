
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_vf_info {int b_malicious; int abs_vf_id; } ;
struct qed_hwfn {int dummy; } ;
struct malicious_vf_eqe_data {int err_id; int vf_id; } ;


 int FUNC_0 (struct qed_hwfn*,char*,int ,int ) ;
 int FUNC_1 (struct qed_hwfn*,char*,int ,int ) ;
 struct qed_vf_info* FUNC_2 (struct qed_hwfn*,int ) ;

__attribute__((used)) static void FUNC_3(struct qed_hwfn *VAR_0,
         struct malicious_vf_eqe_data *VAR_1)
{
 struct qed_vf_info *VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1->vf_id);

 if (!VAR_2)
  return;

 if (!VAR_2->b_malicious) {
  FUNC_1(VAR_0,
     "VF [%d] - Malicious behavior [%02x]\n",
     VAR_2->abs_vf_id, VAR_1->err_id);

  VAR_2->b_malicious = 1;
 } else {
  FUNC_0(VAR_0,
   "VF [%d] - Malicious behavior [%02x]\n",
   VAR_2->abs_vf_id, VAR_1->err_id);
 }
}
