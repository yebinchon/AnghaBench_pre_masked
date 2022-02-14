
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct qed_public_vf_info {int dummy; } ;
struct qed_vf_info {struct qed_public_vf_info p_vf_info; } ;
struct qed_hwfn {int dummy; } ;


 struct qed_vf_info* FUNC_0 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static struct
qed_public_vf_info *FUNC_1(struct qed_hwfn *VAR_0,
            u16 VAR_1,
            bool VAR_2)
{
 struct qed_vf_info *VAR_3 = ((void*)0);

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (!VAR_3)
  return ((void*)0);

 return &VAR_3->p_vf_info;
}
