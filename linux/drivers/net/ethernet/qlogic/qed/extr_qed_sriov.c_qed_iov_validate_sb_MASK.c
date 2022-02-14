
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct qed_vf_info {int num_sbs; scalar_t__* igu_sbs; int abs_vf_id; } ;
struct qed_hwfn {int dummy; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,scalar_t__,int) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_1(struct qed_hwfn *VAR_1,
    struct qed_vf_info *VAR_2, u16 VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_sbs; VAR_4++)
  if (VAR_2->igu_sbs[VAR_4] == VAR_3)
   return 1;

 FUNC_0(VAR_1,
     VAR_0,
     "VF[0%02x] - tried using sb_idx %04x which doesn't exist as one of its 0x%02x SBs\n",
     VAR_2->abs_vf_id, VAR_3, VAR_2->num_sbs);

 return 0;
}
