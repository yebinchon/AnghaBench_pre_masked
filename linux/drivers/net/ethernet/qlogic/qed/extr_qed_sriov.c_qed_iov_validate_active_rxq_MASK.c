
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qed_vf_info {scalar_t__ num_rxqs; } ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qed_hwfn*,struct qed_vf_info*,scalar_t__,int ,int) ;

__attribute__((used)) static bool FUNC_1(struct qed_hwfn *VAR_1,
     struct qed_vf_info *VAR_2)
{
 u8 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_rxqs; VAR_3++)
  if (FUNC_0(VAR_1, VAR_2, VAR_3,
      VAR_0,
      0))
   return 1;

 return 0;
}
