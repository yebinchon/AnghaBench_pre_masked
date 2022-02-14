
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qed_vf_info {scalar_t__ state; } ;
struct qed_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct qed_vf_info* FUNC_0 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static bool FUNC_1(struct qed_hwfn *VAR_1, int VAR_2)
{
 struct qed_vf_info *VAR_3;

 VAR_3 = FUNC_0(VAR_1, (u16) VAR_2, 1);
 if (!VAR_3)
  return 1;

 return VAR_3->state == VAR_0;
}
