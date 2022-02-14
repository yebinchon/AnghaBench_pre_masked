
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct qed_vf_info {int configured_features; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct qed_hwfn*,struct qed_vf_info*) ;

__attribute__((used)) static int
FUNC_2(struct qed_hwfn *VAR_1,
       struct qed_vf_info *VAR_2, u64 VAR_3)
{
 int VAR_4 = 0;

 if ((VAR_3 & FUNC_0(VAR_0)) &&
     !(VAR_2->configured_features & (1 << VAR_0)))
  VAR_4 = FUNC_1(VAR_1, VAR_2);

 return VAR_4;
}
