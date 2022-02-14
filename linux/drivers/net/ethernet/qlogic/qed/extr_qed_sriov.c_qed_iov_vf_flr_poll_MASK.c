
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_vf_info {int dummy; } ;
struct qed_ptt {int dummy; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,struct qed_vf_info*,struct qed_ptt*) ;
 int FUNC_1 (struct qed_hwfn*,struct qed_vf_info*,struct qed_ptt*) ;

__attribute__((used)) static int FUNC_2(struct qed_hwfn *VAR_0,
          struct qed_vf_info *VAR_1, struct qed_ptt *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 return 0;
}
