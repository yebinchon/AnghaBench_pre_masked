
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct qed_vf_iov {struct qed_sb_info** sbs_info; } ;
struct qed_sb_info {int dummy; } ;
struct qed_hwfn {struct qed_vf_iov* vf_iov_info; } ;


 int FUNC_0 (struct qed_hwfn*,char*,...) ;
 size_t VAR_0 ;

void FUNC_1(struct qed_hwfn *VAR_1,
   u16 VAR_2, struct qed_sb_info *VAR_3)
{
 struct qed_vf_iov *VAR_4 = VAR_1->vf_iov_info;

 if (!VAR_4) {
  FUNC_0(VAR_1, "vf_sriov_info isn't initialized\n");
  return;
 }

 if (VAR_2 >= VAR_0) {
  FUNC_0(VAR_1, "Can't configure SB %04x\n", VAR_2);
  return;
 }

 VAR_4->sbs_info[VAR_2] = VAR_3;
}
